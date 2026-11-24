#pragma once
#include <SDL.h>
#include <array>
#include <map>
#include <string>

inline constexpr std::array<const char*, 24> actions{
    "cross","circle","square","triangle","l1","r1","l2","r2","l3","r3","start","select",
    "dpad_up","dpad_down","dpad_left","dpad_right","lstick_up","lstick_down","lstick_left",
    "lstick_right","rstick_up","rstick_down","rstick_left","rstick_right"};
using BindingMap = std::map<std::string, std::string>;
struct Bindings { BindingMap keyboard, gamepad; };
Bindings defaultBindings();
std::string axisBinding(SDL_GameControllerAxis axis, int value);
bool hasConflict(const BindingMap& map, const std::string& value);
std::string padLabel(const std::string& binding, bool playstation);
