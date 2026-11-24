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

// Function: sub_002540A0
// Address: 0x2540a0 - 0x2540c0
void sub_002540A0_0x2540a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002540A0_0x2540a0");
#endif

    ctx->pc = 0x2540a0u;

    // 0x2540a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2540a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2540a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2540a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2540a8: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x2540a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x2540ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2540ACu;
    {
        const bool branch_taken_0x2540ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2540B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540ACu;
        // 0x2540b0: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540ac) {
            ctx->pc = 0x2540B8u;
            goto label_2540b8;
        }
    }
    ctx->pc = 0x2540B4u;
    // 0x2540b4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2540b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2540b8:
    // 0x2540b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2540B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2540B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2540C0u;
}
