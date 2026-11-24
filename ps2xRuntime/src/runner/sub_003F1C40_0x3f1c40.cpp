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

// Function: sub_003F1C40
// Address: 0x3f1c40 - 0x3f1c48
void sub_003F1C40_0x3f1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1C40_0x3f1c40");
#endif

    ctx->pc = 0x3f1c40u;

    // 0x3f1c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1C40u;
        // 0x3f1c44: 0xa0800044  sb          $zero, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1C48u;
}
