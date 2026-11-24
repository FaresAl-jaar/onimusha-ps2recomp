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

// Function: sub_00124648
// Address: 0x124648 - 0x1246d8
void sub_00124648_0x124648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124648_0x124648");
#endif

    switch (ctx->pc) {
        case 0x124648u: goto label_124648;
        case 0x12464cu: goto label_12464c;
        case 0x124650u: goto label_124650;
        case 0x124654u: goto label_124654;
        case 0x124658u: goto label_124658;
        case 0x12465cu: goto label_12465c;
        case 0x124660u: goto label_124660;
        case 0x124664u: goto label_124664;
        case 0x124668u: goto label_124668;
        case 0x12466cu: goto label_12466c;
        case 0x124670u: goto label_124670;
        case 0x124674u: goto label_124674;
        case 0x124678u: goto label_124678;
        case 0x12467cu: goto label_12467c;
        case 0x124680u: goto label_124680;
        case 0x124684u: goto label_124684;
        case 0x124688u: goto label_124688;
        case 0x12468cu: goto label_12468c;
        case 0x124690u: goto label_124690;
        case 0x124694u: goto label_124694;
        case 0x124698u: goto label_124698;
        case 0x12469cu: goto label_12469c;
        case 0x1246a0u: goto label_1246a0;
        case 0x1246a4u: goto label_1246a4;
        case 0x1246a8u: goto label_1246a8;
        case 0x1246acu: goto label_1246ac;
        case 0x1246b0u: goto label_1246b0;
        case 0x1246b4u: goto label_1246b4;
        case 0x1246b8u: goto label_1246b8;
        case 0x1246bcu: goto label_1246bc;
        case 0x1246c0u: goto label_1246c0;
        case 0x1246c4u: goto label_1246c4;
        case 0x1246c8u: goto label_1246c8;
        case 0x1246ccu: goto label_1246cc;
        case 0x1246d0u: goto label_1246d0;
        case 0x1246d4u: goto label_1246d4;
        default: break;
    }

    ctx->pc = 0x124648u;

label_124648:
    // 0x124648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12464c:
    // 0x12464c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_124650:
    // 0x124650: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_124654:
    // 0x124654: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_124658:
    // 0x124658: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_12465c:
    // 0x12465c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_124660:
    // 0x124660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x124660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124664:
    // 0x124664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_124668:
    // 0x124668: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_12466c:
    // 0x12466c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_124670:
    if (ctx->pc == 0x124670u) {
        ctx->pc = 0x124670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12466Cu;
        // 0x124670: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124674u;
        goto label_124674;
    }
    ctx->pc = 0x12466Cu;
    {
        const bool branch_taken_0x12466c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12466Cu;
        // 0x124670: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12466c) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x124674u;
label_124674:
    // 0x124674: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x124674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_124678:
    // 0x124678: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x124678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_12467c:
    // 0x12467c: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_124680:
    if (ctx->pc == 0x124680u) {
        ctx->pc = 0x124680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12467Cu;
        // 0x124680: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124684u;
        goto label_124684;
    }
    ctx->pc = 0x12467Cu;
    {
        const bool branch_taken_0x12467c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x124680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12467Cu;
        // 0x124680: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12467c) {
            ctx->pc = 0x1246A8u;
            goto label_1246a8;
        }
    }
    ctx->pc = 0x124684u;
label_124684:
    // 0x124684: 0x860f000c  lh          $t7, 0xC($s0)
    ctx->pc = 0x124684u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_124688:
    // 0x124688: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
label_12468c:
    if (ctx->pc == 0x12468Cu) {
        ctx->pc = 0x12468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124688u;
        // 0x12468c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124690u;
        goto label_124690;
    }
    ctx->pc = 0x124688u;
    {
        const bool branch_taken_0x124688 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124688) {
            ctx->pc = 0x12468Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124688u;
            // 0x12468c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246A0u;
            goto label_1246a0;
        }
    }
    ctx->pc = 0x124690u;
label_124690:
    // 0x124690: 0x280f809  jalr        $s4
label_124694:
    if (ctx->pc == 0x124694u) {
        ctx->pc = 0x124694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124690u;
        // 0x124694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124698u;
        goto label_124698;
    }
    ctx->pc = 0x124690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x124698u);
        ctx->pc = 0x124694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124690u;
        // 0x124694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124690u, 0x124698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124698u;
label_124698:
    // 0x124698: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x124698u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_12469c:
    // 0x12469c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x12469cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1246a0:
    // 0x1246a0: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_1246a4:
    if (ctx->pc == 0x1246A4u) {
        ctx->pc = 0x1246A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246A0u;
        // 0x1246a4: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246A8u;
        goto label_1246a8;
    }
    ctx->pc = 0x1246A0u;
    {
        const bool branch_taken_0x1246a0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1246A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246A0u;
        // 0x1246a4: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246a0) {
            ctx->pc = 0x124684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124684;
        }
    }
    ctx->pc = 0x1246A8u;
label_1246a8:
    // 0x1246a8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1246ac:
    // 0x1246ac: 0x5640fff2  bnel        $s2, $zero, . + 4 + (-0xE << 2)
label_1246b0:
    if (ctx->pc == 0x1246B0u) {
        ctx->pc = 0x1246B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ACu;
        // 0x1246b0: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246B4u;
        goto label_1246b4;
    }
    ctx->pc = 0x1246ACu;
    {
        const bool branch_taken_0x1246ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1246ac) {
            ctx->pc = 0x1246B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1246ACu;
            // 0x1246b0: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124678;
        }
    }
    ctx->pc = 0x1246B4u;
label_1246b4:
    // 0x1246b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1246b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1246b8:
    // 0x1246b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1246b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1246bc:
    // 0x1246bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1246bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1246c0:
    // 0x1246c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1246c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1246c4:
    // 0x1246c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1246c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1246c8:
    // 0x1246c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1246c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1246cc:
    // 0x1246cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1246ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1246d0:
    // 0x1246d0: 0x3e00008  jr          $ra
label_1246d4:
    if (ctx->pc == 0x1246D4u) {
        ctx->pc = 0x1246D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246D0u;
        // 0x1246d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1246D8u;
        goto label_fallthrough_0x1246d0;
    }
    ctx->pc = 0x1246D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1246D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246D0u;
        // 0x1246d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1246D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1246d0:
    ctx->pc = 0x1246D8u;
}
