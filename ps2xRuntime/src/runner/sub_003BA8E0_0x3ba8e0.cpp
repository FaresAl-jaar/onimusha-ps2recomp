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

// Function: sub_003BA8E0
// Address: 0x3ba8e0 - 0x3ba8e8
void sub_003BA8E0_0x3ba8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA8E0_0x3ba8e0");
#endif

    ctx->pc = 0x3ba8e0u;

    // 0x3ba8e0: 0x80f1f10  j           func_3C7C40
    ctx->pc = 0x3BA8E0u;
    ctx->pc = 0x3BA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA8E0u;
    // 0x3ba8e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7C40u;
    sub_003C7C40_0x3c7c40(rdram, ctx, runtime); return;
    ctx->pc = 0x3BA8E8u;
}
