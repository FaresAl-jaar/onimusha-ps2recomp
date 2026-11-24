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

// Function: sub_0027E460
// Address: 0x27e460 - 0x27e47c
void sub_0027E460_0x27e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E460_0x27e460");
#endif

    ctx->pc = 0x27e460u;

    // 0x27e460: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x27e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27e464: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x27e464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x27e468: 0xac840040  sw          $a0, 0x40($a0)
    ctx->pc = 0x27e468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 4));
    // 0x27e46c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x27e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x27e470: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x27e470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x27e474: 0x3e00008  jr          $ra
    ctx->pc = 0x27E474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E474u;
        // 0x27e478: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E47Cu;
}
