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

// Function: sub_002CB2C0
// Address: 0x2cb2c0 - 0x2cb2dc
void sub_002CB2C0_0x2cb2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB2C0_0x2cb2c0");
#endif

    ctx->pc = 0x2cb2c0u;

    // 0x2cb2c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cb2c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cb2c8: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x2cb2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x2cb2cc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2cb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cb2d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cb2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2D4u;
        // 0x2cb2d8: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB2DCu;
}
