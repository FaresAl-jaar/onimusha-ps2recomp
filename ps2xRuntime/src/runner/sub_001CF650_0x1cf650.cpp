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

// Function: sub_001CF650
// Address: 0x1cf650 - 0x1cf658
void sub_001CF650_0x1cf650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF650_0x1cf650");
#endif

    ctx->pc = 0x1cf650u;

    // 0x1cf650: 0x807404c  j           func_1D0130
    ctx->pc = 0x1CF650u;
    ctx->pc = 0x1CF654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF650u;
    // 0x1cf654: 0x24051a00  addiu       $a1, $zero, 0x1A00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0130u;
    sub_001D0130_0x1d0130(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF658u;
}
