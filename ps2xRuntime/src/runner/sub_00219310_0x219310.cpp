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

// Function: sub_00219310
// Address: 0x219310 - 0x2193d4
void sub_00219310_0x219310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219310_0x219310");
#endif

    switch (ctx->pc) {
        case 0x21932cu: goto label_21932c;
        case 0x219360u: goto label_219360;
        case 0x2193a8u: goto label_2193a8;
        default: break;
    }

    ctx->pc = 0x219310u;

    // 0x219310: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x219310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x219314: 0x24a35970  addiu       $v1, $a1, 0x5970
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
    // 0x219318: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x219318u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x88598Cu));
    // 0x21931c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219320: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x219320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x219324: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x219324u;
    {
        const bool branch_taken_0x219324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219324) {
            ctx->pc = 0x219328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219324u;
            // 0x219328: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x21932Cu;
label_21932c:
    // 0x21932c: 0x3e00008  jr          $ra
    ctx->pc = 0x21932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21932Cu;
        // 0x219330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21932Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219334u;
    // 0x219334: 0x0  nop
    ctx->pc = 0x219334u;
    // NOP
label_219338:
    // 0x219338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219338u;
    {
        const bool branch_taken_0x219338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219338u;
        // 0x21933c: 0x3c020088  lui         $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219338) {
            ctx->pc = 0x219350u;
            goto label_219350;
        }
    }
    ctx->pc = 0x219340u;
    // 0x219340: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x219340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x219344: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x219344u;
    {
        const bool branch_taken_0x219344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219344) {
            ctx->pc = 0x2193CCu;
            goto label_2193cc;
        }
    }
    ctx->pc = 0x21934Cu;
    // 0x21934c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x21934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_219350:
    // 0x219350: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x219350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219354: 0x24445998  addiu       $a0, $v0, 0x5998
    ctx->pc = 0x219354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
    // 0x219358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x219358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21935c: 0x0  nop
    ctx->pc = 0x21935cu;
    // NOP
label_219360:
    // 0x219360: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x219360u;
    {
        const bool branch_taken_0x219360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219360u;
        // 0x219364: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219360) {
            ctx->pc = 0x21932Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21932c;
        }
    }
    ctx->pc = 0x219368u;
    // 0x219368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x219368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21936c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x21936cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x219370: 0x0  nop
    ctx->pc = 0x219370u;
    // NOP
    // 0x219374: 0x0  nop
    ctx->pc = 0x219374u;
    // NOP
    // 0x219378: 0x0  nop
    ctx->pc = 0x219378u;
    // NOP
    // 0x21937c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21937Cu;
    {
        const bool branch_taken_0x21937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21937c) {
            ctx->pc = 0x219380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21937Cu;
            // 0x219380: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219360;
        }
    }
    ctx->pc = 0x219384u;
    // 0x219384: 0x24a25970  addiu       $v0, $a1, 0x5970
    ctx->pc = 0x219384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
    // 0x219388: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x219388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21938c: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x21938Cu;
    {
        const bool branch_taken_0x21938c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x219390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21938Cu;
        // 0x219390: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21938c) {
            ctx->pc = 0x2193CCu;
            goto label_2193cc;
        }
    }
    ctx->pc = 0x219394u;
    // 0x219394: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x219394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x219398: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x219398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21939c: 0x244459a0  addiu       $a0, $v0, 0x59A0
    ctx->pc = 0x21939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x2193a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2193a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8859A0u));
    // 0x2193a4: 0x0  nop
    ctx->pc = 0x2193a4u;
    // NOP
label_2193a8:
    // 0x2193a8: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2193A8u;
    {
        const bool branch_taken_0x2193a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193A8u;
        // 0x2193ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193a8) {
            ctx->pc = 0x21932Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21932c;
        }
    }
    ctx->pc = 0x2193B0u;
    // 0x2193b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2193b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2193b4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x2193b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2193b8: 0x0  nop
    ctx->pc = 0x2193b8u;
    // NOP
    // 0x2193bc: 0x0  nop
    ctx->pc = 0x2193bcu;
    // NOP
    // 0x2193c0: 0x0  nop
    ctx->pc = 0x2193c0u;
    // NOP
    // 0x2193c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2193C4u;
    {
        const bool branch_taken_0x2193c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2193c4) {
            ctx->pc = 0x2193C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2193C4u;
            // 0x2193c8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2193A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2193a8;
        }
    }
    ctx->pc = 0x2193CCu;
label_2193cc:
    // 0x2193cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2193CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2193D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193CCu;
        // 0x2193d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2193CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2193D4u;
}
