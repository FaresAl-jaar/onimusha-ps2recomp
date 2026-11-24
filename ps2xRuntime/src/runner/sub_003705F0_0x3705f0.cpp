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

// Function: sub_003705F0
// Address: 0x3705f0 - 0x3705fc
void sub_003705F0_0x3705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705F0_0x3705f0");
#endif

    ctx->pc = 0x3705f0u;

    // 0x3705f0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3705f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3705f4: 0x80cc01c  j           func_330070
    ctx->pc = 0x3705F4u;
    ctx->pc = 0x3705F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705F4u;
    // 0x3705f8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    sub_00330070_0x330070(rdram, ctx, runtime); return;
    ctx->pc = 0x3705FCu;
}
