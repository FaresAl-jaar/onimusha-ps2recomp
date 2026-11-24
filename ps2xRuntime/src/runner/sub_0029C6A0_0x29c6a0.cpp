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

// Function: sub_0029C6A0
// Address: 0x29c6a0 - 0x29c6a8
void sub_0029C6A0_0x29c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C6A0_0x29c6a0");
#endif

    ctx->pc = 0x29c6a0u;

    // 0x29c6a0: 0x809d6d8  j           func_275B60
    ctx->pc = 0x29C6A0u;
    ctx->pc = 0x29C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6A0u;
    // 0x29c6a4: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275B60u;
    sub_00275B60_0x275b60(rdram, ctx, runtime); return;
    ctx->pc = 0x29C6A8u;
}
