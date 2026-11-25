#include "settings.h"
#include <windows.h>
#include <algorithm>
#include <fstream>
#include <stdexcept>

namespace fs = std::filesystem;
using json = nlohmann::json;
namespace {
template<typename T> bool oneOf(const T& value, std::initializer_list<T> options) {
    return std::find(options.begin(), options.end(), value) != options.end();
}
void checkShape(const json& value, const json& prototype) {
    if (prototype.is_object()) {
        if (!value.is_object() || value.size() != prototype.size()) throw std::invalid_argument("Unexpected settings fields");
        for (const auto& item : prototype.items()) checkShape(value.at(item.key()), item.value());
    } else if (prototype.is_number_integer()) {
        if (!value.is_number_integer() || value.get<double>() < INT_MIN || value.get<double>() > INT_MAX)
            throw std::invalid_argument("Expected an integer");
    } else if (prototype.is_number_float() ? !value.is_number() : value.type() != prototype.type()) {
        throw std::invalid_argument("Unexpected settings value type");
    }
}
void checkValues(const Settings& s) {
    const auto& d = s.display;
    const auto& g = s.graphics;
    const auto& i = s.input;
    if (s.version != 1 || d.monitor < 0 || d.width < 0 || d.height < 0 || ((d.width == 0) != (d.height == 0))
        || !oneOf<std::string>(d.mode, {"fullscreen","borderless","windowed"}) || !oneOf(d.fps_limit,{0,30,60,120,144})
        || g.resolution_scale < 1 || g.resolution_scale > 8 || !oneOf<std::string>(g.aspect_ratio,{"auto","4:3","16:9","21:9","32:9"})
        || !oneOf<std::string>(g.texture_filter,{"nearest","bilinear"}) || !oneOf<std::string>(g.renderer,{"gpu","cpu"}) || !oneOf<std::string>(i.controller_type,{"auto","Xbox","PlayStation"})
        || !(i.mouse_sensitivity >= 0.1 && i.mouse_sensitivity <= 5.0)) throw std::invalid_argument("Unsupported settings value");
    for (int volume : {s.audio.master,s.audio.music,s.audio.effects,s.audio.voice})
        if (volume < 0 || volume > 100) throw std::invalid_argument("Volume out of range");
}
}
void saveSettings(const fs::path& file, const Settings& settings) {
    auto data = json(settings).dump(2) + "\n";
    // A sibling temporary file keeps replacement on the same volume.
    fs::path temp = file.wstring() + L"." + std::to_wstring(GetCurrentProcessId()) + L".tmp";
    try {
        std::ofstream out;
        out.exceptions(std::ios::failbit | std::ios::badbit);
        out.open(temp, std::ios::binary | std::ios::trunc);
        out.write(data.data(), static_cast<std::streamsize>(data.size()));
        out.close();
        if (!MoveFileExW(temp.c_str(), file.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(static_cast<int>(GetLastError()), std::system_category(), "Replace settings");
    } catch (...) {
        std::error_code ignored;
        fs::remove(temp, ignored);
        throw;
    }
}
std::string loadSettings(const fs::path& file, Settings& settings) {
    if (!fs::exists(file)) {
        settings = Settings{};
        saveSettings(file, settings);
        return {};
    }
    std::ifstream in(file, std::ios::binary);
    if (!in) throw std::runtime_error("Could not open settings.json for reading");
    in.exceptions(std::ios::badbit);
    try {
        json data = json::parse(in);
        // Settings written by an older launcher lack the newer fields: they take their defaults.
        json merged = json(Settings{});
        merged.merge_patch(data);
        data = std::move(merged);
        checkShape(data, json(Settings{}));
        auto parsed = data.get<Settings>();
        checkValues(parsed);
        settings = std::move(parsed);
        return {};
    } catch (const json::exception&) {
    } catch (const std::invalid_argument&) {
    }
    in.close();
    fs::copy_file(file, file.wstring() + L".bak", fs::copy_options::overwrite_existing);
    settings = Settings{};
    saveSettings(file, settings);
    return "Restored defaults. Previous settings saved to settings.json.bak.";
}
