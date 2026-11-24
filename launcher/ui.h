#pragma once
#include "launch.h"
#include "settings.h"
#include "iso.h"
#include <memory>
#include <thread>
#include <imgui.h>
#include <array>
#include <vector>

struct Controller {
    SDL_GameController* handle;
    SDL_JoystickID id;
    std::array<bool, SDL_CONTROLLER_AXIS_MAX> ready{};
};
struct UI {
    Settings settings;
    std::filesystem::path folder;
    HWND hwnd{};
    SDL_Texture* icon{};
    ImFont *title{}, *heading{};
    float scale = 1;
    bool running = true, error = false;
    std::string message;
    int tab = 0;
    std::vector<Controller> controllers;
    SDL_JoystickID selected = -1;
    std::string capture;
    bool capturePad = false;
    std::array<std::string, 2> checkedPaths;
    std::array<bool, 2> discValid{};
    Uint64 lastDiscCheck = 0;
    // Unpacking an ISO before the first start.
    std::unique_ptr<ExtractProgress> extract;
    std::thread extractThread;
    void notice(std::string msg, bool failed = false) { message = std::move(msg); error = failed; }
};
inline ImVec4 muted() { return {0.65f,0.63f,0.62f,1}; }
inline ImVec4 red() { return {1.0f,0.42f,0.39f,1}; }
inline ImVec4 green() { return {0.52f,0.84f,0.63f,1}; }
void styleUI(UI& ui);
void drawUI(UI& ui);
void gameTab(UI& ui);
void displayTab(UI& ui);
void graphicsTab(UI& ui);
void audioTab(UI& ui);
void controlsTab(UI& ui);
void addController(UI& ui, int index);
void removeController(UI& ui, SDL_JoystickID id);
bool inputEvent(UI& ui, const SDL_Event& event);
void section(UI& ui, const char* title);
void stringChoice(const char* label, std::string& value, std::initializer_list<const char*> options);
