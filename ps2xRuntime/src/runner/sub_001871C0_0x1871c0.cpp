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

// Function: sub_001871C0
// Address: 0x1871c0 - 0x1871d0
void sub_001871C0_0x1871c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001871C0_0x1871c0");
#endif

    ctx->pc = 0x1871c0u;

    // 0x1871c0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1871c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1871c8: 0x805e480  j           func_179200
    ctx->pc = 0x1871C8u;
    ctx->pc = 0x1871CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871C8u;
    // 0x1871cc: 0x8c440420  lw          $a0, 0x420($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    sub_00179200_0x179200(rdram, ctx, runtime); return;
    ctx->pc = 0x1871D0u;
}
