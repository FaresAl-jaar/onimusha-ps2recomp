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

// Function: sub_00248738
// Address: 0x248738 - 0x248744
void sub_00248738_0x248738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248738_0x248738");
#endif

    ctx->pc = 0x248738u;

    // 0x248738: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24873c: 0x3e00008  jr          $ra
    ctx->pc = 0x24873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24873Cu;
        // 0x248740: 0xac440b58  sw          $a0, 0xB58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248744u;
}
