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

// Function: sub_0023E728
// Address: 0x23e728 - 0x23e7ec
void sub_0023E728_0x23e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E728_0x23e728");
#endif

    switch (ctx->pc) {
        case 0x23e728u: goto label_23e728;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e730u: goto label_23e730;
        case 0x23e734u: goto label_23e734;
        case 0x23e738u: goto label_23e738;
        case 0x23e73cu: goto label_23e73c;
        case 0x23e740u: goto label_23e740;
        case 0x23e744u: goto label_23e744;
        case 0x23e748u: goto label_23e748;
        case 0x23e74cu: goto label_23e74c;
        case 0x23e750u: goto label_23e750;
        case 0x23e754u: goto label_23e754;
        case 0x23e758u: goto label_23e758;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e760u: goto label_23e760;
        case 0x23e764u: goto label_23e764;
        case 0x23e768u: goto label_23e768;
        case 0x23e76cu: goto label_23e76c;
        case 0x23e770u: goto label_23e770;
        case 0x23e774u: goto label_23e774;
        case 0x23e778u: goto label_23e778;
        case 0x23e77cu: goto label_23e77c;
        case 0x23e780u: goto label_23e780;
        case 0x23e784u: goto label_23e784;
        case 0x23e788u: goto label_23e788;
        case 0x23e78cu: goto label_23e78c;
        case 0x23e790u: goto label_23e790;
        case 0x23e794u: goto label_23e794;
        case 0x23e798u: goto label_23e798;
        case 0x23e79cu: goto label_23e79c;
        case 0x23e7a0u: goto label_23e7a0;
        case 0x23e7a4u: goto label_23e7a4;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7acu: goto label_23e7ac;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e7b4u: goto label_23e7b4;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7bcu: goto label_23e7bc;
        case 0x23e7c0u: goto label_23e7c0;
        case 0x23e7c4u: goto label_23e7c4;
        case 0x23e7c8u: goto label_23e7c8;
        case 0x23e7ccu: goto label_23e7cc;
        case 0x23e7d0u: goto label_23e7d0;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7d8u: goto label_23e7d8;
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e7e0u: goto label_23e7e0;
        case 0x23e7e4u: goto label_23e7e4;
        case 0x23e7e8u: goto label_23e7e8;
        default: break;
    }

    ctx->pc = 0x23e728u;

label_23e728:
    // 0x23e728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23e72c:
    // 0x23e72c: 0x2cc30034  sltiu       $v1, $a2, 0x34
    ctx->pc = 0x23e72cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
label_23e730:
    // 0x23e730: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23e730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23e734:
    // 0x23e734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23e734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e738:
    // 0x23e738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23e73c:
    // 0x23e73c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x23e73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_23e740:
    // 0x23e740: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_23e744:
    // 0x23e744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e748:
    // 0x23e748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23e74c:
    // 0x23e74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23e74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e750:
    // 0x23e750: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_23e754:
    if (ctx->pc == 0x23E754u) {
        ctx->pc = 0x23E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E750u;
        // 0x23e754: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E758u;
        goto label_23e758;
    }
    ctx->pc = 0x23E750u;
    {
        const bool branch_taken_0x23e750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E750u;
        // 0x23e754: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e750) {
            ctx->pc = 0x23E7D4u;
            goto label_23e7d4;
        }
    }
    ctx->pc = 0x23E758u;
label_23e758:
    // 0x23e758: 0x2411fff8  addiu       $s1, $zero, -0x8
    ctx->pc = 0x23e758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_23e75c:
    // 0x23e75c: 0x918824  and         $s1, $a0, $s1
    ctx->pc = 0x23e75cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_23e760:
    // 0x23e760: 0xc049590  jal         func_125640
label_23e764:
    if (ctx->pc == 0x23E764u) {
        ctx->pc = 0x23E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E760u;
        // 0x23e764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E768u;
        goto label_23e768;
    }
    ctx->pc = 0x23E760u;
    SET_GPR_U32(ctx, 31, 0x23E768u);
    ctx->pc = 0x23E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E760u;
    // 0x23e764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23E760u, 0x23E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E768u;
label_23e768:
    // 0x23e768: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x23e768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_23e76c:
    // 0x23e76c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e770:
    // 0x23e770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e774:
    // 0x23e774: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x23e774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_23e778:
    // 0x23e778: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23e77c:
    // 0x23e77c: 0x40f809  jalr        $v0
label_23e780:
    if (ctx->pc == 0x23E780u) {
        ctx->pc = 0x23E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E77Cu;
        // 0x23e780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E784u;
        goto label_23e784;
    }
    ctx->pc = 0x23E77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E784u);
        ctx->pc = 0x23E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E77Cu;
        // 0x23e780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E77Cu, 0x23E784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E784u;
label_23e784:
    // 0x23e784: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e788:
    // 0x23e788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e78c:
    // 0x23e78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23e790:
    // 0x23e790: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23e794:
    // 0x23e794: 0x40f809  jalr        $v0
label_23e798:
    if (ctx->pc == 0x23E798u) {
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E79Cu;
        goto label_23e79c;
    }
    ctx->pc = 0x23E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E79Cu);
        ctx->pc = 0x23E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E794u;
        // 0x23e798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E794u, 0x23E79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E79Cu;
label_23e79c:
    // 0x23e79c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x23e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_23e7a0:
    // 0x23e7a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23e7a4:
    // 0x23e7a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23e7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e7a8:
    // 0x23e7a8: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x23e7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_23e7ac:
    // 0x23e7ac: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_23e7b0:
    // 0x23e7b0: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x23e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_23e7b4:
    // 0x23e7b4: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x23e7b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_23e7b8:
    // 0x23e7b8: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x23e7b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
label_23e7bc:
    // 0x23e7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e7c0:
    // 0x23e7c0: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x23e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_23e7c4:
    // 0x23e7c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_23e7c8:
    // 0x23e7c8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x23e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_23e7cc:
    // 0x23e7cc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x23e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_23e7d0:
    // 0x23e7d0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x23e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_23e7d4:
    // 0x23e7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e7d8:
    // 0x23e7d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23e7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23e7dc:
    // 0x23e7dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23e7dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23e7e0:
    // 0x23e7e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23e7e4:
    // 0x23e7e4: 0x3e00008  jr          $ra
label_23e7e8:
    if (ctx->pc == 0x23E7E8u) {
        ctx->pc = 0x23E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7E4u;
        // 0x23e7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7ECu;
        goto label_fallthrough_0x23e7e4;
    }
    ctx->pc = 0x23E7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7E4u;
        // 0x23e7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23e7e4:
    ctx->pc = 0x23E7ECu;
}
