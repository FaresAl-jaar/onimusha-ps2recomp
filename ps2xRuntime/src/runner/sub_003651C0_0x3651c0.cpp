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

// Function: sub_003651C0
// Address: 0x3651c0 - 0x3651d8
void sub_003651C0_0x3651c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003651C0_0x3651c0");
#endif

    ctx->pc = 0x3651c0u;

    // 0x3651c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3651c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3651c4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3651c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3651c8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3651c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3651cc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3651ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3651d0: 0x80957a0  j           func_255E80
    ctx->pc = 0x3651D0u;
    ctx->pc = 0x3651D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3651D0u;
    // 0x3651d4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    sub_00255E80_0x255e80(rdram, ctx, runtime); return;
    ctx->pc = 0x3651D8u;
}
