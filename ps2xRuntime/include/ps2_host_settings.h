#pragma once

// Host settings written by the launcher (settings.json). Every field has a default, so the game also
// runs without a settings file.
#include <filesystem>
#include <map>
#include <string>

struct PS2HostSettings
{
    // game
    std::string disc1Path;
    // display
    int monitor = 0;
    std::string mode = "windowed"; // fullscreen, borderless, windowed
    int width = 0;                 // 0: monitor resolution (fullscreen, borderless) or picture size x scale
    int height = 0;
    bool vsync = true;
    int fpsLimit = 60;
    // graphics
    int resolutionScale = 2;            // windowed: 640x448 times this
    std::string aspectRatio = "auto";   // auto (4:3 as the game draws it), 4:3, 16:9, 21:9, 32:9
    std::string textureFilter = "bilinear";
    std::string renderer = "gpu";
    std::string hdTextures;             // HD texture pack (PCSX2 format): zip or folder, empty = off       // "gpu" (OpenGL) or "cpu"
    // audio (0..100)
    int masterVolume = 100;
    // input
    bool mouseKeyboard = true;
    bool mouseCamera = true;
    double mouseSensitivity = 1.0;
    bool invertY = false;
    std::map<std::string, std::string> keyboard; // action -> SDL key name or Mouse1..Mouse5
    std::map<std::string, std::string> gamepad;  // action -> SDL game controller name (a, leftshoulder, lefty-, ...)
    // folders
    std::filesystem::path settingsFile; // empty when none was loaded
    std::filesystem::path saveDirectory; // memory card folder; empty: next to the game data
    bool loaded = false;
};

// The settings the runtime uses (defaults until load succeeds).
PS2HostSettings &ps2xHostSettings();
// Reads a launcher settings.json. False (and defaults kept) when the file is missing or unreadable.
bool ps2xLoadHostSettings(const std::filesystem::path &file);
