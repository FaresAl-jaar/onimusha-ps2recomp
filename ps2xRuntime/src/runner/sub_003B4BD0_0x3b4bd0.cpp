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

// Function: sub_003B4BD0
// Address: 0x3b4bd0 - 0x3b4bdc
void sub_003B4BD0_0x3b4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4BD0_0x3b4bd0");
#endif

    ctx->pc = 0x3b4bd0u;

    // 0x3b4bd0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3b4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3b4bd4: 0x80ed32c  j           func_3B4CB0
    ctx->pc = 0x3B4BD4u;
    ctx->pc = 0x3B4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BD4u;
    // 0x3b4bd8: 0x2484fe90  addiu       $a0, $a0, -0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4CB0u;
    sub_003B4CB0_0x3b4cb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3B4BDCu;
}
