#include <iostream>
#include <string>
#include <vector>
#include <functional>

// Typ alias pro obecný testovací callback
using TestFunction = std::function<int()>;

// Registrace testů, které chceme spouštět
std::vector<std::pair<std::string, TestFunction>> GetTests();

int main() {
    std::wcout << L"[INFO] Running all registered tests...\n" << std::endl;
    int failures = 0;

    for (const auto& [name, test_fn] : GetTests()) {
        std::wcout << L"[TEST] Running " << name.c_str() << L"..." << std::endl;
        int result = test_fn();
        if (result != 0) {
            std::wcout << L"[FAIL] " << name.c_str() << L" failed with code " << result << std::endl;
            ++failures;
        } else {
            std::wcout << L"[PASS] " << name.c_str() << std::endl;
        }
    }

    if (failures > 0) {
        std::wcout << L"\n[SUMMARY] " << failures << L" test(s) failed." << std::endl;
        return 1;
    } else {
        std::wcout << L"\n[SUMMARY] All tests passed." << std::endl;
        return 0;
    }
}

// Deklarace externího testu (implementace v test_descriptors.cpp)
int Run_Descriptor_Tests();
int Run_Create_Tests();
int Run_Filter_Parameter_Tests(); 
int Run_Filter_Configuration_Executor_Tests(); 
int Run_Configuration_Link_Tests();
int Run_Persistent_Chain_Configuration_Tests();
int Run_Composite_Filter_Tests();
int Run_Executor_Tests();
int Run_Entity_Validation_Tests();







// Seznam všech registrovaných testů
std::vector<std::pair<std::string, TestFunction>> GetTests() {
    return {
        //{"Descriptor Filter DLLs", Run_Descriptor_Tests},
        {"Descriptor Filter DLLs", Run_Entity_Validation_Tests},
        //{"Test create entities", Run_Create_Tests},
        //{"Filter Parameter Unit Tests", Run_Filter_Parameter_Tests},
        //{"Filter configuration executor basic tests", Run_Filter_Configuration_Executor_Tests},
        //{"Filter Configuration Link", Run_Configuration_Link_Tests },
        //{"Persistent Chain Configuration", Run_Persistent_Chain_Configuration_Tests},
        {"Composite Filter Build & Clear", Run_Composite_Filter_Tests},
        //{"Executor Filters", Run_Executor_Tests}, //funguje




    };
}
