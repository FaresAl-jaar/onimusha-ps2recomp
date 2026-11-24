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

// Function: sub_001324A0
// Address: 0x1324a0 - 0x1324a8
void sub_001324A0_0x1324a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001324A0_0x1324a0");
#endif

    ctx->pc = 0x1324a0u;

    // 0x1324a0: 0x8043800  j           func_10E000
    ctx->pc = 0x1324A0u;
    ctx->pc = 0x1324A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1324A0u;
    // 0x1324a4: 0x8c84019c  lw          $a0, 0x19C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x1324A8u;
}
