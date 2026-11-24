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

// Function: sub_0023B6D0
// Address: 0x23b6d0 - 0x23b7fc
void sub_0023B6D0_0x23b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B6D0_0x23b6d0");
#endif

    switch (ctx->pc) {
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        case 0x23b780u: goto label_23b780;
        case 0x23b784u: goto label_23b784;
        case 0x23b788u: goto label_23b788;
        case 0x23b78cu: goto label_23b78c;
        case 0x23b790u: goto label_23b790;
        case 0x23b794u: goto label_23b794;
        case 0x23b798u: goto label_23b798;
        case 0x23b79cu: goto label_23b79c;
        case 0x23b7a0u: goto label_23b7a0;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7a8u: goto label_23b7a8;
        case 0x23b7acu: goto label_23b7ac;
        case 0x23b7b0u: goto label_23b7b0;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b7b8u: goto label_23b7b8;
        case 0x23b7bcu: goto label_23b7bc;
        case 0x23b7c0u: goto label_23b7c0;
        case 0x23b7c4u: goto label_23b7c4;
        case 0x23b7c8u: goto label_23b7c8;
        case 0x23b7ccu: goto label_23b7cc;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b7d4u: goto label_23b7d4;
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7dcu: goto label_23b7dc;
        case 0x23b7e0u: goto label_23b7e0;
        case 0x23b7e4u: goto label_23b7e4;
        case 0x23b7e8u: goto label_23b7e8;
        case 0x23b7ecu: goto label_23b7ec;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b7f4u: goto label_23b7f4;
        case 0x23b7f8u: goto label_23b7f8;
        default: break;
    }

    ctx->pc = 0x23b6d0u;

label_23b6d0:
    // 0x23b6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b6d4:
    // 0x23b6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23b6d8:
    // 0x23b6d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b6dc:
    // 0x23b6dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23b6e0:
    // 0x23b6e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b6e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b6e4:
    // 0x23b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b6e8:
    // 0x23b6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23b6ec:
    // 0x23b6ec: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_23b6f0:
    if (ctx->pc == 0x23B6F0u) {
        ctx->pc = 0x23B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6ECu;
        // 0x23b6f0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6F4u;
        goto label_23b6f4;
    }
    ctx->pc = 0x23B6ECu;
    {
        const bool branch_taken_0x23b6ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6ECu;
        // 0x23b6f0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6ec) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B6F4u;
label_23b6f4:
    // 0x23b6f4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23b6f8:
    // 0x23b6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b6fc:
    // 0x23b6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b700:
    // 0x23b700: 0x2484b580  addiu       $a0, $a0, -0x4A80
    ctx->pc = 0x23b700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948224));
label_23b704:
    // 0x23b704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b708:
    // 0x23b708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b70c:
    // 0x23b70c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b710:
    // 0x23b710: 0x808baa4  j           func_22EA90
label_23b714:
    if (ctx->pc == 0x23B714u) {
        ctx->pc = 0x23B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B710u;
        // 0x23b714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B718u;
        goto label_23b718;
    }
    ctx->pc = 0x23B710u;
    ctx->pc = 0x23B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B710u;
    // 0x23b714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23B718u;
label_23b718:
    // 0x23b718: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23b71c:
    // 0x23b71c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23b720:
    if (ctx->pc == 0x23B720u) {
        ctx->pc = 0x23B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B71Cu;
        // 0x23b720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B724u;
        goto label_23b724;
    }
    ctx->pc = 0x23B71Cu;
    {
        const bool branch_taken_0x23b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B71Cu;
        // 0x23b720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b71c) {
            ctx->pc = 0x23B738u;
            goto label_23b738;
        }
    }
    ctx->pc = 0x23B724u;
label_23b724:
    // 0x23b724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b728:
    // 0x23b728: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b72c:
    // 0x23b72c: 0x40f809  jalr        $v0
label_23b730:
    if (ctx->pc == 0x23B730u) {
        ctx->pc = 0x23B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B72Cu;
        // 0x23b730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B734u;
        goto label_23b734;
    }
    ctx->pc = 0x23B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B734u);
        ctx->pc = 0x23B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B72Cu;
        // 0x23b730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B72Cu, 0x23B734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B734u;
label_23b734:
    // 0x23b734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b738:
    // 0x23b738: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x23b738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23b73c:
    // 0x23b73c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b740:
    // 0x23b740: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_23b744:
    if (ctx->pc == 0x23B744u) {
        ctx->pc = 0x23B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B740u;
        // 0x23b744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B748u;
        goto label_23b748;
    }
    ctx->pc = 0x23B740u;
    {
        const bool branch_taken_0x23b740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B740u;
        // 0x23b744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b740) {
            ctx->pc = 0x23B7DCu;
            goto label_23b7dc;
        }
    }
    ctx->pc = 0x23B748u;
label_23b748:
    // 0x23b748: 0x8223006c  lb          $v1, 0x6C($s1)
    ctx->pc = 0x23b748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_23b74c:
    // 0x23b74c: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_23b750:
    if (ctx->pc == 0x23B750u) {
        ctx->pc = 0x23B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B74Cu;
        // 0x23b750: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B754u;
        goto label_23b754;
    }
    ctx->pc = 0x23B74Cu;
    {
        const bool branch_taken_0x23b74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b74c) {
            ctx->pc = 0x23B750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B74Cu;
            // 0x23b750: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7E0u;
            goto label_23b7e0;
        }
    }
    ctx->pc = 0x23B754u;
label_23b754:
    // 0x23b754: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
label_23b758:
    if (ctx->pc == 0x23B758u) {
        ctx->pc = 0x23B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B754u;
        // 0x23b758: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B75Cu;
        goto label_23b75c;
    }
    ctx->pc = 0x23B754u;
    {
        const bool branch_taken_0x23b754 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b754) {
            ctx->pc = 0x23B758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B754u;
            // 0x23b758: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7E0u;
            goto label_23b7e0;
        }
    }
    ctx->pc = 0x23B75Cu;
label_23b75c:
    // 0x23b75c: 0xc08da9a  jal         func_236A68
label_23b760:
    if (ctx->pc == 0x23B760u) {
        ctx->pc = 0x23B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B75Cu;
        // 0x23b760: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B764u;
        goto label_23b764;
    }
    ctx->pc = 0x23B75Cu;
    SET_GPR_U32(ctx, 31, 0x23B764u);
    ctx->pc = 0x23B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B75Cu;
    // 0x23b760: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x23B75Cu, 0x23B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B764u;
label_23b764:
    // 0x23b764: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23b768:
    // 0x23b768: 0xc08db3e  jal         func_236CF8
label_23b76c:
    if (ctx->pc == 0x23B76Cu) {
        ctx->pc = 0x23B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B768u;
        // 0x23b76c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B770u;
        goto label_23b770;
    }
    ctx->pc = 0x23B768u;
    SET_GPR_U32(ctx, 31, 0x23B770u);
    ctx->pc = 0x23B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B768u;
    // 0x23b76c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CF8u, 0x23B768u, 0x23B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B770u;
label_23b770:
    // 0x23b770: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23b774:
    // 0x23b774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b778:
    // 0x23b778: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_23b77c:
    // 0x23b77c: 0x26050ffe  addiu       $a1, $s0, 0xFFE
    ctx->pc = 0x23b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4094));
label_23b780:
    // 0x23b780: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x23b780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23b784:
    // 0x23b784: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x23b784u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_23b788:
    // 0x23b788: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_23b78c:
    // 0x23b78c: 0xc08db50  jal         func_236D40
label_23b790:
    if (ctx->pc == 0x23B790u) {
        ctx->pc = 0x23B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B78Cu;
        // 0x23b790: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B794u;
        goto label_23b794;
    }
    ctx->pc = 0x23B78Cu;
    SET_GPR_U32(ctx, 31, 0x23B794u);
    ctx->pc = 0x23B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B78Cu;
    // 0x23b790: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D40u, 0x23B78Cu, 0x23B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B794u;
label_23b794:
    // 0x23b794: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_23b798:
    // 0x23b798: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
label_23b79c:
    // 0x23b79c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x23b79cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_23b7a0:
    // 0x23b7a0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x23b7a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_23b7a4:
    // 0x23b7a4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_23b7a8:
    // 0x23b7a8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_23b7ac:
    // 0x23b7ac: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x23b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23b7b0:
    // 0x23b7b0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_23b7b4:
    if (ctx->pc == 0x23B7B4u) {
        ctx->pc = 0x23B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7B0u;
        // 0x23b7b4: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7B8u;
        goto label_23b7b8;
    }
    ctx->pc = 0x23B7B0u;
    {
        const bool branch_taken_0x23b7b0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x23B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7B0u;
        // 0x23b7b4: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7b0) {
            ctx->pc = 0x23B7C0u;
            goto label_23b7c0;
        }
    }
    ctx->pc = 0x23B7B8u;
label_23b7b8:
    // 0x23b7b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_23b7bc:
    if (ctx->pc == 0x23B7BCu) {
        ctx->pc = 0x23B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7B8u;
        // 0x23b7bc: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7C0u;
        goto label_23b7c0;
    }
    ctx->pc = 0x23B7B8u;
    {
        const bool branch_taken_0x23b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7B8u;
        // 0x23b7bc: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7b8) {
            ctx->pc = 0x23B7DCu;
            goto label_23b7dc;
        }
    }
    ctx->pc = 0x23B7C0u;
label_23b7c0:
    // 0x23b7c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_23b7c4:
    if (ctx->pc == 0x23B7C4u) {
        ctx->pc = 0x23B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7C0u;
        // 0x23b7c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7C8u;
        goto label_23b7c8;
    }
    ctx->pc = 0x23B7C0u;
    {
        const bool branch_taken_0x23b7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7c0) {
            ctx->pc = 0x23B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B7C0u;
            // 0x23b7c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B7C8u;
label_23b7c8:
    // 0x23b7c8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x23b7c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23b7cc:
    // 0x23b7cc: 0x1012  mflo        $v0
    ctx->pc = 0x23b7ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23b7d0:
    // 0x23b7d0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x23b7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_23b7d4:
    // 0x23b7d4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x23b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_23b7d8:
    // 0x23b7d8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x23b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_23b7dc:
    // 0x23b7dc: 0xa233006c  sb          $s3, 0x6C($s1)
    ctx->pc = 0x23b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
label_23b7e0:
    // 0x23b7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b7e4:
    // 0x23b7e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b7e8:
    // 0x23b7e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b7e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b7ec:
    // 0x23b7ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b7ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b7f0:
    // 0x23b7f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b7f4:
    // 0x23b7f4: 0x3e00008  jr          $ra
label_23b7f8:
    if (ctx->pc == 0x23B7F8u) {
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F4u;
        // 0x23b7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7FCu;
        goto label_fallthrough_0x23b7f4;
    }
    ctx->pc = 0x23B7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7F4u;
        // 0x23b7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b7f4:
    ctx->pc = 0x23B7FCu;
}
