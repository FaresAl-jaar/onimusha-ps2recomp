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

// Function: sub_002839B0
// Address: 0x2839b0 - 0x2839b8
void sub_002839B0_0x2839b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002839B0_0x2839b0");
#endif

    ctx->pc = 0x2839b0u;

    // 0x2839b0: 0x80a0b5c  j           func_282D70
    ctx->pc = 0x2839B0u;
    ctx->pc = 0x2839B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2839B0u;
    // 0x2839b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282D70u;
    sub_00282D70_0x282d70(rdram, ctx, runtime); return;
    ctx->pc = 0x2839B8u;
}
