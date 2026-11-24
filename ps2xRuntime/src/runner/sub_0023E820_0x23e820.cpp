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

// Function: sub_0023E820
// Address: 0x23e820 - 0x23e8cc
void sub_0023E820_0x23e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E820_0x23e820");
#endif

    switch (ctx->pc) {
        case 0x23e820u: goto label_23e820;
        case 0x23e824u: goto label_23e824;
        case 0x23e828u: goto label_23e828;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e830u: goto label_23e830;
        case 0x23e834u: goto label_23e834;
        case 0x23e838u: goto label_23e838;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e840u: goto label_23e840;
        case 0x23e844u: goto label_23e844;
        case 0x23e848u: goto label_23e848;
        case 0x23e84cu: goto label_23e84c;
        case 0x23e850u: goto label_23e850;
        case 0x23e854u: goto label_23e854;
        case 0x23e858u: goto label_23e858;
        case 0x23e85cu: goto label_23e85c;
        case 0x23e860u: goto label_23e860;
        case 0x23e864u: goto label_23e864;
        case 0x23e868u: goto label_23e868;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e870u: goto label_23e870;
        case 0x23e874u: goto label_23e874;
        case 0x23e878u: goto label_23e878;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e880u: goto label_23e880;
        case 0x23e884u: goto label_23e884;
        case 0x23e888u: goto label_23e888;
        case 0x23e88cu: goto label_23e88c;
        case 0x23e890u: goto label_23e890;
        case 0x23e894u: goto label_23e894;
        case 0x23e898u: goto label_23e898;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8acu: goto label_23e8ac;
        case 0x23e8b0u: goto label_23e8b0;
        case 0x23e8b4u: goto label_23e8b4;
        case 0x23e8b8u: goto label_23e8b8;
        case 0x23e8bcu: goto label_23e8bc;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8c4u: goto label_23e8c4;
        case 0x23e8c8u: goto label_23e8c8;
        default: break;
    }

    ctx->pc = 0x23e820u;

label_23e820:
    // 0x23e820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23e824:
    // 0x23e824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23e828:
    // 0x23e828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e82c:
    // 0x23e82c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23e830:
    // 0x23e830: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23e830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e834:
    // 0x23e834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23e838:
    // 0x23e838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e83c:
    // 0x23e83c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_23e840:
    if (ctx->pc == 0x23E840u) {
        ctx->pc = 0x23E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E83Cu;
        // 0x23e840: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E844u;
        goto label_23e844;
    }
    ctx->pc = 0x23E83Cu;
    {
        const bool branch_taken_0x23e83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E83Cu;
        // 0x23e840: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e83c) {
            ctx->pc = 0x23E8B4u;
            goto label_23e8b4;
        }
    }
    ctx->pc = 0x23E844u;
label_23e844:
    // 0x23e844: 0xc049590  jal         func_125640
label_23e848:
    if (ctx->pc == 0x23E848u) {
        ctx->pc = 0x23E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E844u;
        // 0x23e848: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E84Cu;
        goto label_23e84c;
    }
    ctx->pc = 0x23E844u;
    SET_GPR_U32(ctx, 31, 0x23E84Cu);
    ctx->pc = 0x23E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E844u;
    // 0x23e848: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23E844u, 0x23E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E84Cu;
label_23e84c:
    // 0x23e84c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x23e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_23e850:
    // 0x23e850: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e854:
    // 0x23e854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e858:
    // 0x23e858: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x23e858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_23e85c:
    // 0x23e85c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23e860:
    // 0x23e860: 0x40f809  jalr        $v0
label_23e864:
    if (ctx->pc == 0x23E864u) {
        ctx->pc = 0x23E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E860u;
        // 0x23e864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E868u;
        goto label_23e868;
    }
    ctx->pc = 0x23E860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E868u);
        ctx->pc = 0x23E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E860u;
        // 0x23e864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E860u, 0x23E868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E868u;
label_23e868:
    // 0x23e868: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e86c:
    // 0x23e86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e870:
    // 0x23e870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e874:
    // 0x23e874: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23e878:
    // 0x23e878: 0x40f809  jalr        $v0
label_23e87c:
    if (ctx->pc == 0x23E87Cu) {
        ctx->pc = 0x23E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E878u;
        // 0x23e87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E880u;
        goto label_23e880;
    }
    ctx->pc = 0x23E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E880u);
        ctx->pc = 0x23E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E878u;
        // 0x23e87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E878u, 0x23E880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E880u;
label_23e880:
    // 0x23e880: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x23e880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_23e884:
    // 0x23e884: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23e888:
    // 0x23e888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e88c:
    // 0x23e88c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_23e890:
    // 0x23e890: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x23e890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_23e894:
    // 0x23e894: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x23e894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_23e898:
    // 0x23e898: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x23e898u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_23e89c:
    // 0x23e89c: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x23e89cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
label_23e8a0:
    // 0x23e8a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x23e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_23e8a4:
    // 0x23e8a4: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x23e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_23e8a8:
    // 0x23e8a8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x23e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_23e8ac:
    // 0x23e8ac: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x23e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_23e8b0:
    // 0x23e8b0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x23e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_23e8b4:
    // 0x23e8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e8b8:
    // 0x23e8b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23e8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23e8bc:
    // 0x23e8bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23e8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23e8c0:
    // 0x23e8c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23e8c4:
    // 0x23e8c4: 0x3e00008  jr          $ra
label_23e8c8:
    if (ctx->pc == 0x23E8C8u) {
        ctx->pc = 0x23E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C4u;
        // 0x23e8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E8CCu;
        goto label_fallthrough_0x23e8c4;
    }
    ctx->pc = 0x23E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C4u;
        // 0x23e8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23e8c4:
    ctx->pc = 0x23E8CCu;
}
