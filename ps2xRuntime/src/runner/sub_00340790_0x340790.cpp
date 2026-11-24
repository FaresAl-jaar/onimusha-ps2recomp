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

// Function: sub_00340790
// Address: 0x340790 - 0x340868
void sub_00340790_0x340790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340790_0x340790");
#endif

    switch (ctx->pc) {
        case 0x3407dcu: goto label_3407dc;
        case 0x340804u: goto label_340804;
        case 0x340818u: goto label_340818;
        case 0x340838u: goto label_340838;
        case 0x340848u: goto label_340848;
        case 0x340858u: goto label_340858;
        default: break;
    }

    ctx->pc = 0x340790u;

    // 0x340790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340794: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x340794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x340798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34079c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3407a0: 0x8c23cee8  lw          $v1, -0x3118($at)
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE8u));
    // 0x3407a4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3407a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3407a8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3407A8u;
    {
        const bool branch_taken_0x3407a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3407ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407A8u;
        // 0x3407ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407a8) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x3407B0u;
    // 0x3407b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3407b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3407b4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3407B4u;
    {
        const bool branch_taken_0x3407b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3407B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407B4u;
        // 0x3407b8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407b4) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x3407BCu;
    // 0x3407bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3407bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3407c0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3407c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3407c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3407c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3407c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3407C8u;
    {
        const bool branch_taken_0x3407c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3407CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407C8u;
        // 0x3407cc: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407c8) {
            ctx->pc = 0x3407E8u;
            goto label_3407e8;
        }
    }
    ctx->pc = 0x3407D0u;
    // 0x3407d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3407d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3407d4: 0xc0e1ad8  jal         func_386B60
    ctx->pc = 0x3407D4u;
    SET_GPR_U32(ctx, 31, 0x3407DCu);
    ctx->pc = 0x3407D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3407D4u;
    // 0x3407d8: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386B60u, 0x3407D4u, 0x3407DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3407DCu;
label_3407dc:
    // 0x3407dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3407DCu;
    {
        const bool branch_taken_0x3407dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3407E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407DCu;
        // 0x3407e0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407dc) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x3407E4u;
    // 0x3407e4: 0x0  nop
    ctx->pc = 0x3407e4u;
    // NOP
label_3407e8:
    // 0x3407e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3407e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3407ec: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3407ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3407f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3407f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3407f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3407F4u;
    {
        const bool branch_taken_0x3407f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3407F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407F4u;
        // 0x3407f8: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3407f4) {
            ctx->pc = 0x340810u;
            goto label_340810;
        }
    }
    ctx->pc = 0x3407FCu;
    // 0x3407fc: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x3407FCu;
    SET_GPR_U32(ctx, 31, 0x340804u);
    ctx->pc = 0x340800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3407FCu;
    // 0x340800: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x3407FCu, 0x340804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340804u;
label_340804:
    // 0x340804: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x340804u;
    {
        const bool branch_taken_0x340804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340804) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x34080Cu;
    // 0x34080c: 0x0  nop
    ctx->pc = 0x34080cu;
    // NOP
label_340810:
    // 0x340810: 0xc0d9044  jal         func_364110
    ctx->pc = 0x340810u;
    SET_GPR_U32(ctx, 31, 0x340818u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x340810u, 0x340818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340818u;
label_340818:
    // 0x340818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x340818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34081c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34081Cu;
    {
        const bool branch_taken_0x34081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34081c) {
            ctx->pc = 0x340850u;
            goto label_340850;
        }
    }
    ctx->pc = 0x340824u;
    // 0x340824: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x340824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x340828: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340828u;
    {
        const bool branch_taken_0x340828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340828u;
        // 0x34082c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340828) {
            ctx->pc = 0x340840u;
            goto label_340840;
        }
    }
    ctx->pc = 0x340830u;
    // 0x340830: 0xc0d0230  jal         func_3408C0
    ctx->pc = 0x340830u;
    SET_GPR_U32(ctx, 31, 0x340838u);
    ctx->pc = 0x3408C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408C0u, 0x340830u, 0x340838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340838u;
label_340838:
    // 0x340838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x340838u;
    {
        const bool branch_taken_0x340838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340838) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x340840u;
label_340840:
    // 0x340840: 0xc0d0294  jal         func_340A50
    ctx->pc = 0x340840u;
    SET_GPR_U32(ctx, 31, 0x340848u);
    ctx->pc = 0x340844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340840u;
    // 0x340844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340A50u, 0x340840u, 0x340848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340848u;
label_340848:
    // 0x340848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340848u;
    {
        const bool branch_taken_0x340848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340848) {
            ctx->pc = 0x340858u;
            goto label_340858;
        }
    }
    ctx->pc = 0x340850u;
label_340850:
    // 0x340850: 0xc0d0310  jal         func_340C40
    ctx->pc = 0x340850u;
    SET_GPR_U32(ctx, 31, 0x340858u);
    ctx->pc = 0x340854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340850u;
    // 0x340854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340C40u, 0x340850u, 0x340858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340858u;
label_340858:
    // 0x340858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34085c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34085cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340860: 0x3e00008  jr          $ra
    ctx->pc = 0x340860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340860u;
        // 0x340864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340868u;
}
