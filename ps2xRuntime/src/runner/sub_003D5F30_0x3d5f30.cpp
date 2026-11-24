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

// Function: sub_003D5F30
// Address: 0x3d5f30 - 0x3d5f38
void sub_003D5F30_0x3d5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F30_0x3d5f30");
#endif

    ctx->pc = 0x3d5f30u;

    // 0x3d5f30: 0x80f57b8  j           func_3D5EE0
    ctx->pc = 0x3D5F30u;
    ctx->pc = 0x3D5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5F30u;
    // 0x3d5f34: 0x8c852bb4  lw          $a1, 0x2BB4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5EE0u;
    sub_003D5EE0_0x3d5ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x3D5F38u;
}
