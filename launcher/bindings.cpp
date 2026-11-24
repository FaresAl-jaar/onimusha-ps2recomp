#include "bindings.h"
#include <algorithm>
#include <cstdlib>

Bindings defaultBindings() {
    const char* keys[]{"Space","E","Mouse1","Mouse3","Q","R","Left Shift","Left Ctrl",
        "","","Return","Tab","Up","Down","Left","Right","W","S","A","D","","","",""};
    const char* pad[]{"a","b","x","y","leftshoulder","rightshoulder","lefttrigger","righttrigger",
        "leftstick","rightstick","start","back","dpup","dpdown","dpleft","dpright",
        "lefty-","lefty+","leftx-","leftx+","righty-","righty+","rightx-","rightx+"};
    static_assert(std::size(keys) == actions.size() && std::size(pad) == actions.size());
    Bindings result;
    for (size_t i = 0; i < actions.size(); ++i) {
        result.keyboard[actions[i]] = keys[i];
        result.gamepad[actions[i]] = pad[i];
    }
    return result;
}
std::string axisBinding(SDL_GameControllerAxis axis, int value) {
    if (std::abs(value) < 18000) return {};
    if (axis == SDL_CONTROLLER_AXIS_TRIGGERLEFT) return value > 0 ? "lefttrigger" : "";
    if (axis == SDL_CONTROLLER_AXIS_TRIGGERRIGHT) return value > 0 ? "righttrigger" : "";
    const char* name = SDL_GameControllerGetStringForAxis(axis);
    return name ? std::string(name) + (value < 0 ? "-" : "+") : "";
}
bool hasConflict(const BindingMap& map, const std::string& value) {
    return !value.empty() && std::count_if(map.begin(), map.end(),
        [&](const auto& item) { return item.second == value; }) > 1;
}
std::string padLabel(const std::string& binding, bool ps) {
    struct Label { const char* id; const char* xbox; const char* playstation; };
    static constexpr Label labels[]{
        {"a","A","Cross"},{"b","B","Circle"},{"x","X","Square"},{"y","Y","Triangle"},
        {"leftshoulder","LB","L1"},{"rightshoulder","RB","R1"},{"lefttrigger","LT","L2"},
        {"righttrigger","RT","R2"},{"leftstick","LS","L3"},{"rightstick","RS","R3"},
        {"start","Menu","Options"},{"back","View","Select"},{"guide","Guide","PS"},
        {"dpup","D-pad up","D-pad up"},{"dpdown","D-pad down","D-pad down"},
        {"dpleft","D-pad left","D-pad left"},{"dpright","D-pad right","D-pad right"},
        {"lefty-","LS up","LS up"},{"lefty+","LS down","LS down"},{"leftx-","LS left","LS left"},
        {"leftx+","LS right","LS right"},{"righty-","RS up","RS up"},{"righty+","RS down","RS down"},
        {"rightx-","RS left","RS left"},{"rightx+","RS right","RS right"}};
    for (const auto& label : labels) if (binding == label.id) return ps ? label.playstation : label.xbox;
    return binding;
}
