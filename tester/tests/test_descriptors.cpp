#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "test_utils.h"
#include <map>

// Descriptor types
enum class DescriptorKind {
    Filter,
    Solver,
    Model,
    Signal,
    Approx,
    Metric
};

struct DescriptorGroup {
    DescriptorKind kind;
    std::wstring export_function;
    std::map<std::wstring, size_t> dlls; // <dll_name, expected_count>
};

bool LoadDescriptorCount(const std::wstring& dll_path, const std::wstring& function_name, DescriptorKind kind, size_t& actual_count) {
    actual_count = 0;
    HMODULE lib = LoadLibraryW(dll_path.c_str());
    if (!lib) return false;

    FARPROC proc = GetProcAddress(lib, Narrow(function_name).c_str());
    if (!proc) {
        FreeLibrary(lib);
        return false;
    }

    using PGetDescriptors = HRESULT(__stdcall*)(const void** begin, const void** end);
    auto get_descriptors = reinterpret_cast<PGetDescriptors>(proc);

    const void* begin = nullptr;
    const void* end = nullptr;
    HRESULT result = get_descriptors(&begin, &end);

    if (FAILED(result) || begin == nullptr || end == nullptr) {
        FreeLibrary(lib);
        return false;
    }

    size_t descriptor_size = 1;
    switch (kind) {
        case DescriptorKind::Filter:
            descriptor_size = sizeof(void*) * 8; break;
        case DescriptorKind::Solver:
        case DescriptorKind::Approx:
            descriptor_size = sizeof(void*) * 2; break;
        case DescriptorKind::Model:
        case DescriptorKind::Signal:
            descriptor_size = sizeof(void*) * 9; break;
        case DescriptorKind::Metric:
            descriptor_size = sizeof(void*) * 2; break; // assuming two pointers worth
    }

    size_t byte_count = static_cast<const char*>(end) - static_cast<const char*>(begin);
    actual_count = byte_count / descriptor_size;

    FreeLibrary(lib);
    return true;
}

int Run_Descriptor_Tests() {
    std::vector<DescriptorGroup> test_groups = {
        { DescriptorKind::Filter, L"do_get_filter_descriptors", {
            {L"log.dll", 2}, {L"data.dll", 6}, {L"model.dll", 1}, {L"drawing.dll", 1},
            {L"drawing_v2.dll", 1}, {L"metric.dll", 5}, {L"native.dll", 1},
            {L"controllers.dll", 2}, {L"signal.dll", 11}, {L"approx.dll", 0},
            {L"stochastic.dll", 0}, {L"icarus.dll", 0}, {L"matlab.dll", 0}
        }},
        { DescriptorKind::Solver, L"do_get_solver_descriptors", {
            {L"stochastic.dll", 30}, {L"approx.dll", 0}, {L"data.dll", 0},
            {L"drawing.dll", 0}, {L"icarus.dll", 0}, {L"matlab.dll", 0}
        }},
        { DescriptorKind::Model, L"do_get_model_descriptors", {
            {L"controllers.dll", 12}, {L"data.dll", 0}, {L"drawing_v2.dll", 0},
            {L"icarus.dll", 5}, {L"matlab.dll", 0}, {L"model.dll", 30}, {L"native.dll", 1}
        }},
        { DescriptorKind::Signal, L"do_get_signal_descriptors", {
            {L"controllers.dll", 8}, {L"data.dll", 0}, {L"drawing.dll", 0},
            {L"icarus.dll", 0}, {L"matlab.dll", 0}, {L"metric.dll", 0},
            {L"model.dll", 40}, {L"signal.dll", 24}
        }},
        { DescriptorKind::Approx, L"do_get_approximator_descriptors", {
            {L"approx.dll", 4}, {L"data.dll", 0}, {L"drawing_v2.dll", 0},
            {L"icarus.dll", 0}, {L"matlab.dll", 0}
        }},
        { DescriptorKind::Metric, L"do_get_metric_descriptors", {
            {L"metric.dll", 21}, {L"data.dll", 0}, {L"icarus.dll", 0}
        }}
    };

    std::wstring base_path = GetFilterDLLBasePath();
    bool all_ok = true;

    for (const auto& group : test_groups) {
        std::wcout << L"[INFO] Testing " << group.export_function << L"..." << std::endl;

        for (const auto& [dll_name, expected_count] : group.dlls) {
            size_t actual_count = 0;
            std::wstring full_path = base_path + dll_name;

            if (!LoadDescriptorCount(full_path, group.export_function, group.kind, actual_count)) {
                std::wcout << L"[WARN] " << dll_name << L" does not export " << group.export_function << L" (assuming 0 descriptors)" << std::endl;
                actual_count = 0;
            }

            if (actual_count != expected_count) {
                std::wcerr << L"[FAIL] " << dll_name << L" (" << group.export_function << L"): Expected " << expected_count << L", got " << actual_count << std::endl;
                all_ok = false;
            } else {
                std::wcout << L"[OK] " << dll_name << L" (" << group.export_function << L"): " << actual_count << L" descriptors loaded" << std::endl;
            }
        }
    }

    return all_ok ? 0 : 1;
}
