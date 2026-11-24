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

// Function: sub_003D2060
// Address: 0x3d2060 - 0x3d2068
void sub_003D2060_0x3d2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2060_0x3d2060");
#endif

    ctx->pc = 0x3d2060u;

    // 0x3d2060: 0x80c0844  j           func_302110
    ctx->pc = 0x3D2060u;
    ctx->pc = 0x3D2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2060u;
    // 0x3d2064: 0x8c8505a0  lw          $a1, 0x5A0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    sub_00302110_0x302110(rdram, ctx, runtime); return;
    ctx->pc = 0x3D2068u;
}
