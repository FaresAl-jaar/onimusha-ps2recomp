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

// Function: sub_0026F3C0
// Address: 0x26f3c0 - 0x26f3cc
void sub_0026F3C0_0x26f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F3C0_0x26f3c0");
#endif

    ctx->pc = 0x26f3c0u;

    // 0x26f3c0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x26f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x26f3c4: 0x809bcf8  j           func_26F3E0
    ctx->pc = 0x26F3C4u;
    ctx->pc = 0x26F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3C4u;
    // 0x26f3c8: 0x248405d0  addiu       $a0, $a0, 0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F3E0u;
    sub_0026F3E0_0x26f3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x26F3CCu;
}
