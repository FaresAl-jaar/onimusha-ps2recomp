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

// Function: sub_00255200
// Address: 0x255200 - 0x255210
void sub_00255200_0x255200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255200_0x255200");
#endif

    ctx->pc = 0x255200u;

    // 0x255200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255204: 0xa0831110  sb          $v1, 0x1110($a0)
    ctx->pc = 0x255204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4368), (uint8_t)GPR_U32(ctx, 3));
    // 0x255208: 0x3e00008  jr          $ra
    ctx->pc = 0x255208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255208u;
        // 0x25520c: 0xac801104  sw          $zero, 0x1104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255210u;
}
