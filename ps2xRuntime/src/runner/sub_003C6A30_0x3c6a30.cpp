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

// Function: sub_003C6A30
// Address: 0x3c6a30 - 0x3c6a40
void sub_003C6A30_0x3c6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6A30_0x3c6a30");
#endif

    ctx->pc = 0x3c6a30u;

    // 0x3c6a30: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3c6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3c6a34: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x3c6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3c6a38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6A38u;
        // 0x3c6a3c: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6A40u;
}
