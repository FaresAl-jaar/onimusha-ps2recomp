// Host input for the PS2 pad: every connected gamepad (raylib's mapping database covers Xbox, PlayStation,
// Switch and most others), keyboard and mouse, with the bindings the launcher stores in settings.json.
// Binding names follow the launcher: SDL game controller names for pads (a, leftshoulder, lefty-, ...),
// SDL key names and Mouse1..Mouse5 for keyboard and mouse.
#include "ps2_host_input.h"
#include "ps2_host_settings.h"

#include "raylib.h"

#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <map>
#include <string>

namespace
{
    // PS2 pad buttons (active low in the pad data).
    constexpr uint16_t kSelect = 1u << 0, kL3 = 1u << 1, kR3 = 1u << 2, kStart = 1u << 3, kUp = 1u << 4, kRight = 1u << 5,
                       kDown = 1u << 6, kLeft = 1u << 7, kL2 = 1u << 8, kR2 = 1u << 9, kL1 = 1u << 10, kR1 = 1u << 11,
                       kTriangle = 1u << 12, kCircle = 1u << 13, kCross = 1u << 14, kSquare = 1u << 15;

    struct ButtonAction
    {
        const char *name;
        uint16_t mask;
    };
    constexpr ButtonAction kButtons[] = {
        {"cross", kCross}, {"circle", kCircle}, {"square", kSquare}, {"triangle", kTriangle}, {"l1", kL1}, {"r1", kR1},
        {"l2", kL2}, {"r2", kR2}, {"l3", kL3}, {"r3", kR3}, {"start", kStart}, {"select", kSelect},
        {"dpad_up", kUp}, {"dpad_down", kDown}, {"dpad_left", kLeft}, {"dpad_right", kRight}};

    // Stick actions: which stick (0 left, 1 right), axis (0 x, 1 y) and direction.
    struct StickAction
    {
        const char *name;
        int stick;
        int axis;
        float sign;
    };
    constexpr StickAction kSticks[] = {
        {"lstick_up", 0, 1, -1.0f}, {"lstick_down", 0, 1, 1.0f}, {"lstick_left", 0, 0, -1.0f}, {"lstick_right", 0, 0, 1.0f},
        {"rstick_up", 1, 1, -1.0f}, {"rstick_down", 1, 1, 1.0f}, {"rstick_left", 1, 0, -1.0f}, {"rstick_right", 1, 0, 1.0f}};

    const std::map<std::string, std::string> &defaultPadBindings()
    {
        static const std::map<std::string, std::string> map = {
            {"cross", "a"}, {"circle", "b"}, {"square", "x"}, {"triangle", "y"}, {"l1", "leftshoulder"}, {"r1", "rightshoulder"},
            {"l2", "lefttrigger"}, {"r2", "righttrigger"}, {"l3", "leftstick"}, {"r3", "rightstick"}, {"start", "start"},
            {"select", "back"}, {"dpad_up", "dpup"}, {"dpad_down", "dpdown"}, {"dpad_left", "dpleft"}, {"dpad_right", "dpright"},
            {"lstick_up", "lefty-"}, {"lstick_down", "lefty+"}, {"lstick_left", "leftx-"}, {"lstick_right", "leftx+"},
            {"rstick_up", "righty-"}, {"rstick_down", "righty+"}, {"rstick_left", "rightx-"}, {"rstick_right", "rightx+"}};
        return map;
    }

    const std::map<std::string, std::string> &defaultKeyBindings()
    {
        static const std::map<std::string, std::string> map = {
            {"cross", "Space"}, {"circle", "E"}, {"square", "Mouse1"}, {"triangle", "Mouse3"}, {"l1", "Q"}, {"r1", "R"},
            {"l2", "Left Shift"}, {"r2", "Left Ctrl"}, {"start", "Return"}, {"select", "Tab"}, {"dpad_up", "Up"},
            {"dpad_down", "Down"}, {"dpad_left", "Left"}, {"dpad_right", "Right"}, {"lstick_up", "W"}, {"lstick_down", "S"},
            {"lstick_left", "A"}, {"lstick_right", "D"}};
        return map;
    }

    std::string lower(std::string text)
    {
        for (char &c : text)
            c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        return text;
    }

    // SDL key name -> raylib key code (0 when unknown).
    int keyCode(const std::string &name)
    {
        if (name.empty())
            return 0;
        const std::string n = lower(name);
        if (n.size() == 1)
        {
            const char c = n[0];
            if (c >= 'a' && c <= 'z')
                return KEY_A + (c - 'a');
            if (c >= '0' && c <= '9')
                return KEY_ZERO + (c - '0');
            switch (c)
            {
            case ',': return KEY_COMMA;
            case '.': return KEY_PERIOD;
            case '/': return KEY_SLASH;
            case ';': return KEY_SEMICOLON;
            case '\'': return KEY_APOSTROPHE;
            case '[': return KEY_LEFT_BRACKET;
            case ']': return KEY_RIGHT_BRACKET;
            case '\\': return KEY_BACKSLASH;
            case '-': return KEY_MINUS;
            case '=': return KEY_EQUAL;
            case '`': return KEY_GRAVE;
            default: return 0;
            }
        }
        if (n.size() >= 2 && n[0] == 'f' && std::isdigit(static_cast<unsigned char>(n[1])))
        {
            const int f = std::atoi(n.c_str() + 1);
            if (f >= 1 && f <= 12)
                return KEY_F1 + (f - 1);
        }
        if (n.rfind("keypad ", 0) == 0 && n.size() == 8 && std::isdigit(static_cast<unsigned char>(n[7])))
            return KEY_KP_0 + (n[7] - '0');
        static const std::map<std::string, int> named = {
            {"space", KEY_SPACE}, {"return", KEY_ENTER}, {"enter", KEY_ENTER}, {"tab", KEY_TAB}, {"escape", KEY_ESCAPE},
            {"backspace", KEY_BACKSPACE}, {"delete", KEY_DELETE}, {"insert", KEY_INSERT}, {"home", KEY_HOME}, {"end", KEY_END},
            {"pageup", KEY_PAGE_UP}, {"pagedown", KEY_PAGE_DOWN}, {"up", KEY_UP}, {"down", KEY_DOWN}, {"left", KEY_LEFT},
            {"right", KEY_RIGHT}, {"left shift", KEY_LEFT_SHIFT}, {"right shift", KEY_RIGHT_SHIFT}, {"left ctrl", KEY_LEFT_CONTROL},
            {"right ctrl", KEY_RIGHT_CONTROL}, {"left alt", KEY_LEFT_ALT}, {"right alt", KEY_RIGHT_ALT}, {"capslock", KEY_CAPS_LOCK},
            {"keypad enter", KEY_KP_ENTER}, {"keypad +", KEY_KP_ADD}, {"keypad -", KEY_KP_SUBTRACT}, {"keypad *", KEY_KP_MULTIPLY},
            {"keypad /", KEY_KP_DIVIDE}, {"keypad .", KEY_KP_DECIMAL}};
        const auto it = named.find(n);
        return it == named.end() ? 0 : it->second;
    }

    // Mouse1..Mouse5 in SDL numbering (1 left, 2 middle, 3 right, 4 and 5 side) -> raylib, or -1.
    int mouseButton(const std::string &name)
    {
        if (name.size() != 6 || lower(name).rfind("mouse", 0) != 0)
            return -1;
        switch (name[5])
        {
        case '1': return MOUSE_BUTTON_LEFT;
        case '2': return MOUSE_BUTTON_MIDDLE;
        case '3': return MOUSE_BUTTON_RIGHT;
        case '4': return MOUSE_BUTTON_SIDE;
        case '5': return MOUSE_BUTTON_EXTRA;
        default: return -1;
        }
    }

    int padButton(const std::string &name)
    {
        static const std::map<std::string, int> map = {
            {"a", GAMEPAD_BUTTON_RIGHT_FACE_DOWN}, {"b", GAMEPAD_BUTTON_RIGHT_FACE_RIGHT}, {"x", GAMEPAD_BUTTON_RIGHT_FACE_LEFT},
            {"y", GAMEPAD_BUTTON_RIGHT_FACE_UP}, {"leftshoulder", GAMEPAD_BUTTON_LEFT_TRIGGER_1}, {"rightshoulder", GAMEPAD_BUTTON_RIGHT_TRIGGER_1},
            {"leftstick", GAMEPAD_BUTTON_LEFT_THUMB}, {"rightstick", GAMEPAD_BUTTON_RIGHT_THUMB}, {"start", GAMEPAD_BUTTON_MIDDLE_RIGHT},
            {"back", GAMEPAD_BUTTON_MIDDLE_LEFT}, {"guide", GAMEPAD_BUTTON_MIDDLE}, {"dpup", GAMEPAD_BUTTON_LEFT_FACE_UP},
            {"dpdown", GAMEPAD_BUTTON_LEFT_FACE_DOWN}, {"dpleft", GAMEPAD_BUTTON_LEFT_FACE_LEFT}, {"dpright", GAMEPAD_BUTTON_LEFT_FACE_RIGHT}};
        const auto it = map.find(name);
        return it == map.end() ? -1 : it->second;
    }

    // How far a gamepad binding is pressed (0..1) on one pad.
    float padValue(int pad, const std::string &name)
    {
        if (name.empty())
            return 0.0f;
        if (name == "lefttrigger" || name == "righttrigger")
        {
            const int axis = name == "lefttrigger" ? GAMEPAD_AXIS_LEFT_TRIGGER : GAMEPAD_AXIS_RIGHT_TRIGGER;
            const int button = name == "lefttrigger" ? GAMEPAD_BUTTON_LEFT_TRIGGER_2 : GAMEPAD_BUTTON_RIGHT_TRIGGER_2;
            // Trigger axes rest at -1 and reach +1.
            const float v = (GetGamepadAxisMovement(pad, axis) + 1.0f) * 0.5f;
            return std::max(IsGamepadButtonDown(pad, button) ? 1.0f : 0.0f, v);
        }
        const char last = name.back();
        if (last == '+' || last == '-')
        {
            const std::string axisName = name.substr(0, name.size() - 1);
            int axis = -1;
            if (axisName == "leftx") axis = GAMEPAD_AXIS_LEFT_X;
            else if (axisName == "lefty") axis = GAMEPAD_AXIS_LEFT_Y;
            else if (axisName == "rightx") axis = GAMEPAD_AXIS_RIGHT_X;
            else if (axisName == "righty") axis = GAMEPAD_AXIS_RIGHT_Y;
            if (axis < 0)
                return 0.0f;
            const float v = GetGamepadAxisMovement(pad, axis) * (last == '+' ? 1.0f : -1.0f);
            return v < 0.15f ? 0.0f : std::min(v, 1.0f); // dead zone
        }
        const int button = padButton(name);
        return button >= 0 && IsGamepadButtonDown(pad, button) ? 1.0f : 0.0f;
    }

    float keyValue(const std::string &name)
    {
        if (name.empty())
            return 0.0f;
        if (const int mouse = mouseButton(name); mouse >= 0)
            return IsMouseButtonDown(mouse) ? 1.0f : 0.0f;
        const int key = keyCode(name);
        return key != 0 && IsKeyDown(key) ? 1.0f : 0.0f;
    }

    const std::string &binding(const std::map<std::string, std::string> &configured, const std::map<std::string, std::string> &fallback,
                               bool useConfigured, const char *action)
    {
        static const std::string empty;
        const auto &map = useConfigured ? configured : fallback;
        const auto it = map.find(action);
        return it == map.end() ? empty : it->second;
    }

    uint8_t toByte(float axis)
    {
        axis = std::clamp(axis, -1.0f, 1.0f);
        return static_cast<uint8_t>(std::lround((axis + 1.0f) * 127.5f));
    }
}

void ps2xApplyHostInput(uint16_t &buttons, uint8_t &lx, uint8_t &ly, uint8_t &rx, uint8_t &ry, bool allowAnalog)
{
    if (!IsWindowReady())
        return;
    const PS2HostSettings &host = ps2xHostSettings();
    const bool padConfigured = !host.gamepad.empty();
    const bool keyConfigured = !host.keyboard.empty();

    std::array<int, 4> pads{};
    int padCount = 0;
    for (int i = 0; i < 4; ++i)
        if (IsGamepadAvailable(i))
            pads[padCount++] = i;

    for (const ButtonAction &action : kButtons)
    {
        float v = 0.0f;
        const std::string &padName = binding(host.gamepad, defaultPadBindings(), padConfigured, action.name);
        for (int p = 0; p < padCount; ++p)
            v = std::max(v, padValue(pads[p], padName));
        if (host.mouseKeyboard)
            v = std::max(v, keyValue(binding(host.keyboard, defaultKeyBindings(), keyConfigured, action.name)));
        if (v >= 0.5f)
            buttons = static_cast<uint16_t>(buttons & ~action.mask);
    }

    if (!allowAnalog)
        return;

    float stick[2][2] = {{0.0f, 0.0f}, {0.0f, 0.0f}};
    for (const StickAction &action : kSticks)
    {
        float v = 0.0f;
        const std::string &padName = binding(host.gamepad, defaultPadBindings(), padConfigured, action.name);
        for (int p = 0; p < padCount; ++p)
            v = std::max(v, padValue(pads[p], padName));
        if (host.mouseKeyboard)
            v = std::max(v, keyValue(binding(host.keyboard, defaultKeyBindings(), keyConfigured, action.name)));
        stick[action.stick][action.axis] += v * action.sign;
    }

    // Mouse camera: while the cursor is captured (click into the window), mouse motion drives the right stick.
    if (host.mouseKeyboard && host.mouseCamera)
    {
        if (!IsCursorHidden() && IsWindowFocused() && IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
            (IsWindowFullscreen() || IsWindowState(FLAG_BORDERLESS_WINDOWED_MODE)))
            DisableCursor();
        if (IsCursorHidden() && !IsWindowFocused())
            EnableCursor();
        if (IsCursorHidden())
        {
            const Vector2 delta = GetMouseDelta();
            const float sensitivity = static_cast<float>(std::clamp(host.mouseSensitivity, 0.1, 5.0)) * 0.08f;
            stick[1][0] += delta.x * sensitivity;
            stick[1][1] += delta.y * sensitivity * (host.invertY ? -1.0f : 1.0f);
        }
    }

    if (stick[0][0] != 0.0f || stick[0][1] != 0.0f)
    {
        lx = toByte(stick[0][0]);
        ly = toByte(stick[0][1]);
    }
    if (stick[1][0] != 0.0f || stick[1][1] != 0.0f)
    {
        rx = toByte(stick[1][0]);
        ry = toByte(stick[1][1]);
    }
}
