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

// Function: sub_0033EB60
// Address: 0x33eb60 - 0x33eb78
void sub_0033EB60_0x33eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EB60_0x33eb60");
#endif

    ctx->pc = 0x33eb60u;

    // 0x33eb60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33eb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb64: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x33eb64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33eb68: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x33eb68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x33eb6c: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x33eb6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x33eb70: 0x80c8444  j           func_321110
    ctx->pc = 0x33EB70u;
    ctx->pc = 0x33EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB70u;
    // 0x33eb74: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321110u;
    sub_00321110_0x321110(rdram, ctx, runtime); return;
    ctx->pc = 0x33EB78u;
}
