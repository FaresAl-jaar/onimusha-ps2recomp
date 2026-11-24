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

// Function: sub_003EDAA0
// Address: 0x3edaa0 - 0x3edac0
void sub_003EDAA0_0x3edaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDAA0_0x3edaa0");
#endif

    ctx->pc = 0x3edaa0u;

    // 0x3edaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3edaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edaa4: 0xa7838d28  sh          $v1, -0x72D8($gp)
    ctx->pc = 0x3edaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937896), (uint16_t)GPR_U32(ctx, 3));
    // 0x3edaa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3edaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3edaac: 0xa7838d20  sh          $v1, -0x72E0($gp)
    ctx->pc = 0x3edaacu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937888), (uint16_t)GPR_U32(ctx, 3));
    // 0x3edab0: 0xa7838d22  sh          $v1, -0x72DE($gp)
    ctx->pc = 0x3edab0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937890), (uint16_t)GPR_U32(ctx, 3));
    // 0x3edab4: 0xa7838d24  sh          $v1, -0x72DC($gp)
    ctx->pc = 0x3edab4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937892), (uint16_t)GPR_U32(ctx, 3));
    // 0x3edab8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDAB8u;
        // 0x3edabc: 0xa7838d26  sh          $v1, -0x72DA($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937894), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDAC0u;
}
