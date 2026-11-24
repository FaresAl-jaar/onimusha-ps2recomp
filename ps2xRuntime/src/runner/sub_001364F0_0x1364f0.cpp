#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// High level replacement for the game's sceVibGetProfile (see Kernel/Stubs/Pad.cpp).
namespace ps2_stubs { void sceVibGetProfile(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime); }

void sub_001364F0_0x1364f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceVibGetProfile(rdram, ctx, runtime);
}
