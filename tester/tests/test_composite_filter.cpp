#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <scgms/lang/dstrings.h>
#include <scgms/rtl/hresult.h>
#include <scgms/rtl/FilterLib.h>

#include <cassert>
#include <iostream>
#include <mutex>
#include "filters.h"

#include "composite_filter.h"
#include "configuration_link.h"

HRESULT IfaceCalling create_persistent_filter_chain_configuration(scgms::IPersistent_Filter_Chain_Configuration** configuration);

int Run_Composite_Filter_Tests() {
    std::wcout << L"[TEST] Running Composite Filter..." << std::endl;

    int failures = 0;

    auto fail_check = [&](bool condition, const wchar_t* message) {
        if (!condition) {
            std::wcerr << L"[FAIL] " << message << std::endl;
            ++failures;
        }
    };

    auto descriptors = scgms::get_filter_descriptor_list();
    fail_check(!descriptors.empty(), L"No filter descriptors loaded");

    if (descriptors.empty()) return failures; // bezpečnostní ukončení

    const scgms::TFilter_Descriptor& selected = descriptors.front();

    std::wcout << L"[INFO] Using filter: " << selected.description << std::endl;

    std::recursive_mutex guard;
    CComposite_Filter composite_filter(guard);

    // vytvoříme konfiguraci s vybraným filtrem
    scgms::IPersistent_Filter_Chain_Configuration* persistent_config = nullptr;
    HRESULT rc = create_persistent_filter_chain_configuration(&persistent_config);
    fail_check(SUCCEEDED(rc), L"Failed to create persistent filter chain configuration");

    refcnt::SReferenced<scgms::IFilter_Chain_Configuration> configuration(persistent_config);

    refcnt::SReferenced<scgms::IFilter_Configuration_Link> link{ new CFilter_Configuration_Link(selected.id) };
    fail_check(link != nullptr, L"Failed to create filter configuration link");

    auto raw = link.get();
    rc = configuration->add(&raw, &raw + 1);
    fail_check(SUCCEEDED(rc), L"Failed to add filter configuration link to configuration");

    // Dummy filtr jako koncový článek řetězce
    struct DummyFilter : public scgms::IFilter {
        HRESULT IfaceCalling QueryInterface(const GUID*, void**) override { return E_NOINTERFACE; }
        ULONG IfaceCalling AddRef() override { return 1; }
        ULONG IfaceCalling Release() override { return 1; }
        HRESULT IfaceCalling Configure(scgms::IFilter_Configuration*, refcnt::wstr_list*) override { return S_OK; }
        HRESULT IfaceCalling Execute(scgms::IDevice_Event*) override { return S_OK; }
    } dummy_next_filter;

    refcnt::Swstr_list error_desc;
    rc = composite_filter.Build_Filter_Chain(configuration.get(), &dummy_next_filter, nullptr, nullptr, error_desc);
    fail_check(SUCCEEDED(rc), L"Build_Filter_Chain failed");

    fail_check(!composite_filter.Empty(), L"Composite filter reports empty after Build_Filter_Chain");

    rc = composite_filter.Clear();
    fail_check(SUCCEEDED(rc), L"Clear failed");

    fail_check(composite_filter.Empty(), L"Composite filter not empty after Clear");

    if (failures == 0) {
        std::wcout << L"[PASS] Composite Filter tests passed." << std::endl;
    }

    return failures;
}
