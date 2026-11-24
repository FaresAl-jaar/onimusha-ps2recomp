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

// Function: sub_002DE2D0
// Address: 0x2de2d0 - 0x2de2e4
void sub_002DE2D0_0x2de2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2D0_0x2de2d0");
#endif

    ctx->pc = 0x2de2d0u;

    // 0x2de2d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2de2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de2d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2de2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2de2d8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2de2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2de2dc: 0x80b78ec  j           func_2DE3B0
    ctx->pc = 0x2DE2DCu;
    ctx->pc = 0x2DE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2DCu;
    // 0x2de2e0: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE3B0u;
    sub_002DE3B0_0x2de3b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE2E4u;
}
