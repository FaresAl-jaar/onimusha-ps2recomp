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

// Function: sub_002F1CD0
// Address: 0x2f1cd0 - 0x2f1cec
void sub_002F1CD0_0x2f1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CD0_0x2f1cd0");
#endif

    ctx->pc = 0x2f1cd0u;

    // 0x2f1cd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cd4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ce4: 0x80e3370  j           func_38CDC0
    ctx->pc = 0x2F1CE4u;
    ctx->pc = 0x2F1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CE4u;
    // 0x2f1ce8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CDC0u;
    sub_0038CDC0_0x38cdc0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1CECu;
}
