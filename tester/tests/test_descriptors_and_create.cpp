#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "test_utils.h"

struct TFilter_Descriptor {
    GUID id;
    const wchar_t* name;
};

enum class EntityKind {
    Filter,
    Signal,
    Model,
    DiscreteModel,
    Approx,
    Solver,
    Metric
};

struct EntityEntry {
    std::wstring dll_name;
    std::wstring descriptor_symbol;
    std::wstring create_symbol;
    EntityKind kind;
    bool needs_signal;
    size_t expected_count; // from descriptor test
};

struct DummySignal : public IUnknown {
    std::atomic<ULONG> ref_count{1};
    HRESULT __stdcall QueryInterface(REFIID riid, void** ppv) override {
        if (ppv == nullptr) return E_POINTER;
        if (riid == __uuidof(IUnknown)) {
            *ppv = static_cast<IUnknown*>(this);
            AddRef();
            return S_OK;
        }
        *ppv = nullptr;
        return E_NOINTERFACE;
    }
    ULONG __stdcall AddRef() override { return ++ref_count; }
    ULONG __stdcall Release() override {
        ULONG count = --ref_count;
        if (count == 0) delete this;
        return count;
    }
};

struct IDummyEntity {
    virtual void __stdcall Release() = 0;
};

using get_desc_fn = HRESULT(__stdcall*)(const void**, const void**);
using create_fn = HRESULT(__stdcall*)(const GUID*, void*, IDummyEntity**);

int Run_Entity_Validation_Tests() {
    std::vector<EntityEntry> entries = {
        // Filters
        {L"log.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 6},
        {L"data.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 6},
        {L"model.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 1},
        {L"drawing.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 1},
        {L"drawing_v2.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 1},
        {L"metric.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 5},
        {L"native.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 1},
        {L"controllers.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 2},
        {L"signal.dll", L"do_get_filter_descriptors", L"do_create_filter", EntityKind::Filter, true, 11},
    
        // Solvers
        {L"stochastic.dll", L"do_get_solver_descriptors", L"do_solve_generic", EntityKind::Solver, false, 30},
    
        // Models
        {L"controllers.dll", L"do_get_model_descriptors", L"do_create_discrete_model", EntityKind::DiscreteModel, false, 12},
        {L"icarus.dll", L"do_get_model_descriptors", L"do_create_discrete_model", EntityKind::DiscreteModel, false, 5},
        {L"model.dll", L"do_get_model_descriptors", L"do_create_discrete_model", EntityKind::DiscreteModel, false, 30},
        {L"native.dll", L"do_get_model_descriptors", L"do_create_discrete_model", EntityKind::DiscreteModel, false, 1},
    
        // Signals
        {L"controllers.dll", L"do_get_signal_descriptors", L"do_create_signal", EntityKind::Signal, false, 8},
        {L"model.dll", L"do_get_signal_descriptors", L"do_create_signal", EntityKind::Signal, false, 40},
        {L"signal.dll", L"do_get_signal_descriptors", L"do_create_signal", EntityKind::Signal, false, 24},
    
        // Approximators
        {L"approx.dll", L"do_get_approximator_descriptors", L"do_create_approximator", EntityKind::Approx, true, 4},
    
        // Metrics
        {L"metric.dll", L"do_get_metric_descriptors", L"do_create_metric", EntityKind::Metric, true, 21}
    };
    

    std::wstring base_path = GetFilterDLLBasePath();
    bool all_ok = true;

    for (const auto& entry : entries) {
        std::wstring full_path = base_path + entry.dll_name;
        std::wcout << L"[INFO] Testing DLL: " << entry.dll_name << std::endl;

        HMODULE lib = LoadLibraryW(full_path.c_str());
        if (!lib) {
            std::wcerr << L"[FAIL] Failed to load DLL: " << entry.dll_name << std::endl;
            all_ok = false;
            continue;
        }

        auto desc_func = reinterpret_cast<get_desc_fn>(GetProcAddress(lib, Narrow(entry.descriptor_symbol).c_str()));
        auto create_func = reinterpret_cast<create_fn>(GetProcAddress(lib, Narrow(entry.create_symbol).c_str()));

        if (!desc_func || !create_func) {
            std::wcerr << L"[FAIL] Missing symbols in " << entry.dll_name << std::endl;
            FreeLibrary(lib);
            all_ok = false;
            continue;
        }

        const void* begin = nullptr;
        const void* end = nullptr;
        HRESULT rc = desc_func(&begin, &end);
        if (FAILED(rc) || !begin || !end) {
            std::wcerr << L"[FAIL] Failed to get descriptors from " << entry.dll_name << std::endl;
            FreeLibrary(lib);
            all_ok = false;
            continue;
        }

        size_t actual_count = static_cast<const TFilter_Descriptor*>(end) - static_cast<const TFilter_Descriptor*>(begin);


        std::wcout << L"[INFO] " << entry.dll_name << L": expected " << entry.expected_count << L", actual " << actual_count << std::endl;

        if (actual_count != entry.expected_count) {
            std::wcerr << L"[FAIL] Descriptor count mismatch in " << entry.dll_name << std::endl;
            all_ok = false;
        } else {
            std::wcout << L"[OK] Descriptor count verified." << std::endl;
        }


        auto ptr = reinterpret_cast<const TFilter_Descriptor*>(begin);
        for (size_t i = 0; i < actual_count; ++i) {
            const GUID& id = ptr[i].id;
            const wchar_t* name = ptr[i].name ? ptr[i].name : L"<unnamed>";
            std::wcout << L"[INFO] Creating instance: " << name << std::endl;

            DummySignal dummy_signal;
            void* input = entry.needs_signal ? static_cast<void*>(&dummy_signal) : nullptr;

            IDummyEntity* created = nullptr;
            HRESULT create_rc = create_func(&id, input, &created);
            if (FAILED(create_rc) || created == nullptr) {
                std::wcerr << L"[FAIL] Could not create entity: " << name << std::endl;
                all_ok = false;
            } else {
                std::wcout << L"[OK] Created instance: " << name << std::endl;
                created->Release();
            }
        }

        FreeLibrary(lib);
    }

    return all_ok ? 0 : 1;
}
