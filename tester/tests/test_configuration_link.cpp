#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <scgms/utils/string_utils.h>
#include <cassert>
#include <iostream>

#include "configuration_link.h"
#include "filter_parameter.h"

// Jednoduchý testovací wrapper
int Run_Configuration_Link_Tests() {
	int failures = 0;

	auto fail_check = [&](bool condition, const wchar_t* message) {
		if (!condition) {
			std::wcerr << L"[FAIL] " << message << std::endl;
			++failures;
		}
	};

	GUID dummy_id = { 0x12345678, 0x90ab, 0xcdef, { 0x12, 0x34, 0x56, 0x78, 0x90, 0xab, 0xcd, 0xef } };
	CFilter_Configuration_Link link(dummy_id);

	// Ověření ID
	GUID output_id{};
	fail_check(link.Get_Filter_Id(&output_id) == S_OK, L"Get_Filter_Id failed");
	fail_check(::memcmp(&dummy_id, &output_id, sizeof(GUID)) == 0, L"Filter ID mismatch");

	// Přidání parametrů
	CFilter_Parameter* param1 = new CFilter_Parameter(scgms::NParameter_Type::ptDouble, L"param1");
	CFilter_Parameter* param2 = new CFilter_Parameter(scgms::NParameter_Type::ptBool, L"param2");

	scgms::IFilter_Parameter* params[] = { param1, param2 };
	fail_check(link.add(params, params + 2) == S_OK, L"add() failed");

	// Nastavení cesty
	fail_check(link.Set_Parent_Path(L"C:\\Some\\Path") == S_OK, L"Set_Parent_Path failed");

	// Nastavení proměnné
	fail_check(link.Set_Variable(L"TEST_VAR", L"true") == S_OK, L"Set_Variable failed");

	if (failures == 0) {
		std::wcout << L"[PASS] All configuration_link tests passed.\n";
	}
	return failures;
}
