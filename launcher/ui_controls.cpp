#include "ui.h"
#include <algorithm>
#include <cmath>

namespace {
bool isPlayStation(const UI& ui, SDL_GameController* handle) {
    if (ui.settings.input.controller_type != "auto") return ui.settings.input.controller_type == "PlayStation";
    auto type = handle ? SDL_GameControllerGetType(handle) : SDL_CONTROLLER_TYPE_UNKNOWN;
    return type==SDL_CONTROLLER_TYPE_PS3 || type==SDL_CONTROLLER_TYPE_PS4 || type==SDL_CONTROLLER_TYPE_PS5;
}
const char* controllerName(SDL_GameController* handle) {
    const char* name = SDL_GameControllerName(handle);
    return name ? name : "Controller";
}
void armAxes(Controller& pad) {
    for (int axis=0; axis<SDL_CONTROLLER_AXIS_MAX; ++axis)
        pad.ready[axis] = std::abs(static_cast<int>(SDL_GameControllerGetAxis(pad.handle,static_cast<SDL_GameControllerAxis>(axis)))) < 10000;
}
void beginCapture(UI& ui, const char* action, bool pad) {
    ui.capture = action;
    ui.capturePad = pad;
    for (auto& device : ui.controllers) armAxes(device);
}
void livePanel(UI& ui, SDL_GameController* pad, bool ps) {
    for (int b=0; b<SDL_CONTROLLER_BUTTON_MAX; ++b) {
        auto button=static_cast<SDL_GameControllerButton>(b);
        if (!SDL_GameControllerHasButton(pad,button)) continue;
        bool pressed = SDL_GameControllerGetButton(pad,button)!=0;
        auto label = padLabel(SDL_GameControllerGetStringForButton(button),ps);
        float width = ImGui::CalcTextSize(label.c_str()).x + 14*ui.scale;
        if (ImGui::GetCursorPosX() > ImGui::GetStyle().WindowPadding.x && width > ImGui::GetContentRegionAvail().x) ImGui::NewLine();
        auto p=ImGui::GetCursorScreenPos();
        float height=ImGui::GetFontSize()+8*ui.scale;
        ImGui::GetWindowDrawList()->AddRectFilled(p,{p.x+width,p.y+height},pressed ? IM_COL32(155,38,49,255) : IM_COL32(48,43,46,255),3*ui.scale);
        ImGui::GetWindowDrawList()->AddText({p.x+7*ui.scale,p.y+4*ui.scale},ImGui::GetColorU32(pressed ? ImVec4(1,1,1,1) : muted()), label.c_str());
        ImGui::Dummy({width,height});
        ImGui::SameLine(0,4*ui.scale);
    }
    ImGui::NewLine();
    auto axis=[&](SDL_GameControllerAxis a) {
        int value=SDL_GameControllerGetAxis(pad,a);
        return value / (value<0 ? 32768.0 : 32767.0);
    };
    ImGui::Text("Left stick   %+.2f, %+.2f       Right stick   %+.2f, %+.2f",
        axis(SDL_CONTROLLER_AXIS_LEFTX),axis(SDL_CONTROLLER_AXIS_LEFTY),axis(SDL_CONTROLLER_AXIS_RIGHTX),axis(SDL_CONTROLLER_AXIS_RIGHTY));
    ImGui::Text("Left trigger   %.0f%%       Right trigger   %.0f%%",100*axis(SDL_CONTROLLER_AXIS_TRIGGERLEFT),100*axis(SDL_CONTROLLER_AXIS_TRIGGERRIGHT));
}
void bindingCell(UI& ui, const char* action, bool pad, bool ps) {
    ImGui::PushID(pad ? "pad" : "key");
    auto& map=pad ? ui.settings.input.bindings.gamepad : ui.settings.input.bindings.keyboard;
    auto& value=map.at(action);
    bool waiting=ui.capture==action && ui.capturePad==pad;
    bool conflict=hasConflict(map,value);
    std::string label = waiting ? "Listening..." : value.empty() ? "Unbound" : pad ? padLabel(value,ps) : value;
    if (conflict && !waiting) label += "  (!)";
    if (conflict) ImGui::PushStyleColor(ImGuiCol_Text,red());
    // The hidden ID stays stable across rebinding, even for unusual key names.
    ImGui::PushID(action);
    if (ImGui::Button((label+"###bind").c_str(),{-1,0})) beginCapture(ui,action,pad);
    if (ImGui::IsItemHovered() && ImGui::IsMouseClicked(ImGuiMouseButton_Right)) {
        value.clear(); ui.capture.clear();
    }
    if (conflict && ImGui::IsItemHovered()) ImGui::SetTooltip("This input is assigned to multiple actions.");
    ImGui::PopID();
    if (conflict) ImGui::PopStyleColor();
    ImGui::PopID();
}
}
void addController(UI& ui, int index) {
    if (!SDL_IsGameController(index)) return;
    SDL_JoystickID id=SDL_JoystickGetDeviceInstanceID(index);
    if (id<0 || std::any_of(ui.controllers.begin(),ui.controllers.end(),[&](const auto& c){return c.id==id;})) return;
    if (auto* handle=SDL_GameControllerOpen(index)) {
        ui.controllers.push_back({handle,id,{}});
        armAxes(ui.controllers.back());
        if (ui.selected<0) ui.selected=id;
    }
}
void removeController(UI& ui, SDL_JoystickID id) {
    auto it=std::find_if(ui.controllers.begin(),ui.controllers.end(),[&](const auto& c){return c.id==id;});
    if (it==ui.controllers.end()) return;
    SDL_GameControllerClose(it->handle);
    ui.controllers.erase(it);
    if (ui.selected==id) ui.selected=ui.controllers.empty() ? -1 : ui.controllers.front().id;
}
bool inputEvent(UI& ui, const SDL_Event& e) {
    if (ui.capture.empty()) return false;
    if (e.type==SDL_KEYDOWN && e.key.keysym.sym==SDLK_ESCAPE) { ui.capture.clear(); return true; }
    std::string value;
    if (ui.capturePad) {
        if (e.type==SDL_CONTROLLERBUTTONDOWN) {
            auto button=static_cast<SDL_GameControllerButton>(e.cbutton.button);
            if (auto* name=SDL_GameControllerGetStringForButton(button)) value=name;
        } else if (e.type==SDL_CONTROLLERAXISMOTION && e.caxis.axis<SDL_CONTROLLER_AXIS_MAX) {
            for (auto& pad : ui.controllers) {
                if (pad.id!=e.caxis.which) continue;
                auto a=e.caxis.axis;
                if (std::abs(static_cast<int>(e.caxis.value))<10000) pad.ready[a]=true;
                if (pad.ready[a]) value=axisBinding(static_cast<SDL_GameControllerAxis>(a),e.caxis.value);
            }
        }
    } else if (e.type==SDL_KEYDOWN && !e.key.repeat) {
        value=SDL_GetKeyName(e.key.keysym.sym);
    } else if (e.type==SDL_MOUSEBUTTONDOWN && e.button.button>=1 && e.button.button<=5) {
        value="Mouse"+std::to_string(e.button.button);
    }
    if (value.empty()) return false;
    auto& bindings=ui.settings.input.bindings;
    (ui.capturePad ? bindings.gamepad : bindings.keyboard).at(ui.capture)=value;
    ui.capture.clear();
    return true;
}
void controlsTab(UI& ui) {
    auto& input=ui.settings.input;
    section(ui,"Controller");
    stringChoice("Button labels",input.controller_type,{"auto","Xbox","PlayStation"});
    SDL_GameController* selected=nullptr;
    for (const auto& pad : ui.controllers) if (pad.id==ui.selected) selected=pad.handle;
    if (ImGui::BeginCombo("Connected controllers",selected ? controllerName(selected) : "No controller connected")) {
        for (const auto& pad : ui.controllers) {
            ImGui::PushID(pad.id);
            if (ImGui::Selectable(controllerName(pad.handle),pad.id==ui.selected)) { ui.selected=pad.id; selected=pad.handle; }
            ImGui::PopID();
        }
        ImGui::EndCombo();
    }
    bool ps=isPlayStation(ui,selected);
    if (selected) livePanel(ui,selected,ps);
    ImGui::Spacing(); ImGui::Separator(); ImGui::Spacing();
    section(ui,"Mouse and keyboard");
    ImGui::Checkbox("Enable mouse and keyboard",&input.mouse_keyboard);
    ImGui::Checkbox("Mouse controls camera (right stick)",&input.mouse_camera);
    const double low=0.1, high=5.0;
    ImGui::SliderScalar("Mouse sensitivity",ImGuiDataType_Double,&input.mouse_sensitivity,&low,&high,"%.2f",ImGuiSliderFlags_AlwaysClamp);
    ImGui::Checkbox("Invert Y",&input.invert_y);
    ImGui::Spacing(); ImGui::Separator(); ImGui::Spacing();
    section(ui,"Input bindings");
    ImGui::TextWrapped("Select a binding, then press an input. Escape cancels. Right-click a cell to clear it.");
    if (ImGui::BeginTable("Bindings",3,ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_SizingStretchProp)) {
        ImGui::TableSetupColumn("PS2 input",ImGuiTableColumnFlags_WidthStretch,1);
        ImGui::TableSetupColumn("Keyboard / mouse",ImGuiTableColumnFlags_WidthStretch,1.4f);
        ImGui::TableSetupColumn("Gamepad",ImGuiTableColumnFlags_WidthStretch,1.4f);
        ImGui::TableHeadersRow();
        constexpr const char* names[]{"Cross","Circle","Square","Triangle","L1","R1","L2","R2","L3","R3","Start","Select",
            "D-pad up","D-pad down","D-pad left","D-pad right","Left stick up","Left stick down","Left stick left","Left stick right",
            "Right stick up","Right stick down","Right stick left","Right stick right"};
        static_assert(std::size(names)==actions.size());
        for (size_t n=0; n<actions.size(); ++n) {
            ImGui::TableNextRow(); ImGui::TableNextColumn();
            ImGui::AlignTextToFramePadding(); ImGui::TextUnformatted(names[n]);
            ImGui::TableNextColumn(); bindingCell(ui,actions[n],false,ps);
            ImGui::TableNextColumn(); bindingCell(ui,actions[n],true,ps);
        }
        ImGui::EndTable();
    }
}
