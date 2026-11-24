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

// Function: sub_002F1220
// Address: 0x2f1220 - 0x2f123c
void sub_002F1220_0x2f1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1220_0x2f1220");
#endif

    ctx->pc = 0x2f1220u;

    // 0x2f1220: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1224: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f1224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1228: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f122c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f122cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1234: 0x80d5674  j           func_3559D0
    ctx->pc = 0x2F1234u;
    ctx->pc = 0x2F1238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1234u;
    // 0x2f1238: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3559D0u;
    sub_003559D0_0x3559d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F123Cu;
}
