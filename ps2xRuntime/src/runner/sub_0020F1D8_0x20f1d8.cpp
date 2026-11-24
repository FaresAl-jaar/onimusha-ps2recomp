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

// Function: sub_0020F1D8
// Address: 0x20f1d8 - 0x20f1f8
void sub_0020F1D8_0x20f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F1D8_0x20f1d8");
#endif

    ctx->pc = 0x20f1d8u;

    // 0x20f1d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f1dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x20f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x20f1e0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x20f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x20f1e4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x20f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x20f1e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x20f1ec: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F0u;
        // 0x20f1f4: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F1F8u;
}
