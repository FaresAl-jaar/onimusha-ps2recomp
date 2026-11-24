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

// Function: sub_001D0F80
// Address: 0x1d0f80 - 0x1d0f8c
void sub_001D0F80_0x1d0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F80_0x1d0f80");
#endif

    ctx->pc = 0x1d0f80u;

    // 0x1d0f80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0f84: 0x807436c  j           func_1D0DB0
    ctx->pc = 0x1D0F84u;
    ctx->pc = 0x1D0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F84u;
    // 0x1d0f88: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DB0u;
    sub_001D0DB0_0x1d0db0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0F8Cu;
}
