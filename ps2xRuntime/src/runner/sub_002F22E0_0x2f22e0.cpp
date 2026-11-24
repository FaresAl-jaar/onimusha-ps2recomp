#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F22E0
// Address: 0x2f22e0 - 0x2f22f8
void sub_002F22E0_0x2f22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F22E0_0x2f22e0");
#endif

    ctx->pc = 0x2f22e0u;

    // 0x2f22e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f22e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f22e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f22e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f22ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22f0: 0x80f5358  j           func_3D4D60
    ctx->pc = 0x2F22F0u;
    ctx->pc = 0x2F22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22F0u;
    // 0x2f22f4: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4D60u;
    sub_003D4D60_0x3d4d60(rdram, ctx, runtime); return;
    ctx->pc = 0x2F22F8u;
}
