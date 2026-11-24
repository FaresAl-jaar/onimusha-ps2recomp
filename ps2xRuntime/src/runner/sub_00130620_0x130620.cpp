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

// Function: sub_00130620
// Address: 0x130620 - 0x130630
void sub_00130620_0x130620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130620_0x130620");
#endif

    ctx->pc = 0x130620u;

    // 0x130620: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130624: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x130628: 0x3e00008  jr          $ra
    ctx->pc = 0x130628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130628u;
        // 0x13062c: 0xa0208070  sb          $zero, -0x7F90($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294934640), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130630u;
}
