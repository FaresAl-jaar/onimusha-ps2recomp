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

// Function: sub_0035DA50
// Address: 0x35da50 - 0x35da84
void sub_0035DA50_0x35da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DA50_0x35da50");
#endif

    ctx->pc = 0x35da50u;

    // 0x35da50: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x35da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x35da54: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x35da54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x35da58: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x35da58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x35da5c: 0xac8306c8  sw          $v1, 0x6C8($a0)
    ctx->pc = 0x35da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 3));
    // 0x35da60: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x35da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x35da64: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x35da64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x35da68: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x35da68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x35da6c: 0xa0803050  sb          $zero, 0x3050($a0)
    ctx->pc = 0x35da6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12368), (uint8_t)GPR_U32(ctx, 0));
    // 0x35da70: 0xac802f50  sw          $zero, 0x2F50($a0)
    ctx->pc = 0x35da70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12112), GPR_U32(ctx, 0));
    // 0x35da74: 0xac802fa0  sw          $zero, 0x2FA0($a0)
    ctx->pc = 0x35da74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12192), GPR_U32(ctx, 0));
    // 0x35da78: 0xac802ff0  sw          $zero, 0x2FF0($a0)
    ctx->pc = 0x35da78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12272), GPR_U32(ctx, 0));
    // 0x35da7c: 0x3e00008  jr          $ra
    ctx->pc = 0x35DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA7Cu;
        // 0x35da80: 0xac803040  sw          $zero, 0x3040($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DA84u;
}
