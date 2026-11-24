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

// Function: sub_002711C0
// Address: 0x2711c0 - 0x2711e8
void sub_002711C0_0x2711c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002711C0_0x2711c0");
#endif

    ctx->pc = 0x2711c0u;

    // 0x2711c0: 0x8f83889c  lw          $v1, -0x7764($gp)
    ctx->pc = 0x2711c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936732)));
    // 0x2711c4: 0x8f878118  lw          $a3, -0x7EE8($gp)
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x2711c8: 0x8f86811c  lw          $a2, -0x7EE4($gp)
    ctx->pc = 0x2711c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x2711cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2711ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2711d0: 0xaf878120  sw          $a3, -0x7EE0($gp)
    ctx->pc = 0x2711d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 7));
    // 0x2711d4: 0xaf868124  sw          $a2, -0x7EDC($gp)
    ctx->pc = 0x2711d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 6));
    // 0x2711d8: 0xaf848118  sw          $a0, -0x7EE8($gp)
    ctx->pc = 0x2711d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 4));
    // 0x2711dc: 0xaf85811c  sw          $a1, -0x7EE4($gp)
    ctx->pc = 0x2711dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 5));
    // 0x2711e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2711E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2711E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711E0u;
        // 0x2711e4: 0xaf83889c  sw          $v1, -0x7764($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2711E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2711E8u;
}
