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

// Function: sub_002F18E0
// Address: 0x2f18e0 - 0x2f18f0
void sub_002F18E0_0x2f18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F18E0_0x2f18e0");
#endif

    ctx->pc = 0x2f18e0u;

    // 0x2f18e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f18e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f18e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18e8: 0x80da44c  j           func_369130
    ctx->pc = 0x2F18E8u;
    ctx->pc = 0x2F18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18E8u;
    // 0x2f18ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369130u;
    sub_00369130_0x369130(rdram, ctx, runtime); return;
    ctx->pc = 0x2F18F0u;
}
