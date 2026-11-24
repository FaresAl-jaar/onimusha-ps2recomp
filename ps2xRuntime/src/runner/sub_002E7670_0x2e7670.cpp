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

// Function: sub_002E7670
// Address: 0x2e7670 - 0x2e767c
void sub_002E7670_0x2e7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7670_0x2e7670");
#endif

    ctx->pc = 0x2e7670u;

    // 0x2e7670: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e7670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e7674: 0x80b9e0c  j           func_2E7830
    ctx->pc = 0x2E7674u;
    ctx->pc = 0x2E7678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7674u;
    // 0x2e7678: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7830u;
    sub_002E7830_0x2e7830(rdram, ctx, runtime); return;
    ctx->pc = 0x2E767Cu;
}
