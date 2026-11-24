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

// Function: sub_003F6DE0
// Address: 0x3f6de0 - 0x3f6df4
void sub_003F6DE0_0x3f6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6DE0_0x3f6de0");
#endif

    ctx->pc = 0x3f6de0u;

    // 0x3f6de0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3f6de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6de4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3f6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6de8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f6de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f6dec: 0x80957a0  j           func_255E80
    ctx->pc = 0x3F6DECu;
    ctx->pc = 0x3F6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6DECu;
    // 0x3f6df0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    sub_00255E80_0x255e80(rdram, ctx, runtime); return;
    ctx->pc = 0x3F6DF4u;
}
