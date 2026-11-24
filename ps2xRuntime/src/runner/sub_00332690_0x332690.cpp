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

// Function: sub_00332690
// Address: 0x332690 - 0x3326a4
void sub_00332690_0x332690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332690_0x332690");
#endif

    ctx->pc = 0x332690u;

    // 0x332690: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x332690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x332694: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x332694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x332698: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x332698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33269c: 0x80cc9ac  j           func_3326B0
    ctx->pc = 0x33269Cu;
    ctx->pc = 0x3326A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33269Cu;
    // 0x3326a0: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326B0u;
    sub_003326B0_0x3326b0(rdram, ctx, runtime); return;
    ctx->pc = 0x3326A4u;
}
