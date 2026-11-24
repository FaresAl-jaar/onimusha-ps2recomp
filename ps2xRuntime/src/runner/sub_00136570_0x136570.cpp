#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// High level replacement for the game's sceVibSetActParam (see Kernel/Stubs/Pad.cpp).
namespace ps2_stubs { void sceVibSetActParam(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime); }

void sub_00136570_0x136570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::sceVibSetActParam(rdram, ctx, runtime);
}
