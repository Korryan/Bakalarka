#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <scgms/utils/string_utils.h>
#include <cassert>
#include <iostream>

#include "persistent_chain_configuration.h"
#include "configuration_link.h"

// Deklarace tovární funkce
DLL_EXPORT HRESULT IfaceCalling create_persistent_filter_chain_configuration(scgms::IPersistent_Filter_Chain_Configuration** configuration) noexcept;

int Run_Persistent_Chain_Configuration_Tests() {
	int failures = 0;

	auto fail_check = [&](bool condition, const wchar_t* message) {
		if (!condition) {
			std::wcerr << L"[FAIL] " << message << std::endl;
			++failures;
		}
	};

	scgms::IPersistent_Filter_Chain_Configuration* raw_config = nullptr;
	HRESULT rc = create_persistent_filter_chain_configuration(&raw_config);
	refcnt::SReferenced<scgms::IPersistent_Filter_Chain_Configuration> config(raw_config);
	fail_check(SUCCEEDED(rc) && config != nullptr, L"Failed to create persistent filter chain configuration");

	GUID dummy_id = { 0x11223344, 0x5566, 0x7788, { 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff, 0x00 } };
	refcnt::SReferenced<scgms::IFilter_Configuration_Link> link{ new CFilter_Configuration_Link(dummy_id) };
	fail_check(link != nullptr, L"Failed to create CFilter_Configuration_Link");

	scgms::IFilter_Configuration_Link* link_ptr = link.get();
	fail_check(config->add(&link_ptr, &link_ptr + 1) == S_OK, L"add() failed");

	fail_check(config->Set_Variable(L"GLOBAL_VAR", L"value") == S_OK, L"Set_Variable failed");

	fail_check(config->Set_Parent_Path(L"C:\\Test\\Config") == S_OK, L"Set_Parent_Path failed");

	refcnt::wstr_container* out_path = nullptr;
	fail_check(config->Get_Parent_Path(&out_path) == S_OK, L"Get_Parent_Path failed");
	if (out_path) {
		wchar_t* raw = nullptr;
		if (out_path->get(&raw, nullptr) == S_OK && raw != nullptr) {
			std::wcout << L"[INFO] Reported parent path: " << raw << std::endl;
		}
	}

	if (failures == 0) {
		std::wcout << L"[PASS] Persistent_Chain_Configuration basic tests passed." << std::endl;
	}
	return failures;
}
