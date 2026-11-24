#include "ui.h"
#include <algorithm>
#include <numeric>
#include <set>

namespace {
std::string dimensions(int w, int h) { return std::to_string(w) + " x " + std::to_string(h); }
std::string monitorLabel(int n) {
    const char* name = SDL_GetDisplayName(n);
    return std::to_string(n+1) + "  " + (name ? name : "(unavailable)");
}
}
void displayTab(UI& ui) {
    auto& d = ui.settings.display;
    section(ui,"Display output");
    const int count = SDL_GetNumVideoDisplays();
    if (ImGui::BeginCombo("Monitor",monitorLabel(d.monitor).c_str())) {
        for (int n=0; n<count; ++n) {
            if (ImGui::Selectable(monitorLabel(n).c_str(),n==d.monitor) && n!=d.monitor) {
                d.monitor=n; d.width=0; d.height=0;
            }
        }
        ImGui::EndCombo();
    }
    stringChoice("Window mode",d.mode,{"fullscreen","borderless","windowed"});
    SDL_DisplayMode desktop{};
    bool available = SDL_GetDesktopDisplayMode(d.monitor,&desktop)==0;
    std::string native = available ? "Native (" + dimensions(desktop.w,desktop.h) + ")" : "Native";
    auto preview = d.width==0 ? native : dimensions(d.width,d.height);
    if (ImGui::BeginCombo("Resolution",preview.c_str())) {
        if (ImGui::Selectable(native.c_str(),d.width==0)) { d.width=0; d.height=0; }
        std::set<std::pair<int,int>> modes;
        int modeCount = SDL_GetNumDisplayModes(d.monitor);
        for (int index=0; index<modeCount; ++index) {
            SDL_DisplayMode mode{};
            if (SDL_GetDisplayMode(d.monitor,index,&mode)==0 && mode.w>0 && mode.h>0) modes.emplace(mode.w,mode.h);
        }
        for (auto [w,h] : modes) if (ImGui::Selectable(dimensions(w,h).c_str(),w==d.width && h==d.height)) {
            d.width=w; d.height=h;
        }
        ImGui::EndCombo();
    }
    std::string fps = d.fps_limit ? std::to_string(d.fps_limit) : "Unlimited";
    if (ImGui::BeginCombo("Frame limit",fps.c_str())) {
        for (int cap : {30,60,120,144,0}) if (ImGui::Selectable(cap ? std::to_string(cap).c_str() : "Unlimited",d.fps_limit==cap)) d.fps_limit=cap;
        ImGui::EndCombo();
    }
    ImGui::Checkbox("VSync",&d.vsync);
}
void graphicsTab(UI& ui) {
    auto& g = ui.settings.graphics;
    section(ui,"Rendering");
    ImGui::SliderInt("Internal resolution scale",&g.resolution_scale,1,8,"%dx",ImGuiSliderFlags_AlwaysClamp);
    ImGui::TextColored(muted(),"Internal resolution   %d x %d",640*g.resolution_scale,448*g.resolution_scale);
    stringChoice("Aspect ratio",g.aspect_ratio,{"auto","4:3","16:9","21:9","32:9"});
    if (g.aspect_ratio=="auto") {
        const auto& d = ui.settings.display;
        int w=d.width, h=d.height;
        SDL_DisplayMode mode{};
        if (!w && SDL_GetDesktopDisplayMode(d.monitor,&mode)==0) { w=mode.w; h=mode.h; }
        if (w>0 && h>0) {
            int gcd = std::gcd(w,h);
            ImGui::TextColored(muted(),"Output aspect   %d:%d  (%d x %d)",w/gcd,h/gcd,w,h);
        } else ImGui::TextColored(muted(),"Monitor resolution unavailable");
    }
    stringChoice("Texture filtering",g.texture_filter,{"nearest","bilinear"});
    ImGui::Spacing();
    ImGui::Checkbox("FXAA",&g.fxaa);
    ImGui::Checkbox("Deinterlace",&g.deinterlace);
    ImGui::Checkbox("HUD stretch fix",&g.hud_fix);
}
void audioTab(UI& ui) {
    auto& a=ui.settings.audio;
    section(ui,"Audio output");
    if (ImGui::BeginCombo("Output device",a.device.c_str())) {
        if (ImGui::Selectable("default",a.device=="default")) a.device="default";
        int count=SDL_GetNumAudioDevices(0);
        for (int n=0; n<count; ++n) {
            const char* name=SDL_GetAudioDeviceName(n,0);
            ImGui::PushID(n);
            if (name && ImGui::Selectable(name,a.device==name)) a.device=name;
            ImGui::PopID();
        }
        ImGui::EndCombo();
    }
    ImGui::Spacing(); ImGui::Separator(); ImGui::Spacing();
    section(ui,"Volume");
    ImGui::SliderInt("Master",&a.master,0,100,"%d%%",ImGuiSliderFlags_AlwaysClamp);
    ImGui::SliderInt("Music",&a.music,0,100,"%d%%",ImGuiSliderFlags_AlwaysClamp);
    ImGui::SliderInt("Effects",&a.effects,0,100,"%d%%",ImGuiSliderFlags_AlwaysClamp);
    ImGui::SliderInt("Voice",&a.voice,0,100,"%d%%",ImGuiSliderFlags_AlwaysClamp);
}
