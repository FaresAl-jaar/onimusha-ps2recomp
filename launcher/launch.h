#pragma once
#include <windows.h>
#include <filesystem>
#include <optional>
#include <string>

std::filesystem::path executableFolder();
std::optional<std::string> browseDisc(HWND owner, bool folder, int disc);
bool validDisc(const std::string& utf8path, int disc);
// Starts Onimusha.exe from `folder` with the game ELF (empty: the game finds its data itself) and settings.json.
void startGame(const std::filesystem::path& folder, const std::filesystem::path& elf = {});
// Where an ISO is unpacked for the game: <launcher folder>/disc<n>.
std::filesystem::path unpackFolder(const std::filesystem::path& folder, int disc);
bool isIsoPath(const std::string& utf8path);
void openFolder(HWND owner, const std::filesystem::path& folder);
