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

// Function: sub_003CD480
// Address: 0x3cd480 - 0x3cd48c
void sub_003CD480_0x3cd480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD480_0x3cd480");
#endif

    ctx->pc = 0x3cd480u;

    // 0x3cd480: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cd480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cd484: 0x80cc01c  j           func_330070
    ctx->pc = 0x3CD484u;
    ctx->pc = 0x3CD488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD484u;
    // 0x3cd488: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    sub_00330070_0x330070(rdram, ctx, runtime); return;
    ctx->pc = 0x3CD48Cu;
}
