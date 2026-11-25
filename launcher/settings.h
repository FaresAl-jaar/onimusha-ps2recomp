#pragma once
#include "bindings.h"
#include <filesystem>
#include <nlohmann/json.hpp>

struct Game { std::string disc1_path, disc2_path; };
struct Display {
    int monitor = 0;
    std::string mode = "fullscreen";
    int width = 0, height = 0;
    bool vsync = true;
    int fps_limit = 60;
};
struct Graphics {
    int resolution_scale = 3;
    std::string aspect_ratio = "auto", texture_filter = "bilinear";
    bool fxaa = false, deinterlace = true, hud_fix = true;
    std::string renderer = "gpu";   // "gpu" (OpenGL) or "cpu"
    std::string hd_textures;        // HD texture pack (PCSX2 format): the .zip or its folder, empty = off
};
struct Audio {
    int master = 100, music = 100, effects = 100, voice = 100;
    std::string device = "default";
};
struct Input {
    std::string controller_type = "auto";
    bool mouse_keyboard = true;
    double mouse_sensitivity = 1.0;
    bool invert_y = false, mouse_camera = true;
    Bindings bindings = defaultBindings();
};
struct Launcher { bool close_on_launch = true; };
struct Settings {
    int version = 1;
    Game game;
    Display display;
    Graphics graphics;
    Audio audio;
    Input input;
    Launcher launcher;
};
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Bindings,keyboard,gamepad)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Game,disc1_path,disc2_path)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Display,monitor,mode,width,height,vsync,fps_limit)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Graphics,resolution_scale,aspect_ratio,texture_filter,fxaa,deinterlace,hud_fix,renderer,hd_textures)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Audio,master,music,effects,voice,device)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Input,controller_type,mouse_keyboard,mouse_sensitivity,invert_y,mouse_camera,bindings)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Launcher,close_on_launch)
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Settings,version,game,display,graphics,audio,input,launcher)

// Returns a recovery notice when invalid data was backed up. I/O failures throw.
std::string loadSettings(const std::filesystem::path& file, Settings& settings);
void saveSettings(const std::filesystem::path& file, const Settings& settings);
