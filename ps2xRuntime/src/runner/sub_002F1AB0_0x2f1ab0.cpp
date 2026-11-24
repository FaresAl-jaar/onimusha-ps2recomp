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

// Function: sub_002F1AB0
// Address: 0x2f1ab0 - 0x2f1ac8
void sub_002F1AB0_0x2f1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1AB0_0x2f1ab0");
#endif

    ctx->pc = 0x2f1ab0u;

    // 0x2f1ab0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ab4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1abc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ac0: 0x80c8e68  j           func_3239A0
    ctx->pc = 0x2F1AC0u;
    ctx->pc = 0x2F1AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AC0u;
    // 0x2f1ac4: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    sub_003239A0_0x3239a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1AC8u;
}
