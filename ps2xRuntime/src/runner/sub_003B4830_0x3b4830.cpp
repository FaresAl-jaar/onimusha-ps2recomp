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

// Function: sub_003B4830
// Address: 0x3b4830 - 0x3b483c
void sub_003B4830_0x3b4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4830_0x3b4830");
#endif

    ctx->pc = 0x3b4830u;

    // 0x3b4830: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4834: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4834u;
        // 0x3b4838: 0xac20fe74  sw          $zero, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B483Cu;
}
