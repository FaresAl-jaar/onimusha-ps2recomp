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

// Function: sub_003900E0
// Address: 0x3900e0 - 0x3900f4
void sub_003900E0_0x3900e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003900E0_0x3900e0");
#endif

    ctx->pc = 0x3900e0u;

    // 0x3900e0: 0xaf808c40  sw          $zero, -0x73C0($gp)
    ctx->pc = 0x3900e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 0));
    // 0x3900e4: 0xaf808c44  sw          $zero, -0x73BC($gp)
    ctx->pc = 0x3900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 0));
    // 0x3900e8: 0xaf808c48  sw          $zero, -0x73B8($gp)
    ctx->pc = 0x3900e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
    // 0x3900ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3900ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3900F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900ECu;
        // 0x3900f0: 0xa7808c4c  sh          $zero, -0x73B4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937676), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3900ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3900F4u;
}
