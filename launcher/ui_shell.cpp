#include <stdexcept>
#include <functional>
#include "ui.h"
#include <algorithm>
#include <cmath>

void styleUI(UI& ui) {
    ImGuiStyle& s = ImGui::GetStyle();
    ImGui::StyleColorsDark();
    s.WindowPadding = {24,20};
    s.FramePadding = {10,6};
    s.CellPadding = {8,5};
    s.ItemSpacing = {10,8};
    s.FrameRounding = 3;
    s.GrabRounding = 2;
    s.ScrollbarSize = 10;
    s.WindowBorderSize = 0;
    s.FrameBorderSize = 1;
    auto* c = s.Colors;
    c[ImGuiCol_WindowBg] = {0.077f,0.073f,0.080f,1};
    c[ImGuiCol_Text] = {0.94f,0.92f,0.88f,1};
    c[ImGuiCol_Border] = {0.26f,0.24f,0.25f,1};
    c[ImGuiCol_Separator] = c[ImGuiCol_Border];
    c[ImGuiCol_FrameBg] = {0.13f,0.12f,0.13f,1};
    c[ImGuiCol_Button] = {0.17f,0.15f,0.16f,1};
    c[ImGuiCol_FrameBgHovered] = c[ImGuiCol_ButtonHovered] = {0.32f,0.17f,0.18f,1};
    c[ImGuiCol_ButtonActive] = c[ImGuiCol_FrameBgActive] = {0.42f,0.12f,0.14f,1};
    c[ImGuiCol_Header] = {0.40f,0.10f,0.13f,1};
    c[ImGuiCol_HeaderHovered] = {0.49f,0.14f,0.16f,1};
    c[ImGuiCol_HeaderActive] = c[ImGuiCol_HeaderHovered];
    c[ImGuiCol_SliderGrab] = c[ImGuiCol_CheckMark] = {0.88f,0.38f,0.36f,1};
    c[ImGuiCol_SliderGrabActive] = red();
    s.ScaleAllSizes(ui.scale);
}
void section(UI& ui, const char* title) {
    ImGui::PushFont(ui.heading);
    ImGui::TextUnformatted(title);
    ImGui::PopFont();
}
void stringChoice(const char* label, std::string& value, std::initializer_list<const char*> options) {
    if (ImGui::BeginCombo(label, value.c_str())) {
        for (auto option : options) {
            bool active = value == option;
            if (ImGui::Selectable(option, active)) value = option;
            if (active) ImGui::SetItemDefaultFocus();
        }
        ImGui::EndCombo();
    }
}
void drawUI(UI& ui) {
    const auto* vp = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(vp->Pos);
    ImGui::SetNextWindowSize(vp->Size);
    ImGui::Begin("Launcher", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollWithMouse);
    const float z = ui.scale;
    const auto origin = ImGui::GetWindowPos();
    auto* draw = ImGui::GetWindowDrawList();
    draw->AddRectFilledMultiColor(origin,{origin.x+vp->Size.x,origin.y+90*z},
        IM_COL32(59,22,28,255),IM_COL32(28,22,27,255),IM_COL32(24,21,25,255),IM_COL32(42,23,29,255));
    if (ui.icon) {
        ImGui::Image(static_cast<ImTextureID>(reinterpret_cast<uintptr_t>(ui.icon)), {48*z,48*z});
        ImGui::SameLine(0,14*z);
    }
    ImGui::SetCursorPosY(ImGui::GetCursorPosY()+8*z);
    ImGui::PushFont(ui.title);
    ImGui::TextUnformatted("Onimusha: Dawn of Dreams PC");
    ImGui::PopFont();
    ImGui::SameLine();
    ImGui::SetCursorPos({vp->Size.x - 150*z, 20*z});
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.54f,0.09f,0.13f,1));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.68f,0.14f,0.18f,1));
    const bool play = ImGui::Button("PLAY",{126*z,46*z});
    ImGui::PopStyleColor(2);
    if (play && !ui.extract) {
        try {
            saveSettings(ui.folder / L"settings.json",ui.settings);
            const std::string& disc = ui.settings.game.disc1_path;
            if (!validDisc(disc,1)) throw std::runtime_error("Select your Onimusha Disc 1 ISO on the Game tab first.");
            if (isIsoPath(disc) && !isoExtracted(std::filesystem::u8path(disc),unpackFolder(ui.folder,1))) {
                // First start with this ISO: unpack it once next to the launcher, then start.
                ui.extract = std::make_unique<ExtractProgress>();
                ui.extractThread = std::thread(extractIso,std::filesystem::u8path(disc),unpackFolder(ui.folder,1),std::ref(*ui.extract));
                ui.notice("Preparing the disc (only needed once)...");
            } else {
                const auto elf = isIsoPath(disc) ? unpackFolder(ui.folder,1)/L"SLUS_211.80" : std::filesystem::u8path(disc)/L"SLUS_211.80";
                startGame(ui.folder,elf);
                ui.notice("Game started.");
                if (ui.settings.launcher.close_on_launch) ui.running = false;
            }
        } catch (const std::exception& e) { ui.notice(e.what(),true); }
    }
    if (ui.extract) {
        auto& p = *ui.extract;
        ImGui::OpenPopup("Preparing disc");
        if (ImGui::BeginPopupModal("Preparing disc",nullptr,ImGuiWindowFlags_AlwaysAutoResize)) {
            const double total = static_cast<double>(p.total.load()), done = static_cast<double>(p.done.load());
            ImGui::TextUnformatted("Unpacking Disc 1 for the first start. This happens only once.");
            ImGui::ProgressBar(total > 0 ? static_cast<float>(done/total) : 0.0f,{420*z,0});
            ImGui::Text("%.1f of %.1f GB",done/1073741824.0,total/1073741824.0);
            if (ImGui::Button("Cancel")) p.cancel = true;
            ImGui::EndPopup();
        }
        if (p.finished) {
            ui.extractThread.join();
            const bool failed = p.failed, cancelled = p.cancel;
            const std::string error = p.error;
            ui.extract.reset();
            if (failed) ui.notice(cancelled ? "Unpacking cancelled." : error,!cancelled);
            else {
                try {
                    startGame(ui.folder,unpackFolder(ui.folder,1)/L"SLUS_211.80");
                    ui.notice("Game started.");
                    if (ui.settings.launcher.close_on_launch) ui.running = false;
                } catch (const std::exception& e) { ui.notice(e.what(),true); }
            }
        }
    }
    ImGui::SetCursorPosY(92*z);
    constexpr const char* tabs[]{"Game","Display","Graphics","Audio","Controls"};
    for (int n=0; n<5; ++n) {
        if (n) ImGui::SameLine(0,4*z);
        ImGui::PushStyleColor(ImGuiCol_Button, n==ui.tab ? ImVec4(0.22f,0.13f,0.15f,1) : ImVec4(0,0,0,0));
        ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize,0);
        if (ImGui::Button(tabs[n], {88*z,34*z})) { ui.tab = n; ui.capture.clear(); }
        ImGui::PopStyleVar();
        ImGui::PopStyleColor();
        if (ui.tab==n) {
            auto a = ImGui::GetItemRectMin(), b = ImGui::GetItemRectMax();
            draw->AddRectFilled({a.x,b.y-2*z},b,IM_COL32(205,67,73,255));
        }
    }
    ImGui::Separator();
    ImGui::PushID(ui.tab);
    if (ImGui::BeginChild("Options",{0,-93*z})) {
        ImGui::Spacing();
        ImGui::PushItemWidth(std::min(330*z,ImGui::GetContentRegionAvail().x*0.55f));
        switch (ui.tab) {
        case 0: gameTab(ui); break;
        case 1: displayTab(ui); break;
        case 2: graphicsTab(ui); break;
        case 3: audioTab(ui); break;
        case 4: controlsTab(ui); break;
        }
        ImGui::PopItemWidth();
    }
    ImGui::EndChild();
    ImGui::PopID();
    ImGui::Separator();
    ImGui::PushStyleColor(ImGuiCol_Text,ui.error ? red() : muted());
    ImGui::TextWrapped("%s",ui.message.empty() ? " " : ui.message.c_str());
    ImGui::PopStyleColor();
    if (ImGui::Button("Save",{83*z,0})) {
        try { saveSettings(ui.folder / L"settings.json",ui.settings); ui.notice("Settings saved."); }
        catch (const std::exception& e) { ui.notice(e.what(),true); }
    }
    ImGui::SameLine();
    if (ImGui::Button("Reset to defaults")) { ui.settings = Settings{}; ui.capture.clear(); ui.notice("Defaults restored. Select Save to keep them."); }
    ImGui::SameLine();
    ImGui::SetCursorPosX(std::max(ImGui::GetCursorPosX(),vp->Size.x-ImGui::CalcTextSize("Open game folder").x-46*z));
    if (ImGui::Button("Open game folder")) {
        try { openFolder(ui.hwnd,ui.folder); }
        catch (const std::exception& e) { ui.notice(e.what(),true); }
    }
    ImGui::End();
}
