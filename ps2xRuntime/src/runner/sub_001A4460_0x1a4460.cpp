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

// Function: sub_001A4460
// Address: 0x1a4460 - 0x1a447c
void sub_001A4460_0x1a4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4460_0x1a4460");
#endif

    ctx->pc = 0x1a4460u;

    // 0x1a4460: 0xaf8087a0  sw          $zero, -0x7860($gp)
    ctx->pc = 0x1a4460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936480), GPR_U32(ctx, 0));
    // 0x1a4464: 0xaf8087a4  sw          $zero, -0x785C($gp)
    ctx->pc = 0x1a4464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936484), GPR_U32(ctx, 0));
    // 0x1a4468: 0xa38087a8  sb          $zero, -0x7858($gp)
    ctx->pc = 0x1a4468u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a446c: 0xa38087ac  sb          $zero, -0x7854($gp)
    ctx->pc = 0x1a446cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936492), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4470: 0xa38087b0  sb          $zero, -0x7850($gp)
    ctx->pc = 0x1a4470u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936496), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4474: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4474u;
        // 0x1a4478: 0xa38087b4  sb          $zero, -0x784C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936500), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A447Cu;
}
