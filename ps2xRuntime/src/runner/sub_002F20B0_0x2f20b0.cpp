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

// Function: sub_002F20B0
// Address: 0x2f20b0 - 0x2f20d0
void sub_002F20B0_0x2f20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F20B0_0x2f20b0");
#endif

    ctx->pc = 0x2f20b0u;

    // 0x2f20b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f20b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f20b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f20b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f20bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f20c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f20c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20c8: 0x80f3aa8  j           func_3CEAA0
    ctx->pc = 0x2F20C8u;
    ctx->pc = 0x2F20CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20C8u;
    // 0x2f20cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEAA0u;
    sub_003CEAA0_0x3ceaa0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F20D0u;
}
