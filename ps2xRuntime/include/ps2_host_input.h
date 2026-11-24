#pragma once

#include <cstdint>

// Adds the host's gamepads, keyboard and mouse to a PS2 pad state (buttons active low, sticks 0..255),
// with the bindings from the launcher settings.
void ps2xApplyHostInput(uint16_t &buttons, uint8_t &lx, uint8_t &ly, uint8_t &rx, uint8_t &ry, bool allowAnalog);
