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

// Function: sub_002357B8
// Address: 0x2357b8 - 0x2357d0
void sub_002357B8_0x2357b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357B8_0x2357b8");
#endif

    ctx->pc = 0x2357b8u;

    // 0x2357b8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2357bc: 0x24637558  addiu       $v1, $v1, 0x7558
    ctx->pc = 0x2357bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30040));
    // 0x2357c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2357c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C7558u));
    // 0x2357c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2357c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2357C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2357CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357C8u;
        // 0x2357cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2357C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2357D0u;
}
