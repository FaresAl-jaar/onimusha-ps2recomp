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

// Function: sub_002F1E50
// Address: 0x2f1e50 - 0x2f1e74
void sub_002F1E50_0x2f1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E50_0x2f1e50");
#endif

    ctx->pc = 0x2f1e50u;

    // 0x2f1e50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e54: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e5c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f1e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e60: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e68: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1e68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e6c: 0x80ebe00  j           func_3AF800
    ctx->pc = 0x2F1E6Cu;
    ctx->pc = 0x2F1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E6Cu;
    // 0x2f1e70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF800u;
    sub_003AF800_0x3af800(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1E74u;
}
