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

// Function: sub_0026B270
// Address: 0x26b270 - 0x26b27c
void sub_0026B270_0x26b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B270_0x26b270");
#endif

    ctx->pc = 0x26b270u;

    // 0x26b270: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x26b274: 0x809acbc  j           func_26B2F0
    ctx->pc = 0x26B274u;
    ctx->pc = 0x26B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B274u;
    // 0x26b278: 0x248404e0  addiu       $a0, $a0, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B2F0u;
    sub_0026B2F0_0x26b2f0(rdram, ctx, runtime); return;
    ctx->pc = 0x26B27Cu;
}
