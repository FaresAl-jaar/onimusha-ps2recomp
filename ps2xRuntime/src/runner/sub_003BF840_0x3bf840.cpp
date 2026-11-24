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

// Function: sub_003BF840
// Address: 0x3bf840 - 0x3bf85c
void sub_003BF840_0x3bf840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF840_0x3bf840");
#endif

    ctx->pc = 0x3bf840u;

    // 0x3bf840: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3bf840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf844: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bf844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf848: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3bf848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3bf84c: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x3bf84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3bf850: 0x2484fec0  addiu       $a0, $a0, -0x140
    ctx->pc = 0x3bf850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
    // 0x3bf854: 0x80ef53c  j           func_3BD4F0
    ctx->pc = 0x3BF854u;
    ctx->pc = 0x3BF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF854u;
    // 0x3bf858: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD4F0u;
    sub_003BD4F0_0x3bd4f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3BF85Cu;
}
