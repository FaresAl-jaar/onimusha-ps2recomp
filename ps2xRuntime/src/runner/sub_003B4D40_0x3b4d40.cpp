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

// Function: sub_003B4D40
// Address: 0x3b4d40 - 0x3b4d50
void sub_003B4D40_0x3b4d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4D40_0x3b4d40");
#endif

    ctx->pc = 0x3b4d40u;

    // 0x3b4d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4d44: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x3b4d44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b4d48: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D48u;
        // 0x3b4d4c: 0xa080000b  sb          $zero, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4D50u;
}
