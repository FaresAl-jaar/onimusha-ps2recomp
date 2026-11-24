#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// High level replacement for the game's scePad2GetButtonProfile (see Kernel/Stubs/Pad.cpp).
namespace ps2_stubs { void scePad2GetButtonProfile(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime); }

void sub_00136940_0x136940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePad2GetButtonProfile(rdram, ctx, runtime);
}
