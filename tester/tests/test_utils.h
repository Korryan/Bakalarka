#pragma once

#include <string>
#include <Windows.h>
#include <filesystem>

inline std::string Narrow(const std::wstring& wide) {
    int len = WideCharToMultiByte(CP_ACP, 0, wide.c_str(), -1, nullptr, 0, nullptr, nullptr);
    std::string result(len, 0);
    WideCharToMultiByte(CP_ACP, 0, wide.c_str(), -1, &result[0], len, nullptr, nullptr);
    result.pop_back();
    return result;
}

inline std::wstring GUIDToWString(const GUID& guid) {
    wchar_t buffer[40];
    swprintf_s(buffer, 40,
        L"{%08lX-%04hX-%04hX-%02hhX%02hhX-%02hhX%02hhX%02hhX%02hhX%02hhX%02hhX}",
        guid.Data1, guid.Data2, guid.Data3,
        guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
        guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
    return std::wstring(buffer);
}

inline std::wstring GetFilterDLLBasePath() {
    wchar_t buffer[MAX_PATH];
    GetModuleFileNameW(nullptr, buffer, MAX_PATH);
    std::filesystem::path exe_path(buffer);
    return (exe_path.parent_path().parent_path().parent_path() / L"compiled" / L"Debug" / L"filters\\").wstring();
}
