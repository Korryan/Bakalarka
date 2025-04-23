#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <scgms/iface/DeviceIface.h>
#include <scgms/rtl/hresult.h>
#include "device_event.h"

#include <iostream>
#include <vector>
#include <mutex>
#include <cassert>

#include "executor.h"
#include "filters.h"

int Run_Executor_Tests() {
	std::wcout << L"[TEST] Running Executor tests..." << std::endl;
	int failures = 0;

	auto fail_check = [&](bool condition, const wchar_t* message) {
		if (!condition) {
			std::wcerr << L"[FAIL] " << message << std::endl;
			++failures;
		}
	};

	std::recursive_mutex guard;

	// Dummy terminální filtr pro testování
	struct DummyTerminalFilter : public scgms::IFilter {
		HRESULT IfaceCalling QueryInterface(const GUID*, void**) override { return E_NOINTERFACE; }
		ULONG IfaceCalling AddRef() override { return 1; }
		ULONG IfaceCalling Release() override { return 1; }
		HRESULT IfaceCalling Configure(scgms::IFilter_Configuration*, refcnt::wstr_list*) override { return S_OK; }
		HRESULT IfaceCalling Execute(scgms::IDevice_Event* event) override {
			if (event) event->Release();
			return S_OK;
		}
	};
	DummyTerminalFilter dummy_output;

	auto descriptors = scgms::get_filter_descriptor_list();

	for (const auto& desc : descriptors) {
		std::wcout << L"[INFO] Testing filter: " << desc.description << std::endl;

		CFilter_Executor executor(desc.id, guard, &dummy_output, nullptr, nullptr);

		// Test konfigurační fáze
		HRESULT rc = executor.Configure(nullptr, nullptr);
		fail_check(SUCCEEDED(rc), (std::wstring(L"Configure failed for ") + desc.description).c_str());

		// Test vykonání s vypínací událostí
		scgms::IDevice_Event* shutdown = allocate_device_event(scgms::NDevice_Event_Code::Shut_Down);
		rc = executor.Execute(shutdown);
		fail_check(SUCCEEDED(rc), (std::wstring(L"Execute failed for ") + desc.description).c_str());
	}

	if (failures == 0) {
		std::wcout << L"[PASS] All Executor tests passed." << std::endl;
	} else {
		std::wcerr << L"[SUMMARY] " << failures << L" failure(s) detected." << std::endl;
	}
	return failures;
}
