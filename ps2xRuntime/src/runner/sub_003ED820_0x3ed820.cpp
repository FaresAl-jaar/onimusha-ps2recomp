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

// Function: sub_003ED820
// Address: 0x3ed820 - 0x3ed830
void sub_003ED820_0x3ed820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED820_0x3ed820");
#endif

    ctx->pc = 0x3ed820u;

    // 0x3ed820: 0xaf808d14  sw          $zero, -0x72EC($gp)
    ctx->pc = 0x3ed820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 0));
    // 0x3ed824: 0xaf808d18  sw          $zero, -0x72E8($gp)
    ctx->pc = 0x3ed824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 0));
    // 0x3ed828: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED828u;
        // 0x3ed82c: 0xaf808d1c  sw          $zero, -0x72E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED830u;
}
