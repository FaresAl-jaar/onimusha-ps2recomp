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

// Function: sub_00377AC0
// Address: 0x377ac0 - 0x377ad0
void sub_00377AC0_0x377ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AC0_0x377ac0");
#endif

    ctx->pc = 0x377ac0u;

    // 0x377ac0: 0xaf808c10  sw          $zero, -0x73F0($gp)
    ctx->pc = 0x377ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 0));
    // 0x377ac4: 0xaf808c14  sw          $zero, -0x73EC($gp)
    ctx->pc = 0x377ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 0));
    // 0x377ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x377AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AC8u;
        // 0x377acc: 0xaf808c18  sw          $zero, -0x73E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AD0u;
}
