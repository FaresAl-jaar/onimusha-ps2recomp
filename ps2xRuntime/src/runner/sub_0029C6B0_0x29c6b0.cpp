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

// Function: sub_0029C6B0
// Address: 0x29c6b0 - 0x29c6b8
void sub_0029C6B0_0x29c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C6B0_0x29c6b0");
#endif

    ctx->pc = 0x29c6b0u;

    // 0x29c6b0: 0x809d700  j           func_275C00
    ctx->pc = 0x29C6B0u;
    ctx->pc = 0x29C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6B0u;
    // 0x29c6b4: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275C00u;
    sub_00275C00_0x275c00(rdram, ctx, runtime); return;
    ctx->pc = 0x29C6B8u;
}
