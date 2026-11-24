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

// Function: sub_0014B3B0
// Address: 0x14b3b0 - 0x14b3cc
void sub_0014B3B0_0x14b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3B0_0x14b3b0");
#endif

    ctx->pc = 0x14b3b0u;

    // 0x14b3b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14b3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3b8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3c0: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x14b3c4: 0x80535dc  j           func_14D770
    ctx->pc = 0x14B3C4u;
    ctx->pc = 0x14B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3C4u;
    // 0x14b3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D770u;
    sub_0014D770_0x14d770(rdram, ctx, runtime); return;
    ctx->pc = 0x14B3CCu;
}
