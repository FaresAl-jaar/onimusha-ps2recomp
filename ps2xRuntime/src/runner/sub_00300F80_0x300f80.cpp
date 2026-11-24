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

// Function: sub_00300F80
// Address: 0x300f80 - 0x300f88
void sub_00300F80_0x300f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300F80_0x300f80");
#endif

    ctx->pc = 0x300f80u;

    // 0x300f80: 0x80c0844  j           func_302110
    ctx->pc = 0x300F80u;
    ctx->pc = 0x300F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F80u;
    // 0x300f84: 0x8c850550  lw          $a1, 0x550($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    sub_00302110_0x302110(rdram, ctx, runtime); return;
    ctx->pc = 0x300F88u;
}
