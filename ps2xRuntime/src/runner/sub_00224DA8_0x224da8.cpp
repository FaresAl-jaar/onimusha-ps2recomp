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

// Function: sub_00224DA8
// Address: 0x224da8 - 0x224e18
void sub_00224DA8_0x224da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224DA8_0x224da8");
#endif

    switch (ctx->pc) {
        case 0x224dd8u: goto label_224dd8;
        case 0x224de0u: goto label_224de0;
        case 0x224de8u: goto label_224de8;
        case 0x224df0u: goto label_224df0;
        case 0x224df8u: goto label_224df8;
        case 0x224e00u: goto label_224e00;
        case 0x224e08u: goto label_224e08;
        case 0x224e10u: goto label_224e10;
        default: break;
    }

    ctx->pc = 0x224da8u;

    // 0x224da8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x224dac: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x224dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x224db0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x224DB0u;
    {
        const bool branch_taken_0x224db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224db0) {
            ctx->pc = 0x224E10u;
            goto label_224e10;
        }
    }
    ctx->pc = 0x224DB8u;
    // 0x224db8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x224db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x224dbc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x224dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x224dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x224dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x224dc4: 0x8c638fa0  lw          $v1, -0x7060($v1)
    ctx->pc = 0x224dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938528)));
    // 0x224dc8: 0x600008  jr          $v1
    ctx->pc = 0x224DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224DD0u: goto label_224dd0;
            case 0x224DD8u: goto label_224dd8;
            case 0x224DE0u: goto label_224de0;
            case 0x224DE8u: goto label_224de8;
            case 0x224DF0u: goto label_224df0;
            case 0x224DF8u: goto label_224df8;
            case 0x224E00u: goto label_224e00;
            case 0x224E08u: goto label_224e08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x224DD0u;
label_224dd0:
    // 0x224dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x224DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD0u;
        // 0x224dd4: 0x24025da8  addiu       $v0, $zero, 0x5DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DD8u;
label_224dd8:
    // 0x224dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD8u;
        // 0x224ddc: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DE0u;
label_224de0:
    // 0x224de0: 0x3e00008  jr          $ra
    ctx->pc = 0x224DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE0u;
        // 0x224de4: 0x240261a8  addiu       $v0, $zero, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DE8u;
label_224de8:
    // 0x224de8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE8u;
        // 0x224dec: 0x24027512  addiu       $v0, $zero, 0x7512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DF0u;
label_224df0:
    // 0x224df0: 0x3e00008  jr          $ra
    ctx->pc = 0x224DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DF0u;
        // 0x224df4: 0x24027530  addiu       $v0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DF8u;
label_224df8:
    // 0x224df8: 0x3e00008  jr          $ra
    ctx->pc = 0x224DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DF8u;
        // 0x224dfc: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E00u;
label_224e00:
    // 0x224e00: 0x3e00008  jr          $ra
    ctx->pc = 0x224E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E00u;
        // 0x224e04: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E08u;
label_224e08:
    // 0x224e08: 0x3e00008  jr          $ra
    ctx->pc = 0x224E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E08u;
        // 0x224e0c: 0x3402ea60  ori         $v0, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E10u;
label_224e10:
    // 0x224e10: 0x3e00008  jr          $ra
    ctx->pc = 0x224E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E10u;
        // 0x224e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E18u;
}
