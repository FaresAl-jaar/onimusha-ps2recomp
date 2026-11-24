# Onimusha: Dawn of Dreams PC launcher

A standalone x64 Windows launcher for the native port. Keep it in a user-writable game folder. On first start it creates settings.json and saves/. **Play** saves the current settings and starts Onimusha.exe in that folder with the absolute settings path. Both disc paths may be configured before the game executable is available.

## Build and test

Use Visual Studio 2022 with Desktop development with C++, a Windows SDK, and CMake 3.24 or later. Run these commands from the launcher source directory.

```powershell
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
ctest --test-dir build -C Release --output-on-failure
.\build\OnimushaPC\OnimushaLauncher.exe
```

FetchContent uses the SHA-256-verified SDL2, Dear ImGui, and nlohmann/json source archives in vendor/. Keep these archives for offline builds. If an archive is removed, CMake can fetch that pinned release at configure time. The application uses static libraries and a static MSVC runtime. It uses the icon in branding/onimusha.ico for its executable, window, and header.

```text
OnimushaPC/
  OnimushaLauncher.exe
  Onimusha.exe           supplied by the native game build
  settings.json
  saves/
```

## Settings contract

The launcher reads and writes UTF-8 JSON. Save replaces the file atomically. Reset changes the values in the window until Save or Play. A malformed or incompatible file is copied byte-for-byte to settings.json.bak before defaults are written. Read or write failures are reported.

```json
{
  "audio": {
    "device": "default",
    "effects": 100,
    "master": 100,
    "music": 100,
    "voice": 100
  },
  "display": {
    "fps_limit": 60,
    "height": 0,
    "mode": "fullscreen",
    "monitor": 0,
    "vsync": true,
    "width": 0
  },
  "game": {
    "disc1_path": "",
    "disc2_path": ""
  },
  "graphics": {
    "aspect_ratio": "auto",
    "deinterlace": true,
    "fxaa": false,
    "hud_fix": true,
    "resolution_scale": 3,
    "texture_filter": "bilinear"
  },
  "input": {
    "bindings": {
      "gamepad": {
        "circle": "b",
        "cross": "a",
        "dpad_down": "dpdown",
        "dpad_left": "dpleft",
        "dpad_right": "dpright",
        "dpad_up": "dpup",
        "l1": "leftshoulder",
        "l2": "lefttrigger",
        "l3": "leftstick",
        "lstick_down": "lefty+",
        "lstick_left": "leftx-",
        "lstick_right": "leftx+",
        "lstick_up": "lefty-",
        "r1": "rightshoulder",
        "r2": "righttrigger",
        "r3": "rightstick",
        "rstick_down": "righty+",
        "rstick_left": "rightx-",
        "rstick_right": "rightx+",
        "rstick_up": "righty-",
        "select": "back",
        "square": "x",
        "start": "start",
        "triangle": "y"
      },
      "keyboard": {
        "circle": "E",
        "cross": "Space",
        "dpad_down": "Down",
        "dpad_left": "Left",
        "dpad_right": "Right",
        "dpad_up": "Up",
        "l1": "Q",
        "l2": "Left Shift",
        "l3": "",
        "lstick_down": "S",
        "lstick_left": "A",
        "lstick_right": "D",
        "lstick_up": "W",
        "r1": "R",
        "r2": "Left Ctrl",
        "r3": "",
        "rstick_down": "",
        "rstick_left": "",
        "rstick_right": "",
        "rstick_up": "",
        "select": "Tab",
        "square": "Mouse1",
        "start": "Return",
        "triangle": "Mouse3"
      }
    },
    "controller_type": "auto",
    "invert_y": false,
    "mouse_camera": true,
    "mouse_keyboard": true,
    "mouse_sensitivity": 1.0
  },
  "launcher": {
    "close_on_launch": true
  },
  "version": 1
}
```

- Monitor indices are zero-based. Width and height both zero select that monitor's desktop resolution. Modes are `fullscreen`, `borderless`, and `windowed`. Frame limits are 30, 60, 120, 144, or 0 for unlimited.
- Resolution scale is an integer from 1 through 8 applied to 640 × 448. Aspect choices are `auto`, `4:3`, `16:9`, `21:9`, and `32:9`. Auto uses the selected output dimensions. Filtering is `nearest` or `bilinear`.
- Audio volumes are integers from 0 through 100. Output is `default` or an SDL playback device name.
- Controller types are `auto`, `Xbox`, and `PlayStation`. Changing the type changes the button captions. Keyboard values use SDL_GetKeyName. Mouse1 through Mouse5 use SDL numbering, including Mouse2 for middle and Mouse3 for right.
- Gamepad buttons use SDL names. Triggers are `lefttrigger` and `righttrigger`. Stick directions append a sign to an SDL axis name, e.g. `leftx-` and `righty+`. Negative Y means up. An empty string leaves an action unbound. Mouse motion drives the right stick through `mouse_camera`; sensitivity ranges from 0.1 to 5.0.
- The controls table shows duplicate bindings in red with **(!)**. Escape cancels listening. Right-click an idle binding to clear it.
- Disc validation checks the requested 4,695,425,024-byte ISO size or the disc-specific executable at the extracted root. An ISO size match alone cannot distinguish Disc 1 from Disc 2.
