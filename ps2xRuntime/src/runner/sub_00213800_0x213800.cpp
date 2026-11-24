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

// Function: sub_00213800
// Address: 0x213800 - 0x2138a8
void sub_00213800_0x213800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213800_0x213800");
#endif

    switch (ctx->pc) {
        case 0x213800u: goto label_213800;
        case 0x213804u: goto label_213804;
        case 0x213808u: goto label_213808;
        case 0x21380cu: goto label_21380c;
        case 0x213810u: goto label_213810;
        case 0x213814u: goto label_213814;
        case 0x213818u: goto label_213818;
        case 0x21381cu: goto label_21381c;
        case 0x213820u: goto label_213820;
        case 0x213824u: goto label_213824;
        case 0x213828u: goto label_213828;
        case 0x21382cu: goto label_21382c;
        case 0x213830u: goto label_213830;
        case 0x213834u: goto label_213834;
        case 0x213838u: goto label_213838;
        case 0x21383cu: goto label_21383c;
        case 0x213840u: goto label_213840;
        case 0x213844u: goto label_213844;
        case 0x213848u: goto label_213848;
        case 0x21384cu: goto label_21384c;
        case 0x213850u: goto label_213850;
        case 0x213854u: goto label_213854;
        case 0x213858u: goto label_213858;
        case 0x21385cu: goto label_21385c;
        case 0x213860u: goto label_213860;
        case 0x213864u: goto label_213864;
        case 0x213868u: goto label_213868;
        case 0x21386cu: goto label_21386c;
        case 0x213870u: goto label_213870;
        case 0x213874u: goto label_213874;
        case 0x213878u: goto label_213878;
        case 0x21387cu: goto label_21387c;
        case 0x213880u: goto label_213880;
        case 0x213884u: goto label_213884;
        case 0x213888u: goto label_213888;
        case 0x21388cu: goto label_21388c;
        case 0x213890u: goto label_213890;
        case 0x213894u: goto label_213894;
        case 0x213898u: goto label_213898;
        case 0x21389cu: goto label_21389c;
        case 0x2138a0u: goto label_2138a0;
        case 0x2138a4u: goto label_2138a4;
        default: break;
    }

    ctx->pc = 0x213800u;

label_213800:
    // 0x213800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_213804:
    // 0x213804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_213808:
    // 0x213808: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x213808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21380c:
    // 0x21380c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_213810:
    // 0x213810: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x213810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_213814:
    // 0x213814: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_213818:
    // 0x213818: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x213818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21381c:
    // 0x21381c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_213820:
    // 0x213820: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_213824:
    // 0x213824: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x213824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_213828:
    // 0x213828: 0x40f809  jalr        $v0
label_21382c:
    if (ctx->pc == 0x21382Cu) {
        ctx->pc = 0x21382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213828u;
        // 0x21382c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213830u;
        goto label_213830;
    }
    ctx->pc = 0x213828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213830u);
        ctx->pc = 0x21382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213828u;
        // 0x21382c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213828u, 0x213830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213830u;
label_213830:
    // 0x213830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213834:
    // 0x213834: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x213834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_213838:
    // 0x213838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21383c:
    // 0x21383c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_213840:
    // 0x213840: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_213844:
    if (ctx->pc == 0x213844u) {
        ctx->pc = 0x213844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213840u;
        // 0x213844: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213848u;
        goto label_213848;
    }
    ctx->pc = 0x213840u;
    {
        const bool branch_taken_0x213840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213840u;
        // 0x213844: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213840) {
            ctx->pc = 0x213890u;
            goto label_213890;
        }
    }
    ctx->pc = 0x213848u;
label_213848:
    // 0x213848: 0xc084e2a  jal         func_2138A8
label_21384c:
    if (ctx->pc == 0x21384Cu) {
        ctx->pc = 0x213850u;
        goto label_213850;
    }
    ctx->pc = 0x213848u;
    SET_GPR_U32(ctx, 31, 0x213850u);
    ctx->pc = 0x2138A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2138A8u, 0x213848u, 0x213850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213850u;
label_213850:
    // 0x213850: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x213850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213854:
    // 0x213854: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_213858:
    if (ctx->pc == 0x213858u) {
        ctx->pc = 0x213858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213854u;
        // 0x213858: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21385Cu;
        goto label_21385c;
    }
    ctx->pc = 0x213854u;
    {
        const bool branch_taken_0x213854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213854u;
        // 0x213858: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213854) {
            ctx->pc = 0x213890u;
            goto label_213890;
        }
    }
    ctx->pc = 0x21385Cu;
label_21385c:
    // 0x21385c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_213860:
    if (ctx->pc == 0x213860u) {
        ctx->pc = 0x213860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21385Cu;
        // 0x213860: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213864u;
        goto label_213864;
    }
    ctx->pc = 0x21385Cu;
    {
        const bool branch_taken_0x21385c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x213860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21385Cu;
        // 0x213860: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21385c) {
            ctx->pc = 0x21388Cu;
            goto label_21388c;
        }
    }
    ctx->pc = 0x213864u;
label_213864:
    // 0x213864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213868:
    // 0x213868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21386c:
    // 0x21386c: 0xc084e2a  jal         func_2138A8
label_213870:
    if (ctx->pc == 0x213870u) {
        ctx->pc = 0x213870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21386Cu;
        // 0x213870: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213874u;
        goto label_213874;
    }
    ctx->pc = 0x21386Cu;
    SET_GPR_U32(ctx, 31, 0x213874u);
    ctx->pc = 0x213870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21386Cu;
    // 0x213870: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2138A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2138A8u, 0x21386Cu, 0x213874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213874u;
label_213874:
    // 0x213874: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x213874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_213878:
    // 0x213878: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
label_21387c:
    if (ctx->pc == 0x21387Cu) {
        ctx->pc = 0x21387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213878u;
        // 0x21387c: 0x2463a1f0  addiu       $v1, $v1, -0x5E10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213880u;
        goto label_213880;
    }
    ctx->pc = 0x213878u;
    {
        const bool branch_taken_0x213878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x21387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213878u;
        // 0x21387c: 0x2463a1f0  addiu       $v1, $v1, -0x5E10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213878) {
            ctx->pc = 0x21388Cu;
            goto label_21388c;
        }
    }
    ctx->pc = 0x213880u;
label_213880:
    // 0x213880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_213884:
    // 0x213884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x213884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213888:
    // 0x213888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x213888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21388c:
    // 0x21388c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213890:
    // 0x213890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_213894:
    // 0x213894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_213898:
    // 0x213898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21389c:
    // 0x21389c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21389cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2138a0:
    // 0x2138a0: 0x3e00008  jr          $ra
label_2138a4:
    if (ctx->pc == 0x2138A4u) {
        ctx->pc = 0x2138A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138A0u;
        // 0x2138a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2138A8u;
        goto label_fallthrough_0x2138a0;
    }
    ctx->pc = 0x2138A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2138A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138A0u;
        // 0x2138a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2138A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2138a0:
    ctx->pc = 0x2138A8u;
}
