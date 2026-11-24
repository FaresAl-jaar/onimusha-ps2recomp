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

// Function: sub_00190460
// Address: 0x190460 - 0x190474
void sub_00190460_0x190460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190460_0x190460");
#endif

    ctx->pc = 0x190460u;

    // 0x190460: 0xaf808724  sw          $zero, -0x78DC($gp)
    ctx->pc = 0x190460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 0));
    // 0x190464: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x190464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
    // 0x190468: 0xa780873c  sh          $zero, -0x78C4($gp)
    ctx->pc = 0x190468u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 0));
    // 0x19046c: 0x3e00008  jr          $ra
    ctx->pc = 0x19046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19046Cu;
        // 0x190470: 0xa7808740  sh          $zero, -0x78C0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190474u;
}
