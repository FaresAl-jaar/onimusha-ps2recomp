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

// Function: sub_002F22C0
// Address: 0x2f22c0 - 0x2f22dc
void sub_002F22C0_0x2f22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F22C0_0x2f22c0");
#endif

    ctx->pc = 0x2f22c0u;

    // 0x2f22c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f22c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f22c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f22c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f22ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f22d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d4: 0x80f519c  j           func_3D4670
    ctx->pc = 0x2F22D4u;
    ctx->pc = 0x2F22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22D4u;
    // 0x2f22d8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4670u;
    sub_003D4670_0x3d4670(rdram, ctx, runtime); return;
    ctx->pc = 0x2F22DCu;
}
