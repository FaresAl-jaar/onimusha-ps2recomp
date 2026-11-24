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

// Function: sub_003DE1A0
// Address: 0x3de1a0 - 0x3de1a8
void sub_003DE1A0_0x3de1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE1A0_0x3de1a0");
#endif

    ctx->pc = 0x3de1a0u;

    // 0x3de1a0: 0x80c0844  j           func_302110
    ctx->pc = 0x3DE1A0u;
    ctx->pc = 0x3DE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1A0u;
    // 0x3de1a4: 0x8c850550  lw          $a1, 0x550($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    sub_00302110_0x302110(rdram, ctx, runtime); return;
    ctx->pc = 0x3DE1A8u;
}
