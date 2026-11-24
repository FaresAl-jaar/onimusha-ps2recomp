#include "ui.h"
#include <SDL_syswm.h>
#include <objbase.h>
#include <imgui_impl_sdl2.h>
#include <imgui_impl_sdlrenderer2.h>
#include <algorithm>
#include <stdexcept>

namespace {
SDL_Texture* headerIcon(SDL_Renderer* renderer,HICON icon) {
    constexpr int side=64;
    BITMAPINFO info{};
    info.bmiHeader.biSize=sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth=side;
    info.bmiHeader.biHeight=-side;
    info.bmiHeader.biPlanes=1;
    info.bmiHeader.biBitCount=32;
    HDC dc=CreateCompatibleDC(nullptr);
    void* pixels=nullptr;
    HBITMAP bitmap=CreateDIBSection(dc,&info,DIB_RGB_COLORS,&pixels,nullptr,0);
    SDL_Texture* texture=nullptr;
    if (dc && bitmap && pixels) {
        auto old=SelectObject(dc,bitmap);
        ZeroMemory(pixels,side*side*4);
        if (DrawIconEx(dc,0,0,icon,side,side,0,nullptr,DI_NORMAL)) {
            GdiFlush();
            SDL_Surface* surface=SDL_CreateRGBSurfaceWithFormatFrom(pixels,side,side,32,side*4,SDL_PIXELFORMAT_BGRA32);
            if (surface) { texture=SDL_CreateTextureFromSurface(renderer,surface); SDL_FreeSurface(surface); }
        }
        SelectObject(dc,old);
    }
    if (bitmap) DeleteObject(bitmap);
    if (dc) DeleteDC(dc);
    return texture;
}
void run() {
    UI ui;
    ui.folder=executableFolder();
    std::filesystem::create_directories(ui.folder/L"saves");
    ui.notice(loadSettings(ui.folder/L"settings.json",ui.settings));
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER)!=0) throw std::runtime_error(SDL_GetError());
    SDL_InitSubSystem(SDL_INIT_AUDIO);
    const HDC screen=GetDC(nullptr);
    if (screen) { ui.scale=std::clamp(static_cast<float>(GetDeviceCaps(screen,LOGPIXELSX))/96.0f,1.0f,3.0f); ReleaseDC(nullptr,screen); }
    SDL_Window* window=SDL_CreateWindow("Onimusha: Dawn of Dreams PC",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
        static_cast<int>(900*ui.scale),static_cast<int>(600*ui.scale),SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (!window) throw std::runtime_error(SDL_GetError());
    SDL_SetWindowMinimumSize(window,static_cast<int>(690*ui.scale),static_cast<int>(460*ui.scale));
    SDL_SysWMinfo wm{};
    SDL_VERSION(&wm.version);
    if (!SDL_GetWindowWMInfo(window,&wm)) throw std::runtime_error(SDL_GetError());
    ui.hwnd=wm.info.win.window;
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"linear");
    auto* renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer) renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
    if (!renderer) throw std::runtime_error(SDL_GetError());
    auto getIcon=[](int size) {
        return static_cast<HICON>(LoadImageW(GetModuleHandleW(nullptr),MAKEINTRESOURCEW(101),IMAGE_ICON,size,size,LR_SHARED));
    };
    for (int size : {16,32}) SendMessageW(ui.hwnd,WM_SETICON,size==16 ? ICON_SMALL : ICON_BIG,reinterpret_cast<LPARAM>(getIcon(size)));
    ui.icon=headerIcon(renderer,getIcon(64));
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    auto& io=ImGui::GetIO();
    io.IniFilename=nullptr;
    io.LogFilename=nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    wchar_t windows[MAX_PATH]{};
    GetWindowsDirectoryW(windows,MAX_PATH);
    auto fonts=std::filesystem::path(windows)/L"Fonts";
    auto font=[&](const wchar_t* name,float size) {
        auto file=fonts/name;
        if (std::filesystem::is_regular_file(file))
            if (auto* f=io.Fonts->AddFontFromFileTTF(file.u8string().c_str(),size*ui.scale)) return f;
        ImFontConfig config{};
        config.SizePixels=size*ui.scale;
        return io.Fonts->AddFontDefault(&config);
    };
    io.FontDefault=font(L"segoeui.ttf",17);
    ui.title=font(L"georgia.ttf",29);
    ui.heading=font(L"segoeuib.ttf",20);
    styleUI(ui);
    if (!ImGui_ImplSDL2_InitForSDLRenderer(window,renderer) || !ImGui_ImplSDLRenderer2_Init(renderer))
        throw std::runtime_error("Could not initialize the launcher interface.");
    for (int n=0;n<SDL_NumJoysticks();++n) addController(ui,n);
    while (ui.running) {
        auto start=SDL_GetTicks64();
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type==SDL_QUIT || (event.type==SDL_WINDOWEVENT && event.window.event==SDL_WINDOWEVENT_CLOSE)) ui.running=false;
            if (event.type==SDL_WINDOWEVENT && event.window.event==SDL_WINDOWEVENT_FOCUS_LOST) ui.capture.clear();
            if (event.type==SDL_CONTROLLERDEVICEADDED) addController(ui,event.cdevice.which);
            if (event.type==SDL_CONTROLLERDEVICEREMOVED) removeController(ui,event.cdevice.which);
            if (!inputEvent(ui,event)) ImGui_ImplSDL2_ProcessEvent(&event);
        }
        if (!ui.running) break;
        if (SDL_GetWindowFlags(window)&SDL_WINDOW_MINIMIZED) { SDL_Delay(50); continue; }
        ImGui_ImplSDLRenderer2_NewFrame();
        ImGui_ImplSDL2_NewFrame();
        ImGui::NewFrame();
        drawUI(ui);
        ImGui::Render();
        SDL_SetRenderDrawColor(renderer,20,19,20,255);
        SDL_RenderClear(renderer);
        ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData(),renderer);
        SDL_RenderPresent(renderer);
        auto elapsed=SDL_GetTicks64()-start;
        if (elapsed<16) SDL_Delay(static_cast<Uint32>(16-elapsed));
    }
    if (ui.extract) { ui.extract->cancel = true; if (ui.extractThread.joinable()) ui.extractThread.join(); }
    for (const auto& c : ui.controllers) SDL_GameControllerClose(c.handle);
    ImGui_ImplSDLRenderer2_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();
    SDL_DestroyTexture(ui.icon);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
}
int WINAPI wWinMain(HINSTANCE,HINSTANCE,PWSTR,int) {
    SDL_SetMainReady();
    HRESULT com=CoInitializeEx(nullptr,COINIT_APARTMENTTHREADED);
    int code=0;
    try { run(); }
    catch (const std::exception& e) { MessageBoxA(nullptr,e.what(),"Onimusha Launcher",MB_OK | MB_ICONERROR); code=1; }
    SDL_Quit();
    if (SUCCEEDED(com)) CoUninitialize();
    return code;
}
