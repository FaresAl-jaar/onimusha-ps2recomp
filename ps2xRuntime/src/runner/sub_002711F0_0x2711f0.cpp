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

// Function: sub_002711F0
// Address: 0x2711f0 - 0x27121c
void sub_002711F0_0x2711f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002711F0_0x2711f0");
#endif

    ctx->pc = 0x2711f0u;

    // 0x2711f0: 0x8f83889c  lw          $v1, -0x7764($gp)
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936732)));
    // 0x2711f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2711f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2711f8: 0x8f868120  lw          $a2, -0x7EE0($gp)
    ctx->pc = 0x2711f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x2711fc: 0x8f858124  lw          $a1, -0x7EDC($gp)
    ctx->pc = 0x2711fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
    // 0x271200: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271204: 0xaf868118  sw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 6));
    // 0x271208: 0xaf85811c  sw          $a1, -0x7EE4($gp)
    ctx->pc = 0x271208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 5));
    // 0x27120c: 0xaf848120  sw          $a0, -0x7EE0($gp)
    ctx->pc = 0x27120cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 4));
    // 0x271210: 0xaf83889c  sw          $v1, -0x7764($gp)
    ctx->pc = 0x271210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 3));
    // 0x271214: 0x3e00008  jr          $ra
    ctx->pc = 0x271214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271214u;
        // 0x271218: 0xaf808124  sw          $zero, -0x7EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27121Cu;
}
