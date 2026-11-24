#include "launch.h"
#include "iso.h"
#include <shobjidl.h>
#include <shellapi.h>
#include <wrl/client.h>
#include <stdexcept>
#include <vector>

using Microsoft::WRL::ComPtr;
namespace fs = std::filesystem;
namespace {
void checked(HRESULT hr, const char* operation) {
    if (FAILED(hr)) throw std::system_error(static_cast<int>(hr), std::system_category(), operation);
}
}
fs::path executableFolder() {
    std::vector<wchar_t> buffer(512);
    for (;;) {
        DWORD n = GetModuleFileNameW(nullptr, buffer.data(), static_cast<DWORD>(buffer.size()));
        if (!n) throw std::system_error(static_cast<int>(GetLastError()), std::system_category(), "Locate launcher");
        if (n < buffer.size()) return fs::path(std::wstring(buffer.data(), n)).parent_path();
        buffer.resize(buffer.size() * 2);
    }
}
std::optional<std::string> browseDisc(HWND owner, bool folder, int disc) {
    ComPtr<IFileOpenDialog> dialog;
    checked(CoCreateInstance(CLSID_FileOpenDialog, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&dialog)), "Open disc picker");
    DWORD flags{};
    checked(dialog->GetOptions(&flags), "Read picker options");
    checked(dialog->SetOptions(flags | FOS_FORCEFILESYSTEM | FOS_PATHMUSTEXIST |
        (folder ? FOS_PICKFOLDERS : FOS_FILEMUSTEXIST) | FOS_NOCHANGEDIR), "Configure disc picker");
    if (!folder) {
        COMDLG_FILTERSPEC filter{L"PlayStation 2 disc image (*.iso)", L"*.iso"};
        checked(dialog->SetFileTypes(1, &filter), "Set ISO filter");
    }
    auto title = L"Select Disc " + std::to_wstring(disc) + (folder ? L" extracted folder" : L" ISO");
    checked(dialog->SetTitle(title.c_str()), "Set picker title");
    HRESULT hr = dialog->Show(owner);
    if (hr == HRESULT_FROM_WIN32(ERROR_CANCELLED)) return {};
    checked(hr, "Browse for disc");
    ComPtr<IShellItem> item;
    checked(dialog->GetResult(&item), "Read selection");
    PWSTR value{};
    checked(item->GetDisplayName(SIGDN_FILESYSPATH, &value), "Read path");
    std::unique_ptr<wchar_t, decltype(&CoTaskMemFree)> path(value, &CoTaskMemFree);
    return fs::path(path.get()).u8string();
}
bool validDisc(const std::string& utf8path, int disc) {
    if (utf8path.empty() || (disc != 1 && disc != 2)) return false;
    try {
        auto path = fs::u8path(utf8path);
        std::error_code ec;
        if (fs::is_directory(path, ec)) return fs::is_regular_file(path / (disc == 1 ? L"SLUS_211.80" : L"SLUS_213.62"), ec);
        // Any ISO whose root holds the disc's executable (dumps differ in size).
        return _wcsicmp(path.extension().c_str(), L".iso") == 0 && fs::is_regular_file(path, ec)
            && fs::file_size(path, ec) > 64ULL * 2048ULL && !ec && isoHasRootFile(path, disc == 1 ? "SLUS_211.80" : "SLUS_213.62");
    } catch (const std::system_error&) { return false; }
}
fs::path unpackFolder(const fs::path& folder, int disc) { return folder / (L"disc" + std::to_wstring(disc)); }
bool isIsoPath(const std::string& utf8path) {
    try { return _wcsicmp(fs::u8path(utf8path).extension().c_str(), L".iso") == 0; } catch (...) { return false; }
}
void startGame(const fs::path& folder, const fs::path& elf) {
    auto exe = folder / L"Onimusha.exe";
    if (!fs::is_regular_file(exe)) throw std::runtime_error("Onimusha.exe is missing. Place the game executable next to OnimushaLauncher.exe.");
    std::wstring command = L"\"" + exe.wstring() + L"\"";
    if (!elf.empty()) command += L" \"" + elf.wstring() + L"\"";
    command += L" --settings \"" + (folder / L"settings.json").wstring() + L"\"";
    STARTUPINFOW startup{};
    startup.cb = sizeof(startup);
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(exe.c_str(), command.data(), nullptr, nullptr, FALSE, 0, nullptr, folder.c_str(), &startup, &process))
        throw std::system_error(static_cast<int>(GetLastError()), std::system_category(), "Start Onimusha.exe");
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
}
void openFolder(HWND owner, const fs::path& folder) {
    auto result = reinterpret_cast<INT_PTR>(ShellExecuteW(owner, L"open", folder.c_str(), nullptr, nullptr, SW_SHOWNORMAL));
    if (result <= 32) throw std::runtime_error("Windows could not open the game folder.");
}
