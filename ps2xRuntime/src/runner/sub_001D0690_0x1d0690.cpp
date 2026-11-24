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

// Function: sub_001D0690
// Address: 0x1d0690 - 0x1d069c
void sub_001D0690_0x1d0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0690_0x1d0690");
#endif

    ctx->pc = 0x1d0690u;

    // 0x1d0690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0694: 0x8076c6c  j           func_1DB1B0
    ctx->pc = 0x1D0694u;
    ctx->pc = 0x1D0698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0694u;
    // 0x1d0698: 0x8f8487f0  lw          $a0, -0x7810($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1B0u;
    sub_001DB1B0_0x1db1b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D069Cu;
}
