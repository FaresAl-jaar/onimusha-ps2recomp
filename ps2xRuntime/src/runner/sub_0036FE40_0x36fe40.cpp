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

// Function: sub_0036FE40
// Address: 0x36fe40 - 0x36fe50
void sub_0036FE40_0x36fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE40_0x36fe40");
#endif

    ctx->pc = 0x36fe40u;

    // 0x36fe40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36fe44: 0xa0830116  sb          $v1, 0x116($a0)
    ctx->pc = 0x36fe44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 3));
    // 0x36fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE48u;
        // 0x36fe4c: 0xa0830117  sb          $v1, 0x117($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 279), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE50u;
}
