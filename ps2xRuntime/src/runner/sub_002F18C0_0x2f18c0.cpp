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

// Function: sub_002F18C0
// Address: 0x2f18c0 - 0x2f18e0
void sub_002F18C0_0x2f18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F18C0_0x2f18c0");
#endif

    ctx->pc = 0x2f18c0u;

    // 0x2f18c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f18c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f18c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f18c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f18ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f18d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18d4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f18d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f18d8: 0x80d8a90  j           func_362A40
    ctx->pc = 0x2F18D8u;
    ctx->pc = 0x2F18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18D8u;
    // 0x2f18dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362A40u;
    sub_00362A40_0x362a40(rdram, ctx, runtime); return;
    ctx->pc = 0x2F18E0u;
}
