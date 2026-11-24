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

// Function: sub_002F14A0
// Address: 0x2f14a0 - 0x2f14b8
void sub_002F14A0_0x2f14a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F14A0_0x2f14a0");
#endif

    ctx->pc = 0x2f14a0u;

    // 0x2f14a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f14a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f14a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f14a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f14acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14b0: 0x80cd34c  j           func_334D30
    ctx->pc = 0x2F14B0u;
    ctx->pc = 0x2F14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14B0u;
    // 0x2f14b4: 0x24080022  addiu       $t0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334D30u;
    sub_00334D30_0x334d30(rdram, ctx, runtime); return;
    ctx->pc = 0x2F14B8u;
}
