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

// Function: sub_00361520
// Address: 0x361520 - 0x361530
void sub_00361520_0x361520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361520_0x361520");
#endif

    ctx->pc = 0x361520u;

    // 0x361520: 0xa0802b26  sb          $zero, 0x2B26($a0)
    ctx->pc = 0x361520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11046), (uint8_t)GPR_U32(ctx, 0));
    // 0x361524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361528: 0x3e00008  jr          $ra
    ctx->pc = 0x361528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361528u;
        // 0x36152c: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361530u;
}
