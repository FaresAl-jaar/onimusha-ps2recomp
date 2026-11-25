#include "ps2_host_settings.h"

#include <cctype>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <vector>

namespace
{
    // A small JSON reader: objects, arrays, strings, numbers, true/false/null. Enough for settings.json.
    struct Value
    {
        enum class Type { Null, Bool, Number, String, Array, Object } type = Type::Null;
        bool boolean = false;
        double number = 0.0;
        std::string text;
        std::vector<Value> items;
        std::vector<std::pair<std::string, Value>> members;

        const Value *get(const std::string &key) const
        {
            for (const auto &member : members)
                if (member.first == key)
                    return &member.second;
            return nullptr;
        }
    };

    class Parser
    {
    public:
        explicit Parser(const std::string &text) : m_text(text) {}

        bool parse(Value &out)
        {
            if (!value(out))
                return false;
            skip();
            return m_pos == m_text.size();
        }

    private:
        void skip()
        {
            while (m_pos < m_text.size() && std::isspace(static_cast<unsigned char>(m_text[m_pos])))
                ++m_pos;
        }

        bool literal(const char *word)
        {
            const std::string w(word);
            if (m_text.compare(m_pos, w.size(), w) != 0)
                return false;
            m_pos += w.size();
            return true;
        }

        bool string(std::string &out)
        {
            if (m_pos >= m_text.size() || m_text[m_pos] != '"')
                return false;
            ++m_pos;
            while (m_pos < m_text.size() && m_text[m_pos] != '"')
            {
                char c = m_text[m_pos++];
                if (c == '\\' && m_pos < m_text.size())
                {
                    const char e = m_text[m_pos++];
                    switch (e)
                    {
                    case 'n': out.push_back('\n'); break;
                    case 't': out.push_back('\t'); break;
                    case 'r': out.push_back('\r'); break;
                    case 'b': out.push_back('\b'); break;
                    case 'f': out.push_back('\f'); break;
                    case 'u':
                    {
                        if (m_pos + 4 > m_text.size())
                            return false;
                        const unsigned code = static_cast<unsigned>(std::stoul(m_text.substr(m_pos, 4), nullptr, 16));
                        m_pos += 4;
                        // UTF-8 for the basic plane (paths may hold non-ASCII characters).
                        if (code < 0x80)
                            out.push_back(static_cast<char>(code));
                        else if (code < 0x800)
                        {
                            out.push_back(static_cast<char>(0xC0 | (code >> 6)));
                            out.push_back(static_cast<char>(0x80 | (code & 0x3F)));
                        }
                        else
                        {
                            out.push_back(static_cast<char>(0xE0 | (code >> 12)));
                            out.push_back(static_cast<char>(0x80 | ((code >> 6) & 0x3F)));
                            out.push_back(static_cast<char>(0x80 | (code & 0x3F)));
                        }
                        break;
                    }
                    default: out.push_back(e); break;
                    }
                }
                else
                    out.push_back(c);
            }
            if (m_pos >= m_text.size())
                return false;
            ++m_pos;
            return true;
        }

        bool value(Value &out)
        {
            skip();
            if (m_pos >= m_text.size())
                return false;
            const char c = m_text[m_pos];
            if (c == '{')
            {
                out.type = Value::Type::Object;
                ++m_pos;
                skip();
                if (m_pos < m_text.size() && m_text[m_pos] == '}')
                {
                    ++m_pos;
                    return true;
                }
                for (;;)
                {
                    skip();
                    std::string key;
                    if (!string(key))
                        return false;
                    skip();
                    if (m_pos >= m_text.size() || m_text[m_pos] != ':')
                        return false;
                    ++m_pos;
                    Value member;
                    if (!value(member))
                        return false;
                    out.members.emplace_back(std::move(key), std::move(member));
                    skip();
                    if (m_pos < m_text.size() && m_text[m_pos] == ',')
                    {
                        ++m_pos;
                        continue;
                    }
                    if (m_pos < m_text.size() && m_text[m_pos] == '}')
                    {
                        ++m_pos;
                        return true;
                    }
                    return false;
                }
            }
            if (c == '[')
            {
                out.type = Value::Type::Array;
                ++m_pos;
                skip();
                if (m_pos < m_text.size() && m_text[m_pos] == ']')
                {
                    ++m_pos;
                    return true;
                }
                for (;;)
                {
                    Value item;
                    if (!value(item))
                        return false;
                    out.items.push_back(std::move(item));
                    skip();
                    if (m_pos < m_text.size() && m_text[m_pos] == ',')
                    {
                        ++m_pos;
                        continue;
                    }
                    if (m_pos < m_text.size() && m_text[m_pos] == ']')
                    {
                        ++m_pos;
                        return true;
                    }
                    return false;
                }
            }
            if (c == '"')
            {
                out.type = Value::Type::String;
                return string(out.text);
            }
            if (literal("true"))
            {
                out.type = Value::Type::Bool;
                out.boolean = true;
                return true;
            }
            if (literal("false"))
            {
                out.type = Value::Type::Bool;
                return true;
            }
            if (literal("null"))
                return true;
            const size_t start = m_pos;
            while (m_pos < m_text.size() && (std::isdigit(static_cast<unsigned char>(m_text[m_pos])) || m_text[m_pos] == '-' ||
                                             m_text[m_pos] == '+' || m_text[m_pos] == '.' || m_text[m_pos] == 'e' || m_text[m_pos] == 'E'))
                ++m_pos;
            if (start == m_pos)
                return false;
            out.type = Value::Type::Number;
            out.number = std::strtod(m_text.substr(start, m_pos - start).c_str(), nullptr);
            return true;
        }

        const std::string &m_text;
        size_t m_pos = 0;
    };

    void readString(const Value *object, const char *key, std::string &out)
    {
        if (object)
            if (const Value *v = object->get(key); v && v->type == Value::Type::String)
                out = v->text;
    }

    void readInt(const Value *object, const char *key, int &out)
    {
        if (object)
            if (const Value *v = object->get(key); v && v->type == Value::Type::Number)
                out = static_cast<int>(v->number);
    }

    void readDouble(const Value *object, const char *key, double &out)
    {
        if (object)
            if (const Value *v = object->get(key); v && v->type == Value::Type::Number)
                out = v->number;
    }

    void readBool(const Value *object, const char *key, bool &out)
    {
        if (object)
            if (const Value *v = object->get(key); v && v->type == Value::Type::Bool)
                out = v->boolean;
    }

    void readMap(const Value *object, std::map<std::string, std::string> &out)
    {
        if (!object || object->type != Value::Type::Object)
            return;
        for (const auto &[key, value] : object->members)
            if (value.type == Value::Type::String)
                out[key] = value.text;
    }
}

PS2HostSettings &ps2xHostSettings()
{
    static PS2HostSettings settings;
    return settings;
}

bool ps2xLoadHostSettings(const std::filesystem::path &file)
{
    std::ifstream stream(file, std::ios::binary);
    if (!stream)
        return false;
    std::stringstream buffer;
    buffer << stream.rdbuf();
    const std::string text = buffer.str();

    Value root;
    if (!Parser(text).parse(root) || root.type != Value::Type::Object)
    {
        std::cerr << "[settings] cannot read " << file.string() << ", using defaults" << std::endl;
        return false;
    }

    PS2HostSettings s;
    const Value *game = root.get("game");
    const Value *display = root.get("display");
    const Value *graphics = root.get("graphics");
    const Value *audio = root.get("audio");
    const Value *input = root.get("input");
    readString(game, "disc1_path", s.disc1Path);
    readInt(display, "monitor", s.monitor);
    readString(display, "mode", s.mode);
    readInt(display, "width", s.width);
    readInt(display, "height", s.height);
    readBool(display, "vsync", s.vsync);
    readInt(display, "fps_limit", s.fpsLimit);
    readInt(graphics, "resolution_scale", s.resolutionScale);
    readString(graphics, "aspect_ratio", s.aspectRatio);
    readString(graphics, "texture_filter", s.textureFilter);
    readString(graphics, "renderer", s.renderer);
    readString(graphics, "hd_textures", s.hdTextures);
    readInt(audio, "master", s.masterVolume);
    readBool(input, "mouse_keyboard", s.mouseKeyboard);
    readBool(input, "mouse_camera", s.mouseCamera);
    readDouble(input, "mouse_sensitivity", s.mouseSensitivity);
    readBool(input, "invert_y", s.invertY);
    if (input)
        if (const Value *bindings = input->get("bindings"))
        {
            readMap(bindings->get("keyboard"), s.keyboard);
            readMap(bindings->get("gamepad"), s.gamepad);
        }
    s.settingsFile = file;
    s.saveDirectory = file.parent_path() / "saves";
    s.loaded = true;
    ps2xHostSettings() = std::move(s);
    std::cerr << "[settings] loaded " << file.string() << std::endl;
    return true;
}
