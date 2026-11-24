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

// Function: sub_002F1B90
// Address: 0x2f1b90 - 0x2f1bbc
void sub_002F1B90_0x2f1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B90_0x2f1b90");
#endif

    ctx->pc = 0x2f1b90u;

    // 0x2f1b90: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b94: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f1b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ba0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ba4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2f1ba4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ba8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2f1ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f1bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bb4: 0x80dd948  j           func_376520
    ctx->pc = 0x2F1BB4u;
    ctx->pc = 0x2F1BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BB4u;
    // 0x2f1bb8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376520u;
    sub_00376520_0x376520(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1BBCu;
}
