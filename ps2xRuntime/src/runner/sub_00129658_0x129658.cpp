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

// Function: sub_00129658
// Address: 0x129658 - 0x12973c
void sub_00129658_0x129658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129658_0x129658");
#endif

    switch (ctx->pc) {
        case 0x129690u: goto label_129690;
        case 0x1296b0u: goto label_1296b0;
        case 0x1296d4u: goto label_1296d4;
        case 0x129708u: goto label_129708;
        case 0x129728u: goto label_129728;
        default: break;
    }

    ctx->pc = 0x129658u;

    // 0x129658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12965c: 0x248f0040  addiu       $t7, $a0, 0x40
    ctx->pc = 0x12965cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x129660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x129660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12966c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x129670: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x129670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x129674: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x129674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x129678: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12967c: 0x14af001d  bne         $a1, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x12967Cu;
    {
        const bool branch_taken_0x12967c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x129680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12967Cu;
        // 0x129680: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12967c) {
            ctx->pc = 0x1296F4u;
            goto label_1296f4;
        }
    }
    ctx->pc = 0x129684u;
    // 0x129684: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x129684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x129688: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x129688u;
    SET_GPR_U32(ctx, 31, 0x129690u);
    ctx->pc = 0x12968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129688u;
    // 0x12968c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x129688u, 0x129690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129690u;
label_129690:
    // 0x129690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129694: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x129694u;
    {
        const bool branch_taken_0x129694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129694u;
        // 0x129698: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129694) {
            ctx->pc = 0x1296D4u;
            goto label_1296d4;
        }
    }
    ctx->pc = 0x12969Cu;
    // 0x12969c: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x12969cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x1296a0: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1296a4: 0xae4f0034  sw          $t7, 0x34($s2)
    ctx->pc = 0x1296a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 15));
    // 0x1296a8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1296a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1296ac: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x1296acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
label_1296b0:
    // 0x1296b0: 0x2727821  addu        $t7, $s3, $s2
    ctx->pc = 0x1296b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1296b4: 0x2336821  addu        $t5, $s1, $s3
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1296b8: 0x91ee0040  lbu         $t6, 0x40($t7)
    ctx->pc = 0x1296b8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x1296bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1296bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1296c0: 0x0  nop
    ctx->pc = 0x1296c0u;
    // NOP
    // 0x1296c4: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1296C4u;
    {
        const bool branch_taken_0x1296c4 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296C4u;
        // 0x1296c8: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296c4) {
            ctx->pc = 0x1296B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1296b0;
        }
    }
    ctx->pc = 0x1296CCu;
    // 0x1296cc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1296ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1296d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1296d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1296d4:
    // 0x1296d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1296d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1296d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1296dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1296dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1296e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1296e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1296e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1296e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1296e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1296e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1296ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1296ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ECu;
        // 0x1296f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1296F4u;
label_1296f4:
    // 0x1296f4: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1296f8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1296f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1296fc: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x1296fcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x129700: 0xc049a1a  jal         func_126868
    ctx->pc = 0x129700u;
    SET_GPR_U32(ctx, 31, 0x129708u);
    ctx->pc = 0x129704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129700u;
    // 0x129704: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126868u, 0x129700u, 0x129708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129708u;
label_129708:
    // 0x129708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12970c: 0x1220fff1  beqz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12970Cu;
    {
        const bool branch_taken_0x12970c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12970Cu;
        // 0x129710: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12970c) {
            ctx->pc = 0x1296D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1296d4;
        }
    }
    ctx->pc = 0x129714u;
    // 0x129714: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x129714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x129718: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x129718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12971c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129720: 0xc049522  jal         func_125488
    ctx->pc = 0x129720u;
    SET_GPR_U32(ctx, 31, 0x129728u);
    ctx->pc = 0x129724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129720u;
    // 0x129724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x129720u, 0x129728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129728u;
label_129728:
    // 0x129728: 0xae540034  sw          $s4, 0x34($s2)
    ctx->pc = 0x129728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 20));
    // 0x12972c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12972cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129730: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x129730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x129734: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x129734u;
    {
        const bool branch_taken_0x129734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129734u;
        // 0x129738: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129734) {
            ctx->pc = 0x1296D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1296d4;
        }
    }
    ctx->pc = 0x12973Cu;
}
