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

// Function: sub_003398F0
// Address: 0x3398f0 - 0x3398fc
void sub_003398F0_0x3398f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003398F0_0x3398f0");
#endif

    ctx->pc = 0x3398f0u;

    // 0x3398f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3398f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398f4: 0x80ce590  j           func_339640
    ctx->pc = 0x3398F4u;
    ctx->pc = 0x3398F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398F4u;
    // 0x3398f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    sub_00339640_0x339640(rdram, ctx, runtime); return;
    ctx->pc = 0x3398FCu;
}
