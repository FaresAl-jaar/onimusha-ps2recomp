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

// Function: sub_001D15B0
// Address: 0x1d15b0 - 0x1d15c0
void sub_001D15B0_0x1d15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D15B0_0x1d15b0");
#endif

    ctx->pc = 0x1d15b0u;

    // 0x1d15b0: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x1d15b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d15b4: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x1d15b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d15b8: 0x804cfd8  j           func_133F60
    ctx->pc = 0x1D15B8u;
    ctx->pc = 0x1D15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15B8u;
    // 0x1d15bc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    sub_00133F60_0x133f60(rdram, ctx, runtime); return;
    ctx->pc = 0x1D15C0u;
}
