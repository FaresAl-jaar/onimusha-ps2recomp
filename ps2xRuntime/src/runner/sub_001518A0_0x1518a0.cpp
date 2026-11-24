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

// Function: sub_001518A0
// Address: 0x1518a0 - 0x1518a8
void sub_001518A0_0x1518a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001518A0_0x1518a0");
#endif

    ctx->pc = 0x1518a0u;

    // 0x1518a0: 0x8054638  j           func_1518E0
    ctx->pc = 0x1518A0u;
    ctx->pc = 0x1518A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518A0u;
    // 0x1518a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518E0u;
    sub_001518E0_0x1518e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1518A8u;
}
