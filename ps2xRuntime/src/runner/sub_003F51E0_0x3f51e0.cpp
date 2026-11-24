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

// Function: sub_003F51E0
// Address: 0x3f51e0 - 0x3f51f0
void sub_003F51E0_0x3f51e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F51E0_0x3f51e0");
#endif

    ctx->pc = 0x3f51e0u;

    // 0x3f51e0: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x3f51e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x3f51e4: 0xaf808d50  sw          $zero, -0x72B0($gp)
    ctx->pc = 0x3f51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 0));
    // 0x3f51e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F51E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F51E8u;
        // 0x3f51ec: 0xaf83849c  sw          $v1, -0x7B64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F51E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F51F0u;
}
