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

// Function: sub_00294790
// Address: 0x294790 - 0x2947cc
void sub_00294790_0x294790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294790_0x294790");
#endif

    switch (ctx->pc) {
        case 0x294798u: goto label_294798;
        default: break;
    }

    ctx->pc = 0x294790u;

    // 0x294790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294794: 0x0  nop
    ctx->pc = 0x294794u;
    // NOP
label_294798:
    // 0x294798: 0xac802988  sw          $zero, 0x2988($a0)
    ctx->pc = 0x294798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10632), GPR_U32(ctx, 0));
    // 0x29479c: 0xac80298c  sw          $zero, 0x298C($a0)
    ctx->pc = 0x29479cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10636), GPR_U32(ctx, 0));
    // 0x2947a0: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x2947a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2947a4: 0xac802990  sw          $zero, 0x2990($a0)
    ctx->pc = 0x2947a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10640), GPR_U32(ctx, 0));
    // 0x2947a8: 0x28a3000e  slti        $v1, $a1, 0xE
    ctx->pc = 0x2947a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2947ac: 0xac802994  sw          $zero, 0x2994($a0)
    ctx->pc = 0x2947acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10644), GPR_U32(ctx, 0));
    // 0x2947b0: 0xac802998  sw          $zero, 0x2998($a0)
    ctx->pc = 0x2947b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10648), GPR_U32(ctx, 0));
    // 0x2947b4: 0xac80299c  sw          $zero, 0x299C($a0)
    ctx->pc = 0x2947b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10652), GPR_U32(ctx, 0));
    // 0x2947b8: 0xac8029a0  sw          $zero, 0x29A0($a0)
    ctx->pc = 0x2947b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10656), GPR_U32(ctx, 0));
    // 0x2947bc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2947BCu;
    {
        const bool branch_taken_0x2947bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947BCu;
        // 0x2947c0: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947bc) {
            ctx->pc = 0x294798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294798;
        }
    }
    ctx->pc = 0x2947C4u;
    // 0x2947c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2947C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2947C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2947CCu;
}
