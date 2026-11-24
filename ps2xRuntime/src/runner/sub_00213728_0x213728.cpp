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

// Function: sub_00213728
// Address: 0x213728 - 0x213800
void sub_00213728_0x213728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213728_0x213728");
#endif

    switch (ctx->pc) {
        case 0x213728u: goto label_213728;
        case 0x21372cu: goto label_21372c;
        case 0x213730u: goto label_213730;
        case 0x213734u: goto label_213734;
        case 0x213738u: goto label_213738;
        case 0x21373cu: goto label_21373c;
        case 0x213740u: goto label_213740;
        case 0x213744u: goto label_213744;
        case 0x213748u: goto label_213748;
        case 0x21374cu: goto label_21374c;
        case 0x213750u: goto label_213750;
        case 0x213754u: goto label_213754;
        case 0x213758u: goto label_213758;
        case 0x21375cu: goto label_21375c;
        case 0x213760u: goto label_213760;
        case 0x213764u: goto label_213764;
        case 0x213768u: goto label_213768;
        case 0x21376cu: goto label_21376c;
        case 0x213770u: goto label_213770;
        case 0x213774u: goto label_213774;
        case 0x213778u: goto label_213778;
        case 0x21377cu: goto label_21377c;
        case 0x213780u: goto label_213780;
        case 0x213784u: goto label_213784;
        case 0x213788u: goto label_213788;
        case 0x21378cu: goto label_21378c;
        case 0x213790u: goto label_213790;
        case 0x213794u: goto label_213794;
        case 0x213798u: goto label_213798;
        case 0x21379cu: goto label_21379c;
        case 0x2137a0u: goto label_2137a0;
        case 0x2137a4u: goto label_2137a4;
        case 0x2137a8u: goto label_2137a8;
        case 0x2137acu: goto label_2137ac;
        case 0x2137b0u: goto label_2137b0;
        case 0x2137b4u: goto label_2137b4;
        case 0x2137b8u: goto label_2137b8;
        case 0x2137bcu: goto label_2137bc;
        case 0x2137c0u: goto label_2137c0;
        case 0x2137c4u: goto label_2137c4;
        case 0x2137c8u: goto label_2137c8;
        case 0x2137ccu: goto label_2137cc;
        case 0x2137d0u: goto label_2137d0;
        case 0x2137d4u: goto label_2137d4;
        case 0x2137d8u: goto label_2137d8;
        case 0x2137dcu: goto label_2137dc;
        case 0x2137e0u: goto label_2137e0;
        case 0x2137e4u: goto label_2137e4;
        case 0x2137e8u: goto label_2137e8;
        case 0x2137ecu: goto label_2137ec;
        case 0x2137f0u: goto label_2137f0;
        case 0x2137f4u: goto label_2137f4;
        case 0x2137f8u: goto label_2137f8;
        case 0x2137fcu: goto label_2137fc;
        default: break;
    }

    ctx->pc = 0x213728u;

label_213728:
    // 0x213728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x213728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21372c:
    // 0x21372c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x21372cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_213730:
    // 0x213730: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_213734:
    // 0x213734: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x213734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_213738:
    // 0x213738: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x213738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_21373c:
    // 0x21373c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21373cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_213740:
    // 0x213740: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x213740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_213744:
    // 0x213744: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x213744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_213748:
    // 0x213748: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x213748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_21374c:
    // 0x21374c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21374cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213750:
    // 0x213750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x213750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_213754:
    // 0x213754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x213754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213758:
    // 0x213758: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x213758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_21375c:
    // 0x21375c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21375cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_213760:
    // 0x213760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x213760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_213764:
    // 0x213764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213768:
    // 0x213768: 0x8ea31f90  lw          $v1, 0x1F90($s5)
    ctx->pc = 0x213768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8080)));
label_21376c:
    // 0x21376c: 0x1068001b  beq         $v1, $t0, . + 4 + (0x1B << 2)
label_213770:
    if (ctx->pc == 0x213770u) {
        ctx->pc = 0x213770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21376Cu;
        // 0x213770: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213774u;
        goto label_213774;
    }
    ctx->pc = 0x21376Cu;
    {
        const bool branch_taken_0x21376c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x213770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21376Cu;
        // 0x213770: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21376c) {
            ctx->pc = 0x2137DCu;
            goto label_2137dc;
        }
    }
    ctx->pc = 0x213774u;
label_213774:
    // 0x213774: 0xc083d20  jal         func_20F480
label_213778:
    if (ctx->pc == 0x213778u) {
        ctx->pc = 0x21377Cu;
        goto label_21377c;
    }
    ctx->pc = 0x213774u;
    SET_GPR_U32(ctx, 31, 0x21377Cu);
    ctx->pc = 0x20F480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F480u, 0x213774u, 0x21377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21377Cu;
label_21377c:
    // 0x21377c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21377cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_213780:
    // 0x213780: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x213780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_213784:
    // 0x213784: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x213784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_213788:
    // 0x213788: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x213788u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21378c:
    // 0x21378c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213790:
    // 0x213790: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x213790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_213794:
    // 0x213794: 0x8fb30008  lw          $s3, 0x8($sp)
    ctx->pc = 0x213794u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_213798:
    // 0x213798: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_21379c:
    if (ctx->pc == 0x21379Cu) {
        ctx->pc = 0x21379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213798u;
        // 0x21379c: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137A0u;
        goto label_2137a0;
    }
    ctx->pc = 0x213798u;
    {
        const bool branch_taken_0x213798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213798u;
        // 0x21379c: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213798) {
            ctx->pc = 0x2137DCu;
            goto label_2137dc;
        }
    }
    ctx->pc = 0x2137A0u;
label_2137a0:
    // 0x2137a0: 0xc084e00  jal         func_213800
label_2137a4:
    if (ctx->pc == 0x2137A4u) {
        ctx->pc = 0x2137A8u;
        goto label_2137a8;
    }
    ctx->pc = 0x2137A0u;
    SET_GPR_U32(ctx, 31, 0x2137A8u);
    ctx->pc = 0x213800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213800u, 0x2137A0u, 0x2137A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137A8u;
label_2137a8:
    // 0x2137a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2137a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2137ac:
    // 0x2137ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2137acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2137b0:
    // 0x2137b0: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
label_2137b4:
    if (ctx->pc == 0x2137B4u) {
        ctx->pc = 0x2137B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137B0u;
        // 0x2137b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137B8u;
        goto label_2137b8;
    }
    ctx->pc = 0x2137B0u;
    {
        const bool branch_taken_0x2137b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2137b0) {
            ctx->pc = 0x2137B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2137B0u;
            // 0x2137b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2137DCu;
            goto label_2137dc;
        }
    }
    ctx->pc = 0x2137B8u;
label_2137b8:
    // 0x2137b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2137bc:
    if (ctx->pc == 0x2137BCu) {
        ctx->pc = 0x2137BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137B8u;
        // 0x2137bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137C0u;
        goto label_2137c0;
    }
    ctx->pc = 0x2137B8u;
    {
        const bool branch_taken_0x2137b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137B8u;
        // 0x2137bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137b8) {
            ctx->pc = 0x2137C8u;
            goto label_2137c8;
        }
    }
    ctx->pc = 0x2137C0u;
label_2137c0:
    // 0x2137c0: 0x240f809  jalr        $s2
label_2137c4:
    if (ctx->pc == 0x2137C4u) {
        ctx->pc = 0x2137C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C0u;
        // 0x2137c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137C8u;
        goto label_2137c8;
    }
    ctx->pc = 0x2137C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2137C8u);
        ctx->pc = 0x2137C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C0u;
        // 0x2137c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137C0u, 0x2137C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2137C8u;
label_2137c8:
    // 0x2137c8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2137cc:
    if (ctx->pc == 0x2137CCu) {
        ctx->pc = 0x2137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C8u;
        // 0x2137cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137D0u;
        goto label_2137d0;
    }
    ctx->pc = 0x2137C8u;
    {
        const bool branch_taken_0x2137c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C8u;
        // 0x2137cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137c8) {
            ctx->pc = 0x2137D8u;
            goto label_2137d8;
        }
    }
    ctx->pc = 0x2137D0u;
label_2137d0:
    // 0x2137d0: 0x260f809  jalr        $s3
label_2137d4:
    if (ctx->pc == 0x2137D4u) {
        ctx->pc = 0x2137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D0u;
        // 0x2137d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137D8u;
        goto label_2137d8;
    }
    ctx->pc = 0x2137D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2137D8u);
        ctx->pc = 0x2137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D0u;
        // 0x2137d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137D0u, 0x2137D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2137D8u;
label_2137d8:
    // 0x2137d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2137d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2137dc:
    // 0x2137dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2137dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2137e0:
    // 0x2137e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2137e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2137e4:
    // 0x2137e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2137e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2137e8:
    // 0x2137e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2137e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2137ec:
    // 0x2137ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2137ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2137f0:
    // 0x2137f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2137f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2137f4:
    // 0x2137f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2137f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2137f8:
    // 0x2137f8: 0x3e00008  jr          $ra
label_2137fc:
    if (ctx->pc == 0x2137FCu) {
        ctx->pc = 0x2137FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137F8u;
        // 0x2137fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213800u;
        goto label_fallthrough_0x2137f8;
    }
    ctx->pc = 0x2137F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2137FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137F8u;
        // 0x2137fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2137f8:
    ctx->pc = 0x213800u;
}
