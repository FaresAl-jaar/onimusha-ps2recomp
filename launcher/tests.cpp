#include "launch.h"
#include "settings.h"
#include <fstream>
#include <iostream>

namespace fs=std::filesystem;
using json=nlohmann::json;
static void require(bool ok,const char* msg) { if (!ok) throw std::runtime_error(msg); }
static std::string bytes(const fs::path& p) {
    std::ifstream in(p,std::ios::binary);
    return {std::istreambuf_iterator<char>(in),{}};
}
int wmain(int argc,wchar_t** argv) {
    if (argc==3 && std::wstring(argv[1])==L"--settings") {
        std::ofstream out("child.json");
        out<<json{{"cwd",fs::current_path().u8string()},{"settings",fs::path(argv[2]).u8string()}};
        return 0;
    }
    try {
        auto dir=fs::absolute(fs::current_path()/fs::u8path("test 設定 "+std::to_string(GetCurrentProcessId())));
        fs::create_directories(dir);
        auto file=dir/L"settings.json";
        Settings s;
        loadSettings(file,s);
        require(json::parse(bytes(file))==json(Settings{}),"Defaults differ");
        require(s.input.bindings.keyboard.size()==24 && s.input.bindings.gamepad.size()==24,"Missing actions");
        for (const auto& [act,key] : s.input.bindings.keyboard) {
            if (!key.empty() && key.rfind("Mouse",0)!=0) require(key==SDL_GetKeyName(SDL_GetKeyFromName(key.c_str())),"Noncanonical key");
        }
        s.game.disc1_path=(dir/L"Disc 1.iso").u8string();
        s.display={1,"windowed",2560,1080,false,144};
        s.graphics={7,"21:9","nearest",true,false,false};
        s.audio={55,42,0,77,"USB Output"};
        s.input.controller_type="PlayStation"; s.input.mouse_sensitivity=2.35;
        s.input.bindings.keyboard["cross"]="Mouse5"; s.launcher.close_on_launch=false;
        saveSettings(file,s);
        auto encoded=bytes(file);
        Settings loaded;
        require(loadSettings(file,loaded).empty() && json(s)==json(loaded),"Round trip changed data");
        saveSettings(file,loaded);
        require(bytes(file)==encoded,"Round trip changed bytes");
        for (auto broken : {std::string("{{"),std::string("{}"),std::string("{\"version\":1}"),json(s).dump()+" trailing"}) {
            std::ofstream(file,std::ios::binary)<<broken;
            require(!loadSettings(file,loaded).empty(),"Missing recovery notice");
            require(bytes(dir/L"settings.json.bak")==broken && json(loaded)==json(Settings{}),"Broken settings recovery failed");
        }
        std::ofstream(dir/L"SLUS_211.80")<<"disc";
        require(validDisc(dir.u8string(),1) && !validDisc(dir.u8string(),2),"Disc folder check");
        std::ofstream(dir/L"tiny.iso")<<"bad";
        require(!validDisc((dir/L"tiny.iso").u8string(),1),"Short ISO accepted");
        require(axisBinding(SDL_CONTROLLER_AXIS_TRIGGERLEFT,32767)=="lefttrigger" && axisBinding(SDL_CONTROLLER_AXIS_LEFTX,-32768)=="leftx-","Axis mapping");
        auto bindings=defaultBindings();
        bindings.keyboard["square"]=bindings.keyboard["circle"];
        require(hasConflict(bindings.keyboard,"E") && !hasConflict(bindings.keyboard,""),"Conflict detection");
        bool missing=false;
        try {startGame(dir);} catch (const std::runtime_error& e) {missing=std::string(e.what()).find("Onimusha.exe is missing")!=std::string::npos;}
        require(missing,"Missing game feedback");
        fs::copy_file(executableFolder()/L"launcher_tests.exe",dir/L"Onimusha.exe");
        startGame(dir);
        for (int n=0;n<200 && !fs::exists(dir/L"child.json");++n) Sleep(25);
        json child;
        for (int n=0;n<100;++n) {
            child=json::parse(bytes(dir/L"child.json"),nullptr,false);
            if (!child.is_discarded()) break;
            Sleep(20);
        }
        require(child.at("cwd")==dir.u8string() && child.at("settings")==file.u8string(),"Game working directory or settings argument");
        for (int n=0;n<100;++n) {
            std::error_code ec; fs::remove_all(dir,ec); if (!ec) break; Sleep(25);
        }
        std::cout<<"Settings, recovery, bindings, disc validation and process launch passed.\n";
        return 0;
    } catch (const std::exception& e) { std::cerr<<e.what()<<'\n'; return 1; }
}
