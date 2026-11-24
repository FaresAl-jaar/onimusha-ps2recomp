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

// Function: sub_002407A0
// Address: 0x2407a0 - 0x240898
void sub_002407A0_0x2407a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002407A0_0x2407a0");
#endif

    switch (ctx->pc) {
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407fcu: goto label_2407fc;
        case 0x240820u: goto label_240820;
        case 0x240828u: goto label_240828;
        case 0x240840u: goto label_240840;
        case 0x24085cu: goto label_24085c;
        case 0x240868u: goto label_240868;
        case 0x24087cu: goto label_24087c;
        default: break;
    }

    ctx->pc = 0x2407a0u;

    // 0x2407a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2407a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2407a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2407a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2407a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2407ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2407acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2407b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2407b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2407b4: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x2407B4u;
    SET_GPR_U32(ctx, 31, 0x2407BCu);
    ctx->pc = 0x2407B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407B4u;
    // 0x2407b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x2407B4u, 0x2407BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407BCu;
label_2407bc:
    // 0x2407bc: 0x8e1200b4  lw          $s2, 0xB4($s0)
    ctx->pc = 0x2407bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2407c0: 0xc090b92  jal         func_242E48
    ctx->pc = 0x2407C0u;
    SET_GPR_U32(ctx, 31, 0x2407C8u);
    ctx->pc = 0x2407C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407C0u;
    // 0x2407c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E48u, 0x2407C0u, 0x2407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407C8u;
label_2407c8:
    // 0x2407c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2407C8u;
    {
        const bool branch_taken_0x2407c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2407c8) {
            ctx->pc = 0x2407CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407C8u;
            // 0x2407cc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2407E4u;
            goto label_2407e4;
        }
    }
    ctx->pc = 0x2407D0u;
    // 0x2407d0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2407d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2407d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2407d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407d8: 0xc090bb0  jal         func_242EC0
    ctx->pc = 0x2407D8u;
    SET_GPR_U32(ctx, 31, 0x2407E0u);
    ctx->pc = 0x2407DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407D8u;
    // 0x2407dc: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242EC0u, 0x2407D8u, 0x2407E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407E0u;
label_2407e0:
    // 0x2407e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2407e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2407e4:
    // 0x2407e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2407e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2407e8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2407E8u;
    {
        const bool branch_taken_0x2407e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2407e8) {
            ctx->pc = 0x2407ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407E8u;
            // 0x2407ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240808u;
            goto label_240808;
        }
    }
    ctx->pc = 0x2407F0u;
    // 0x2407f0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2407f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2407f4: 0xc090b9e  jal         func_242E78
    ctx->pc = 0x2407F4u;
    SET_GPR_U32(ctx, 31, 0x2407FCu);
    ctx->pc = 0x2407F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407F4u;
    // 0x2407f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E78u, 0x2407F4u, 0x2407FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407FCu;
label_2407fc:
    // 0x2407fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2407fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240800: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x240800u;
    {
        const bool branch_taken_0x240800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240800u;
        // 0x240804: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240800) {
            ctx->pc = 0x240880u;
            goto label_240880;
        }
    }
    ctx->pc = 0x240808u;
label_240808:
    // 0x240808: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240808) {
            ctx->pc = 0x24080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240808u;
            // 0x24080c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240884u;
            goto label_240884;
        }
    }
    ctx->pc = 0x240810u;
    // 0x240810: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x240814: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240814u;
    {
        const bool branch_taken_0x240814 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240814u;
        // 0x240818: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240814) {
            ctx->pc = 0x240838u;
            goto label_240838;
        }
    }
    ctx->pc = 0x24081Cu;
    // 0x24081c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240820:
    // 0x240820: 0xc090c68  jal         func_2431A0
    ctx->pc = 0x240820u;
    SET_GPR_U32(ctx, 31, 0x240828u);
    ctx->pc = 0x240824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240820u;
    // 0x240824: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2431A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431A0u, 0x240820u, 0x240828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240828u;
label_240828:
    // 0x240828: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x24082c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240830: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x240830u;
    {
        const bool branch_taken_0x240830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240830) {
            ctx->pc = 0x240834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240830u;
            // 0x240834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240820;
        }
    }
    ctx->pc = 0x240838u;
label_240838:
    // 0x240838: 0xc090c7a  jal         func_2431E8
    ctx->pc = 0x240838u;
    SET_GPR_U32(ctx, 31, 0x240840u);
    ctx->pc = 0x24083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240838u;
    // 0x24083c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2431E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431E8u, 0x240838u, 0x240840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240840u;
label_240840:
    // 0x240840: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x240844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240848: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x240848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24084c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240850: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x240850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x240854: 0xc090c78  jal         func_2431E0
    ctx->pc = 0x240854u;
    SET_GPR_U32(ctx, 31, 0x24085Cu);
    ctx->pc = 0x240858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240854u;
    // 0x240858: 0xae030088  sw          $v1, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2431E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2431E0u, 0x240854u, 0x24085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24085Cu;
label_24085c:
    // 0x24085c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240860: 0xc090b92  jal         func_242E48
    ctx->pc = 0x240860u;
    SET_GPR_U32(ctx, 31, 0x240868u);
    ctx->pc = 0x240864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240860u;
    // 0x240864: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242E48u, 0x240860u, 0x240868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240868u;
label_240868:
    // 0x240868: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24086c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24086Cu;
    {
        const bool branch_taken_0x24086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24086c) {
            ctx->pc = 0x240870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24086Cu;
            // 0x240870: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240884u;
            goto label_240884;
        }
    }
    ctx->pc = 0x240874u;
    // 0x240874: 0xc090bb0  jal         func_242EC0
    ctx->pc = 0x240874u;
    SET_GPR_U32(ctx, 31, 0x24087Cu);
    ctx->pc = 0x240878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240874u;
    // 0x240878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242EC0u, 0x240874u, 0x24087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24087Cu;
label_24087c:
    // 0x24087c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24087cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_240880:
    // 0x240880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240884:
    // 0x240884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24088c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24088cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240890: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x240890u;
    ctx->pc = 0x240894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240890u;
    // 0x240894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x240898u;
}
