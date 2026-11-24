#include "ui.h"
#include <misc/cpp/imgui_stdlib.h>
#include <algorithm>

void gameTab(UI& ui) {
    section(ui,"Game discs");
    ImGui::TextColored(muted(),"Select an ISO image or the root of an extracted disc.");
    auto now = SDL_GetTicks64();
    bool refresh = now - ui.lastDiscCheck >= 1500;
    if (refresh) ui.lastDiscCheck = now;
    for (int n=0; n<2; ++n) {
        ImGui::PushID(n);
        ImGui::Spacing();
        ImGui::AlignTextToFramePadding();
        ImGui::Text("Disc %d", n+1);
        auto& value = n==0 ? ui.settings.game.disc1_path : ui.settings.game.disc2_path;
        ImGui::SameLine();
        const auto statusPos = ImGui::GetCursorScreenPos();
        ImGui::Dummy({1,ImGui::GetFrameHeight()});
        const char* hint = n==0 ? "Path to Disc 1" : "Path to Disc 2";
        const float buttons = ImGui::CalcTextSize("ISO...Folder...").x + 4*ImGui::GetStyle().FramePadding.x + 2*ImGui::GetStyle().ItemSpacing.x;
        ImGui::SetNextItemWidth(std::max(80.0f,ImGui::GetContentRegionAvail().x-buttons-2));
        ImGui::InputTextWithHint("##path",hint,&value);
        for (bool folder : {false,true}) {
            ImGui::SameLine();
            if (ImGui::Button(folder ? "Folder..." : "ISO...")) {
                try { if (auto path = browseDisc(ui.hwnd,folder,n+1)) value = *path; }
                catch (const std::exception& e) { ui.notice(e.what(),true); }
            }
        }
        if (refresh || ui.checkedPaths[n]!=value) {
            ui.discValid[n] = validDisc(value,n+1);
            ui.checkedPaths[n] = value;
        }
        bool ok = ui.discValid[n];
        auto* list = ImGui::GetWindowDrawList();
        auto color = ImGui::GetColorU32(ok ? green() : red());
        float z = ui.scale, x=statusPos.x+3*z, y=statusPos.y+ImGui::GetFrameHeight()/2;
        if (ok) {
            list->AddLine({x,y},{x+4*z,y+4*z},color,2*z);
            list->AddLine({x+4*z,y+4*z},{x+11*z,y-4*z},color,2*z);
        } else {
            list->AddLine({x,y-4*z},{x+8*z,y+4*z},color,2*z);
            list->AddLine({x+8*z,y-4*z},{x,y+4*z},color,2*z);
        }
        list->AddText({x+18*z,y-ImGui::GetFontSize()/2},color,ok ? "Verified" : (value.empty() ? "No disc selected" : "Invalid disc"));
        ImGui::TextColored(muted(),"Your disc image (.iso) or a folder containing %s. An ISO is unpacked once on the first start.", n==0 ? "SLUS_211.80" : "SLUS_213.62");
        ImGui::PopID();
    }
    ImGui::Spacing(); ImGui::Separator(); ImGui::Spacing();
    ImGui::Checkbox("Close launcher when the game starts",&ui.settings.launcher.close_on_launch);
}
