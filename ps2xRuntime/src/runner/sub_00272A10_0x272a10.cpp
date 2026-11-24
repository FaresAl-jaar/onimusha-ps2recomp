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

// Function: sub_00272A10
// Address: 0x272a10 - 0x272a28
void sub_00272A10_0x272a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272A10_0x272a10");
#endif

    ctx->pc = 0x272a10u;

    // 0x272a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272a14: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x272a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x272a18: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x272a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x272a1c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x272a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272a20: 0x80957a0  j           func_255E80
    ctx->pc = 0x272A20u;
    ctx->pc = 0x272A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A20u;
    // 0x272a24: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    sub_00255E80_0x255e80(rdram, ctx, runtime); return;
    ctx->pc = 0x272A28u;
}
