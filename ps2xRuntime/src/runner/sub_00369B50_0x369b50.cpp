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

// Function: sub_00369B50
// Address: 0x369b50 - 0x369b60
void sub_00369B50_0x369b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369B50_0x369b50");
#endif

    ctx->pc = 0x369b50u;

    // 0x369b50: 0xaf808be4  sw          $zero, -0x741C($gp)
    ctx->pc = 0x369b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 0));
    // 0x369b54: 0xaf808be8  sw          $zero, -0x7418($gp)
    ctx->pc = 0x369b54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 0));
    // 0x369b58: 0x3e00008  jr          $ra
    ctx->pc = 0x369B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B58u;
        // 0x369b5c: 0xaf808bec  sw          $zero, -0x7414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369B60u;
}
