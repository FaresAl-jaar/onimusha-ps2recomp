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

// Function: sub_00385010
// Address: 0x385010 - 0x385028
void sub_00385010_0x385010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385010_0x385010");
#endif

    ctx->pc = 0x385010u;

    // 0x385010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385014: 0xaf848c38  sw          $a0, -0x73C8($gp)
    ctx->pc = 0x385014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937656), GPR_U32(ctx, 4));
    // 0x385018: 0xa3808c30  sb          $zero, -0x73D0($gp)
    ctx->pc = 0x385018u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937648), (uint8_t)GPR_U32(ctx, 0));
    // 0x38501c: 0xaf838c2c  sw          $v1, -0x73D4($gp)
    ctx->pc = 0x38501cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937644), GPR_U32(ctx, 3));
    // 0x385020: 0x3e00008  jr          $ra
    ctx->pc = 0x385020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385020u;
        // 0x385024: 0xa7808c34  sh          $zero, -0x73CC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937652), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385028u;
}
