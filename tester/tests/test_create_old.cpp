#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include "test_utils.h"
#include <scgms/rtl/hresult.h>

#ifndef IfaceCalling
#define IfaceCalling __stdcall
#endif

enum class CreateKind {
    Filter,
    Signal,
    Model,
    DiscreteModel,
    Approx,
    Solver,
    Metric
};

struct CreateEntry {
    std::wstring create_symbol;
    std::wstring descriptor_symbol;
    CreateKind kind;
    bool needs_signal;
};

struct DLLCreateMap {
    std::wstring dll_name;
    std::vector<CreateEntry> create_entries;
};

std::vector<DLLCreateMap> g_create_tests = {
    {L"log.dll", {{L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}}},
    {L"controllers.dll", {
        {L"do_create_signal", L"do_get_signal_descriptors", CreateKind::Signal, false},
        {L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}
    }},
    {L"data.dll", {{L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}}},
    {L"drawing.dll", {{L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}}},
    {L"drawing_v2.dll", {{L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}}},
    {L"icarus.dll", {{L"do_create_discrete_model", L"do_get_model_descriptors", CreateKind::DiscreteModel, false}}},
    {L"matlab.dll", {{L"do_create_signal", L"do_get_signal_descriptors", CreateKind::Signal, false}}},
    {L"metric.dll", {
        {L"do_create_metric", L"do_get_metric_descriptors", CreateKind::Metric, true},
        {L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}
    }},
    {L"model.dll", {
        {L"do_create_signal", L"do_get_signal_descriptors", CreateKind::Signal, false},
        {L"do_create_discrete_model", L"do_get_model_descriptors", CreateKind::DiscreteModel, false},
        {L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}
    }},
    {L"native.dll", {{L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}}},
    {L"signal.dll", {
        {L"do_create_signal", L"do_get_signal_descriptors", CreateKind::Signal, false},
        {L"do_create_filter", L"do_get_filter_descriptors", CreateKind::Filter, true}
    }},
    {L"approx.dll", {{L"do_create_approximator", L"do_get_approximator_descriptors", CreateKind::Approx, true}}},
};

struct DummySignal : public IUnknown {
    std::atomic<ULONG> ref_count{1};

    HRESULT IfaceCalling QueryInterface(REFIID riid, void** ppv) override {
        if (ppv == nullptr) return E_POINTER;
        if (riid == __uuidof(IUnknown)) {
            *ppv = static_cast<IUnknown*>(this);
            AddRef();
            return S_OK;
        }
        *ppv = nullptr;
        return E_NOINTERFACE;
    }

    ULONG IfaceCalling AddRef() override {
        return ++ref_count;
    }

    ULONG IfaceCalling Release() override {
        ULONG count = --ref_count;
        if (count == 0) delete this;
        return count;
    }
};

struct TFilter_Descriptor {
    GUID id;
    const wchar_t* name;
    uint32_t flags;
    void* reserved1;
    void* reserved2;
    void* reserved3;
    void* reserved4;
    void* reserved5;
    void* reserved6;
};

struct IDummyEntity {
    virtual void IfaceCalling Release() = 0;
};

using get_desc_fn = HRESULT(__stdcall*)(TFilter_Descriptor**, TFilter_Descriptor**);
using create_fn = HRESULT(__stdcall*)(const GUID*, void*, IDummyEntity**);

int Create_Single_Entity(create_fn create, const GUID& id, const wchar_t* name, bool needs_dummy_input) {
    IDummyEntity* created = nullptr;
    DummySignal* dummy_signal = nullptr;
    IUnknown* dummy_input = nullptr;

    if (needs_dummy_input) {
        dummy_signal = new DummySignal();
        dummy_input = dummy_signal;
    }

    int status = 0;

    __try {
        std::wprintf(L"[DEBUG] Attempting to create entity: %s\n", name);
        HRESULT result = create(&id, dummy_input, &created);
        std::wprintf(L"[DEBUG] HRESULT result: 0x%08X\n", result);

        if (FAILED(result)) {
            std::fwprintf(stderr, L"[FAIL] HRESULT failed: 0x%08X while creating entity: %s\n", result, name);
            status = 1;
        } else if (!created) {
            std::fwprintf(stderr, L"[FAIL] S_OK but 'created' is nullptr: %s\n", name);
            status = 1;
        } else {
            std::wprintf(L"[OK] Successfully created entity: %s\n", name);
            created->Release();
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        std::fwprintf(stderr, L"[CRASH] Caught SEH exception while creating entity: %s\n", name);
        status = 1;
    }

    if (dummy_signal) dummy_signal->Release();
    return status;
}

int Run_Create_Tests() {
    const std::wstring base_path = GetFilterDLLBasePath();
    std::wcout << L"[DEBUG] Base path: " << base_path << std::endl;
    bool all_ok = true;

    for (const auto& dll_entry : g_create_tests) {
        std::wcout << L"[DEBUG] Processing DLL: " << dll_entry.dll_name << std::endl;
        std::wstring dll_path = base_path + dll_entry.dll_name;
        HMODULE lib = LoadLibraryW(dll_path.c_str());
        if (!lib) {
            std::wcerr << L"[FAIL] Failed to load DLL: " << dll_entry.dll_name << std::endl;
            all_ok = false;
            continue;
        }

        for (const auto& create_entry : dll_entry.create_entries) {
            std::string desc_sym = Narrow(create_entry.descriptor_symbol);
            std::string create_sym = Narrow(create_entry.create_symbol);

            auto get_desc = reinterpret_cast<get_desc_fn>(GetProcAddress(lib, desc_sym.c_str()));
            if (!get_desc) std::wcerr << L"[FAIL] Symbol not found: " << create_entry.descriptor_symbol << std::endl;
            auto create = reinterpret_cast<create_fn>(GetProcAddress(lib, create_sym.c_str()));
            if (!create) std::wcerr << L"[FAIL] Symbol not found: " << create_entry.create_symbol << std::endl;

            if (!get_desc || !create) {
                all_ok = false;
                continue;
            }

            TFilter_Descriptor* begin = nullptr;
            TFilter_Descriptor* end = nullptr;
            HRESULT hr = get_desc(&begin, &end);
            std::wcout << L"[DEBUG] get_desc returned: 0x" << std::hex << hr << std::dec << std::endl;

            if (FAILED(hr) || !begin || !end) {
                std::wcerr << L"[FAIL] Failed to get descriptors from: " << dll_entry.dll_name << std::endl;
                all_ok = false;
                continue;
            }

            size_t count = static_cast<size_t>(end - begin);
            std::wcout << L"[DEBUG] Number of descriptors: " << count << std::endl;

            for (TFilter_Descriptor* ptr = begin; ptr != end; ++ptr) {
                const GUID& id = ptr->id;
                const wchar_t* name = (ptr->name && wcslen(ptr->name) > 0) ? ptr->name : GUIDToWString(id).c_str();
                std::wcout << L"[DEBUG] Creating entity: " << name << L" | GUID: " << GUIDToWString(id) << std::endl;

                int result = Create_Single_Entity(create, id, name, create_entry.needs_signal);
                if (result != 0) all_ok = false;
            }
        }

        FreeLibrary(lib);
    }

    return all_ok ? 0 : 1;
}
