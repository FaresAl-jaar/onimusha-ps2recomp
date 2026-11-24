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

// Function: sub_003D7B00
// Address: 0x3d7b00 - 0x3d7b08
void sub_003D7B00_0x3d7b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7B00_0x3d7b00");
#endif

    ctx->pc = 0x3d7b00u;

    // 0x3d7b00: 0x80c0860  j           func_302180
    ctx->pc = 0x3D7B00u;
    ctx->pc = 0x3D7B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B00u;
    // 0x3d7b04: 0x8c842b20  lw          $a0, 0x2B20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    sub_00302180_0x302180(rdram, ctx, runtime); return;
    ctx->pc = 0x3D7B08u;
}
