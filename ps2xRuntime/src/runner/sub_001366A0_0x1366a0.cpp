#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// High level replacement for the game's scePad2End (see Kernel/Stubs/Pad.cpp).
namespace ps2_stubs { void scePad2End(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime); }

void sub_001366A0_0x1366a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::scePad2End(rdram, ctx, runtime);
}
