#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <scgms/utils/string_utils.h>
#include <scgms/rtl/rattime.h>
#include <cassert>
#include <iostream>
#include "filter_parameter.h"

int Run_Filter_Parameter_Tests() {
    int failures = 0;

    auto check = [&](const std::wstring& name, auto fn) {
        try {
            fn();
            std::wcout << L"  [PASS] " << name << L"\n";
        } catch (...) {
            std::wcout << L"  [FAIL] " << name << L"\n";
            failures++;
        }
    };

    check(L"Get/Set Double", []() {
        CFilter_Parameter param(scgms::NParameter_Type::ptDouble, L"test_param");
        double input = 3.14;
        HRESULT rc = param.Set_Double(input);
        assert(rc == S_OK);

        double output = 0.0;
        rc = param.Get_Double(&output);
        assert(rc == S_OK);
        assert(output == input);
    });

    check(L"Get/Set Int64", []() {
        CFilter_Parameter param(scgms::NParameter_Type::ptInt64, L"int_param");
        int64_t input = 42;
        HRESULT rc = param.Set_Int64(input);
        assert(rc == S_OK);

        int64_t output = 0;
        rc = param.Get_Int64(&output);
        assert(rc == S_OK);
        assert(output == input);
    });

    check(L"Get/Set Bool", []() {
        CFilter_Parameter param(scgms::NParameter_Type::ptBool, L"bool_param");
        HRESULT rc = param.Set_Bool(TRUE);
        assert(rc == S_OK);

        BOOL value = FALSE;
        rc = param.Get_Bool(&value);
        assert(rc == S_OK);
        assert(value == TRUE);
    });

    check(L"Get/Set GUID", []() {
        GUID guid = { 0x01234567, 0x89ab, 0xcdef, {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xef} };
        CFilter_Parameter param(scgms::NParameter_Type::ptMetric_Id, L"guid_param");
        HRESULT rc = param.Set_GUID(&guid);
        assert(rc == S_OK);

        GUID out_guid{};
        rc = param.Get_GUID(&out_guid);
        assert(rc == S_OK);
        assert(::memcmp(&guid, &out_guid, sizeof(GUID)) == 0);
    });

    check(L"from_string -> Get Double", []() {
        CFilter_Parameter param(scgms::NParameter_Type::ptDouble, L"str_double");
        HRESULT rc = param.from_string(scgms::NParameter_Type::ptDouble, L"2.718");
        assert(rc == S_OK);

        double val;
        rc = param.Get_Double(&val);
        assert(rc == S_OK);
        assert(std::abs(val - 2.718) < 1e-9);
    });

    return failures;
}
