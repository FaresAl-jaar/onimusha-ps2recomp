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

// Function: sub_003BF7F0
// Address: 0x3bf7f0 - 0x3bf80c
void sub_003BF7F0_0x3bf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7F0_0x3bf7f0");
#endif

    ctx->pc = 0x3bf7f0u;

    // 0x3bf7f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3bf7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bf7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7f8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3bf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3bf7fc: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x3bf7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3bf800: 0x2484fec0  addiu       $a0, $a0, -0x140
    ctx->pc = 0x3bf800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
    // 0x3bf804: 0x80ef53c  j           func_3BD4F0
    ctx->pc = 0x3BF804u;
    ctx->pc = 0x3BF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF804u;
    // 0x3bf808: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD4F0u;
    sub_003BD4F0_0x3bd4f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3BF80Cu;
}
