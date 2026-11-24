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

// Function: sub_0017AA00
// Address: 0x17aa00 - 0x17aa18
void sub_0017AA00_0x17aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA00_0x17aa00");
#endif

    ctx->pc = 0x17aa00u;

    // 0x17aa00: 0xac852ca8  sw          $a1, 0x2CA8($a0)
    ctx->pc = 0x17aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11432), GPR_U32(ctx, 5));
    // 0x17aa04: 0xac862ca0  sw          $a2, 0x2CA0($a0)
    ctx->pc = 0x17aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11424), GPR_U32(ctx, 6));
    // 0x17aa08: 0xac872c9c  sw          $a3, 0x2C9C($a0)
    ctx->pc = 0x17aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11420), GPR_U32(ctx, 7));
    // 0x17aa0c: 0xac882ca4  sw          $t0, 0x2CA4($a0)
    ctx->pc = 0x17aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11428), GPR_U32(ctx, 8));
    // 0x17aa10: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA10u;
        // 0x17aa14: 0xac802cd0  sw          $zero, 0x2CD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA18u;
}
