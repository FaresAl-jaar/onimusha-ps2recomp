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

// Function: sub_00221E10
// Address: 0x221e10 - 0x221e58
void sub_00221E10_0x221e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E10_0x221e10");
#endif

    switch (ctx->pc) {
        case 0x221e30u: goto label_221e30;
        default: break;
    }

    ctx->pc = 0x221e10u;

    // 0x221e10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x221e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221e14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x221e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x221e18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x221e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x221e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221e20: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x221e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x221e24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x221e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221e28: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x221e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x221e2c: 0x2482001c  addiu       $v0, $a0, 0x1C
    ctx->pc = 0x221e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_221e30:
    // 0x221e30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x221e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x221e34: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x221e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x221e38: 0x0  nop
    ctx->pc = 0x221e38u;
    // NOP
    // 0x221e3c: 0x0  nop
    ctx->pc = 0x221e3cu;
    // NOP
    // 0x221e40: 0x0  nop
    ctx->pc = 0x221e40u;
    // NOP
    // 0x221e44: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x221E44u;
    {
        const bool branch_taken_0x221e44 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x221E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E44u;
        // 0x221e48: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e44) {
            ctx->pc = 0x221E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221e30;
        }
    }
    ctx->pc = 0x221E4Cu;
    // 0x221e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x221e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221e50: 0x3e00008  jr          $ra
    ctx->pc = 0x221E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E50u;
        // 0x221e54: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221E58u;
}
