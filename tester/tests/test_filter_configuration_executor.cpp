#include <scgms/iface/FilterIface.h>
#include <scgms/rtl/referencedImpl.h>
#include <cassert>
#include <iostream>

#include "filter_configuration_executor.h"

int Run_Filter_Configuration_Executor_Tests() {
    int failures = 0;

    auto run_test = [&](const std::wstring& name, auto fn) {
        std::wcout << L"[TEST] " << name << L"... ";
        try {
            fn();
            std::wcout << L"PASS\n";
        } catch (...) {
            std::wcout << L"FAIL\n";
            ++failures;
        }
    };

    run_test(L"Construct and terminate executor", []() {
        CFilter_Configuration_Executor executor(nullptr);
        HRESULT rc = executor.Terminate(FALSE);
        assert(rc == S_FALSE); // protože chain je prázdný
    });

    return failures;
}
