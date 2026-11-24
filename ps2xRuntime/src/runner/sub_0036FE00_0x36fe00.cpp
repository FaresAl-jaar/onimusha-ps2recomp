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

// Function: sub_0036FE00
// Address: 0x36fe00 - 0x36fe18
void sub_0036FE00_0x36fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE00_0x36fe00");
#endif

    ctx->pc = 0x36fe00u;

    // 0x36fe00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36fe04: 0xa0830115  sb          $v1, 0x115($a0)
    ctx->pc = 0x36fe04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 3));
    // 0x36fe08: 0xa0830116  sb          $v1, 0x116($a0)
    ctx->pc = 0x36fe08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 278), (uint8_t)GPR_U32(ctx, 3));
    // 0x36fe0c: 0xa0830117  sb          $v1, 0x117($a0)
    ctx->pc = 0x36fe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 279), (uint8_t)GPR_U32(ctx, 3));
    // 0x36fe10: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE10u;
        // 0x36fe14: 0xa0800118  sb          $zero, 0x118($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 280), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE18u;
}
