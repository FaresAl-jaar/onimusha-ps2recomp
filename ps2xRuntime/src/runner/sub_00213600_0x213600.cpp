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

// Function: sub_00213600
// Address: 0x213600 - 0x213684
void sub_00213600_0x213600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213600_0x213600");
#endif

    switch (ctx->pc) {
        case 0x213624u: goto label_213624;
        case 0x21365cu: goto label_21365c;
        default: break;
    }

    ctx->pc = 0x213600u;

    // 0x213600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213604: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x213604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x213608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21360c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x21360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x213610: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x213614: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x213614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213618: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21361c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21361Cu;
    SET_GPR_U32(ctx, 31, 0x213624u);
    ctx->pc = 0x213620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21361Cu;
    // 0x213620: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21361Cu, 0x213624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213624u;
label_213624:
    // 0x213624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x213624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x213628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21362c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213630: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x213630u;
    {
        const bool branch_taken_0x213630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x213634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213630u;
        // 0x213634: 0x2a040002  slti        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213630) {
            ctx->pc = 0x21366Cu;
            goto label_21366c;
        }
    }
    ctx->pc = 0x213638u;
    // 0x213638: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x213638u;
    {
        const bool branch_taken_0x213638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x213638) {
            ctx->pc = 0x21363Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213638u;
            // 0x21363c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213670u;
            goto label_213670;
        }
    }
    ctx->pc = 0x213640u;
    // 0x213640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213644: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x213644u;
    {
        const bool branch_taken_0x213644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x213644) {
            ctx->pc = 0x213648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213644u;
            // 0x213648: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21366Cu;
            goto label_21366c;
        }
    }
    ctx->pc = 0x21364Cu;
    // 0x21364c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213650: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213654: 0xc085052  jal         func_214148
    ctx->pc = 0x213654u;
    SET_GPR_U32(ctx, 31, 0x21365Cu);
    ctx->pc = 0x213658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213654u;
    // 0x213658: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214148u, 0x213654u, 0x21365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21365Cu;
label_21365c:
    // 0x21365c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21365cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213660: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x213660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x213664: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x213664u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x213668: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x213668u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_21366c:
    // 0x21366c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21366cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213670:
    // 0x213670: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x213670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x213674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213678: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21367c: 0x3e00008  jr          $ra
    ctx->pc = 0x21367Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21367Cu;
        // 0x213680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21367Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213684u;
}
