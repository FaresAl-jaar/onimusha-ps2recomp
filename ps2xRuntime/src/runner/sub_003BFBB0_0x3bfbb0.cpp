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

// Function: sub_003BFBB0
// Address: 0x3bfbb0 - 0x3bfbbc
void sub_003BFBB0_0x3bfbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFBB0_0x3bfbb0");
#endif

    ctx->pc = 0x3bfbb0u;

    // 0x3bfbb0: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x3bfbb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3bfbb4: 0x80efe48  j           func_3BF920
    ctx->pc = 0x3BFBB4u;
    ctx->pc = 0x3BFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFBB4u;
    // 0x3bfbb8: 0x27848c94  addiu       $a0, $gp, -0x736C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF920u;
    sub_003BF920_0x3bf920(rdram, ctx, runtime); return;
    ctx->pc = 0x3BFBBCu;
}
