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

// Function: sub_0010B6C8
// Address: 0x10b6c8 - 0x10b88c
void sub_0010B6C8_0x10b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6C8_0x10b6c8");
#endif

    switch (ctx->pc) {
        case 0x10b6c8u: goto label_10b6c8;
        case 0x10b6ccu: goto label_10b6cc;
        case 0x10b6d0u: goto label_10b6d0;
        case 0x10b6d4u: goto label_10b6d4;
        case 0x10b6d8u: goto label_10b6d8;
        case 0x10b6dcu: goto label_10b6dc;
        case 0x10b6e0u: goto label_10b6e0;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6ecu: goto label_10b6ec;
        case 0x10b6f0u: goto label_10b6f0;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b6f8u: goto label_10b6f8;
        case 0x10b6fcu: goto label_10b6fc;
        case 0x10b700u: goto label_10b700;
        case 0x10b704u: goto label_10b704;
        case 0x10b708u: goto label_10b708;
        case 0x10b70cu: goto label_10b70c;
        case 0x10b710u: goto label_10b710;
        case 0x10b714u: goto label_10b714;
        case 0x10b718u: goto label_10b718;
        case 0x10b71cu: goto label_10b71c;
        case 0x10b720u: goto label_10b720;
        case 0x10b724u: goto label_10b724;
        case 0x10b728u: goto label_10b728;
        case 0x10b72cu: goto label_10b72c;
        case 0x10b730u: goto label_10b730;
        case 0x10b734u: goto label_10b734;
        case 0x10b738u: goto label_10b738;
        case 0x10b73cu: goto label_10b73c;
        case 0x10b740u: goto label_10b740;
        case 0x10b744u: goto label_10b744;
        case 0x10b748u: goto label_10b748;
        case 0x10b74cu: goto label_10b74c;
        case 0x10b750u: goto label_10b750;
        case 0x10b754u: goto label_10b754;
        case 0x10b758u: goto label_10b758;
        case 0x10b75cu: goto label_10b75c;
        case 0x10b760u: goto label_10b760;
        case 0x10b764u: goto label_10b764;
        case 0x10b768u: goto label_10b768;
        case 0x10b76cu: goto label_10b76c;
        case 0x10b770u: goto label_10b770;
        case 0x10b774u: goto label_10b774;
        case 0x10b778u: goto label_10b778;
        case 0x10b77cu: goto label_10b77c;
        case 0x10b780u: goto label_10b780;
        case 0x10b784u: goto label_10b784;
        case 0x10b788u: goto label_10b788;
        case 0x10b78cu: goto label_10b78c;
        case 0x10b790u: goto label_10b790;
        case 0x10b794u: goto label_10b794;
        case 0x10b798u: goto label_10b798;
        case 0x10b79cu: goto label_10b79c;
        case 0x10b7a0u: goto label_10b7a0;
        case 0x10b7a4u: goto label_10b7a4;
        case 0x10b7a8u: goto label_10b7a8;
        case 0x10b7acu: goto label_10b7ac;
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b7b4u: goto label_10b7b4;
        case 0x10b7b8u: goto label_10b7b8;
        case 0x10b7bcu: goto label_10b7bc;
        case 0x10b7c0u: goto label_10b7c0;
        case 0x10b7c4u: goto label_10b7c4;
        case 0x10b7c8u: goto label_10b7c8;
        case 0x10b7ccu: goto label_10b7cc;
        case 0x10b7d0u: goto label_10b7d0;
        case 0x10b7d4u: goto label_10b7d4;
        case 0x10b7d8u: goto label_10b7d8;
        case 0x10b7dcu: goto label_10b7dc;
        case 0x10b7e0u: goto label_10b7e0;
        case 0x10b7e4u: goto label_10b7e4;
        case 0x10b7e8u: goto label_10b7e8;
        case 0x10b7ecu: goto label_10b7ec;
        case 0x10b7f0u: goto label_10b7f0;
        case 0x10b7f4u: goto label_10b7f4;
        case 0x10b7f8u: goto label_10b7f8;
        case 0x10b7fcu: goto label_10b7fc;
        case 0x10b800u: goto label_10b800;
        case 0x10b804u: goto label_10b804;
        case 0x10b808u: goto label_10b808;
        case 0x10b80cu: goto label_10b80c;
        case 0x10b810u: goto label_10b810;
        case 0x10b814u: goto label_10b814;
        case 0x10b818u: goto label_10b818;
        case 0x10b81cu: goto label_10b81c;
        case 0x10b820u: goto label_10b820;
        case 0x10b824u: goto label_10b824;
        case 0x10b828u: goto label_10b828;
        case 0x10b82cu: goto label_10b82c;
        case 0x10b830u: goto label_10b830;
        case 0x10b834u: goto label_10b834;
        case 0x10b838u: goto label_10b838;
        case 0x10b83cu: goto label_10b83c;
        case 0x10b840u: goto label_10b840;
        case 0x10b844u: goto label_10b844;
        case 0x10b848u: goto label_10b848;
        case 0x10b84cu: goto label_10b84c;
        case 0x10b850u: goto label_10b850;
        case 0x10b854u: goto label_10b854;
        case 0x10b858u: goto label_10b858;
        case 0x10b85cu: goto label_10b85c;
        case 0x10b860u: goto label_10b860;
        case 0x10b864u: goto label_10b864;
        case 0x10b868u: goto label_10b868;
        case 0x10b86cu: goto label_10b86c;
        case 0x10b870u: goto label_10b870;
        case 0x10b874u: goto label_10b874;
        case 0x10b878u: goto label_10b878;
        case 0x10b87cu: goto label_10b87c;
        case 0x10b880u: goto label_10b880;
        case 0x10b884u: goto label_10b884;
        case 0x10b888u: goto label_10b888;
        default: break;
    }

    ctx->pc = 0x10b6c8u;

label_10b6c8:
    // 0x10b6c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10b6cc:
    // 0x10b6cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b6d0:
    // 0x10b6d0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_10b6d4:
    // 0x10b6d4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_10b6d8:
    // 0x10b6d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10b6d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b6dc:
    // 0x10b6dc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10b6e0:
    // 0x10b6e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b6e4:
    // 0x10b6e4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_10b6e8:
    // 0x10b6e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_10b6ec:
    // 0x10b6ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10b6f0:
    // 0x10b6f0: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10b6f4:
    // 0x10b6f4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_10b6f8:
    if (ctx->pc == 0x10B6F8u) {
        ctx->pc = 0x10B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F4u;
        // 0x10b6f8: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6FCu;
        goto label_10b6fc;
    }
    ctx->pc = 0x10B6F4u;
    {
        const bool branch_taken_0x10b6f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F4u;
        // 0x10b6f8: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f4) {
            ctx->pc = 0x10B708u;
            goto label_10b708;
        }
    }
    ctx->pc = 0x10B6FCu;
label_10b6fc:
    // 0x10b6fc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10b6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10b700:
    // 0x10b700: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_10b704:
    if (ctx->pc == 0x10B704u) {
        ctx->pc = 0x10B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B700u;
        // 0x10b704: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B708u;
        goto label_10b708;
    }
    ctx->pc = 0x10B700u;
    {
        const bool branch_taken_0x10b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b700) {
            ctx->pc = 0x10B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B700u;
            // 0x10b704: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B710u;
            goto label_10b710;
        }
    }
    ctx->pc = 0x10B708u;
label_10b708:
    // 0x10b708: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b70c:
    // 0x10b70c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b710:
    // 0x10b710: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10b714:
    if (ctx->pc == 0x10B714u) {
        ctx->pc = 0x10B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B710u;
        // 0x10b714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B718u;
        goto label_10b718;
    }
    ctx->pc = 0x10B710u;
    {
        const bool branch_taken_0x10b710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B710u;
        // 0x10b714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b710) {
            ctx->pc = 0x10B724u;
            goto label_10b724;
        }
    }
    ctx->pc = 0x10B718u;
label_10b718:
    // 0x10b718: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10b718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_10b71c:
    // 0x10b71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b720:
    // 0x10b720: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10b720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10b724:
    // 0x10b724: 0xc042ca8  jal         func_10B2A0
label_10b728:
    if (ctx->pc == 0x10B728u) {
        ctx->pc = 0x10B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B724u;
        // 0x10b728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B72Cu;
        goto label_10b72c;
    }
    ctx->pc = 0x10B724u;
    SET_GPR_U32(ctx, 31, 0x10B72Cu);
    ctx->pc = 0x10B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B724u;
    // 0x10b728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2A0u, 0x10B724u, 0x10B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B72Cu;
label_10b72c:
    // 0x10b72c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10b730:
    if (ctx->pc == 0x10B730u) {
        ctx->pc = 0x10B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B72Cu;
        // 0x10b730: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B734u;
        goto label_10b734;
    }
    ctx->pc = 0x10B72Cu;
    {
        const bool branch_taken_0x10b72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b72c) {
            ctx->pc = 0x10B730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B72Cu;
            // 0x10b730: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B748u;
            goto label_10b748;
        }
    }
    ctx->pc = 0x10B734u;
label_10b734:
    // 0x10b734: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_10b738:
    if (ctx->pc == 0x10B738u) {
        ctx->pc = 0x10B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B734u;
        // 0x10b738: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B73Cu;
        goto label_10b73c;
    }
    ctx->pc = 0x10B734u;
    {
        const bool branch_taken_0x10b734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b734) {
            ctx->pc = 0x10B738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B734u;
            // 0x10b738: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B748u;
            goto label_10b748;
        }
    }
    ctx->pc = 0x10B73Cu;
label_10b73c:
    // 0x10b73c: 0xc042f82  jal         func_10BE08
label_10b740:
    if (ctx->pc == 0x10B740u) {
        ctx->pc = 0x10B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B73Cu;
        // 0x10b740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B744u;
        goto label_10b744;
    }
    ctx->pc = 0x10B73Cu;
    SET_GPR_U32(ctx, 31, 0x10B744u);
    ctx->pc = 0x10B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B73Cu;
    // 0x10b740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BE08u, 0x10B73Cu, 0x10B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B744u;
label_10b744:
    // 0x10b744: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10b748:
    // 0x10b748: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_10b74c:
    if (ctx->pc == 0x10B74Cu) {
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B750u;
        goto label_10b750;
    }
    ctx->pc = 0x10B748u;
    {
        const bool branch_taken_0x10b748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b748) {
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B750u;
label_10b750:
    // 0x10b750: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10b750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b754:
    // 0x10b754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b758:
    // 0x10b758: 0xc042a12  jal         func_10A848
label_10b75c:
    if (ctx->pc == 0x10B75Cu) {
        ctx->pc = 0x10B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B758u;
        // 0x10b75c: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B760u;
        goto label_10b760;
    }
    ctx->pc = 0x10B758u;
    SET_GPR_U32(ctx, 31, 0x10B760u);
    ctx->pc = 0x10B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B758u;
    // 0x10b75c: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A848u, 0x10B758u, 0x10B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B760u;
label_10b760:
    // 0x10b760: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_10b764:
    if (ctx->pc == 0x10B764u) {
        ctx->pc = 0x10B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B760u;
        // 0x10b764: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B768u;
        goto label_10b768;
    }
    ctx->pc = 0x10B760u;
    {
        const bool branch_taken_0x10b760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b760) {
            ctx->pc = 0x10B764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B760u;
            // 0x10b764: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B77Cu;
            goto label_10b77c;
        }
    }
    ctx->pc = 0x10B768u;
label_10b768:
    // 0x10b768: 0xc043256  jal         func_10C958
label_10b76c:
    if (ctx->pc == 0x10B76Cu) {
        ctx->pc = 0x10B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B768u;
        // 0x10b76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B770u;
        goto label_10b770;
    }
    ctx->pc = 0x10B768u;
    SET_GPR_U32(ctx, 31, 0x10B770u);
    ctx->pc = 0x10B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B768u;
    // 0x10b76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C958u, 0x10B768u, 0x10B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B770u;
label_10b770:
    // 0x10b770: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x10b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_10b774:
    // 0x10b774: 0x1000003d  b           . + 4 + (0x3D << 2)
label_10b778:
    if (ctx->pc == 0x10B778u) {
        ctx->pc = 0x10B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B774u;
        // 0x10b778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B77Cu;
        goto label_10b77c;
    }
    ctx->pc = 0x10B774u;
    {
        const bool branch_taken_0x10b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B774u;
        // 0x10b778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b774) {
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B77Cu;
label_10b77c:
    // 0x10b77c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b780:
    // 0x10b780: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x10b780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_10b784:
    // 0x10b784: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b788:
    // 0x10b788: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x10b788u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_10b78c:
    // 0x10b78c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_10b790:
    if (ctx->pc == 0x10B790u) {
        ctx->pc = 0x10B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B78Cu;
        // 0x10b790: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B794u;
        goto label_10b794;
    }
    ctx->pc = 0x10B78Cu;
    {
        const bool branch_taken_0x10b78c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B78Cu;
        // 0x10b790: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b78c) {
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B794u;
label_10b794:
    // 0x10b794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b798:
    // 0x10b798: 0xc042ca8  jal         func_10B2A0
label_10b79c:
    if (ctx->pc == 0x10B79Cu) {
        ctx->pc = 0x10B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B798u;
        // 0x10b79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7A0u;
        goto label_10b7a0;
    }
    ctx->pc = 0x10B798u;
    SET_GPR_U32(ctx, 31, 0x10B7A0u);
    ctx->pc = 0x10B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B798u;
    // 0x10b79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2A0u, 0x10B798u, 0x10B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7A0u;
label_10b7a0:
    // 0x10b7a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10b7a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b7a4:
    // 0x10b7a4: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x10b7a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_10b7a8:
    // 0x10b7a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10b7ac:
    if (ctx->pc == 0x10B7ACu) {
        ctx->pc = 0x10B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7A8u;
        // 0x10b7ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7B0u;
        goto label_10b7b0;
    }
    ctx->pc = 0x10B7A8u;
    {
        const bool branch_taken_0x10b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7A8u;
        // 0x10b7ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7a8) {
            ctx->pc = 0x10B7C4u;
            goto label_10b7c4;
        }
    }
    ctx->pc = 0x10B7B0u;
label_10b7b0:
    // 0x10b7b0: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_10b7b4:
    if (ctx->pc == 0x10B7B4u) {
        ctx->pc = 0x10B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7B0u;
        // 0x10b7b4: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7B8u;
        goto label_10b7b8;
    }
    ctx->pc = 0x10B7B0u;
    {
        const bool branch_taken_0x10b7b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b7b0) {
            ctx->pc = 0x10B7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B7B0u;
            // 0x10b7b4: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B7C8u;
            goto label_10b7c8;
        }
    }
    ctx->pc = 0x10B7B8u;
label_10b7b8:
    // 0x10b7b8: 0xc042f82  jal         func_10BE08
label_10b7bc:
    if (ctx->pc == 0x10B7BCu) {
        ctx->pc = 0x10B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7B8u;
        // 0x10b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7C0u;
        goto label_10b7c0;
    }
    ctx->pc = 0x10B7B8u;
    SET_GPR_U32(ctx, 31, 0x10B7C0u);
    ctx->pc = 0x10B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7B8u;
    // 0x10b7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BE08u, 0x10B7B8u, 0x10B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7C0u;
label_10b7c0:
    // 0x10b7c0: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x10b7c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_10b7c4:
    // 0x10b7c4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10b7c8:
    // 0x10b7c8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_10b7cc:
    if (ctx->pc == 0x10B7CCu) {
        ctx->pc = 0x10B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7C8u;
        // 0x10b7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7D0u;
        goto label_10b7d0;
    }
    ctx->pc = 0x10B7C8u;
    {
        const bool branch_taken_0x10b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7C8u;
        // 0x10b7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7c8) {
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B7D0u;
label_10b7d0:
    // 0x10b7d0: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x10b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10b7d4:
    // 0x10b7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b7d8:
    // 0x10b7d8: 0xc043286  jal         func_10CA18
label_10b7dc:
    if (ctx->pc == 0x10B7DCu) {
        ctx->pc = 0x10B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7D8u;
        // 0x10b7dc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7E0u;
        goto label_10b7e0;
    }
    ctx->pc = 0x10B7D8u;
    SET_GPR_U32(ctx, 31, 0x10B7E0u);
    ctx->pc = 0x10B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7D8u;
    // 0x10b7dc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA18u, 0x10B7D8u, 0x10B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7E0u;
label_10b7e0:
    // 0x10b7e0: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10b7e4:
    // 0x10b7e4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x10b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_10b7e8:
    // 0x10b7e8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_10b7ec:
    // 0x10b7ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10b7f0:
    // 0x10b7f0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10b7f4:
    // 0x10b7f4: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x10b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10b7f8:
    // 0x10b7f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b7fc:
    // 0x10b7fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b800:
    // 0x10b800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b804:
    // 0x10b804: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x10b804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_10b808:
    // 0x10b808: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_10b80c:
    if (ctx->pc == 0x10B80Cu) {
        ctx->pc = 0x10B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B808u;
        // 0x10b80c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B810u;
        goto label_10b810;
    }
    ctx->pc = 0x10B808u;
    {
        const bool branch_taken_0x10b808 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B808u;
        // 0x10b80c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b808) {
            ctx->pc = 0x10B868u;
            goto label_10b868;
        }
    }
    ctx->pc = 0x10B810u;
label_10b810:
    // 0x10b810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b814:
    // 0x10b814: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_10b818:
    if (ctx->pc == 0x10B818u) {
        ctx->pc = 0x10B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B814u;
        // 0x10b818: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B81Cu;
        goto label_10b81c;
    }
    ctx->pc = 0x10B814u;
    {
        const bool branch_taken_0x10b814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B814u;
        // 0x10b818: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b814) {
            ctx->pc = 0x10B868u;
            goto label_10b868;
        }
    }
    ctx->pc = 0x10B81Cu;
label_10b81c:
    // 0x10b81c: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x10b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10b820:
    // 0x10b820: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10b824:
    if (ctx->pc == 0x10B824u) {
        ctx->pc = 0x10B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B820u;
        // 0x10b824: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B828u;
        goto label_10b828;
    }
    ctx->pc = 0x10B820u;
    {
        const bool branch_taken_0x10b820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B820u;
        // 0x10b824: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b820) {
            ctx->pc = 0x10B86Cu;
            goto label_10b86c;
        }
    }
    ctx->pc = 0x10B828u;
label_10b828:
    // 0x10b828: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10b828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10b82c:
    // 0x10b82c: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_10b830:
    if (ctx->pc == 0x10B830u) {
        ctx->pc = 0x10B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B82Cu;
        // 0x10b830: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B834u;
        goto label_10b834;
    }
    ctx->pc = 0x10B82Cu;
    {
        const bool branch_taken_0x10b82c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B82Cu;
        // 0x10b830: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b82c) {
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B834u;
label_10b834:
    // 0x10b834: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10b838:
    // 0x10b838: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10b838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10b83c:
    // 0x10b83c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10b83cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b840:
    // 0x10b840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10b844:
    // 0x10b844: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10b848:
    // 0x10b848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b84c:
    // 0x10b84c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10b850:
    // 0x10b850: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10b850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10b854:
    // 0x10b854: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10b858:
    // 0x10b858: 0xe0f809  jalr        $a3
label_10b85c:
    if (ctx->pc == 0x10B85Cu) {
        ctx->pc = 0x10B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B858u;
        // 0x10b85c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B860u;
        goto label_10b860;
    }
    ctx->pc = 0x10B858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10B860u);
        ctx->pc = 0x10B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B858u;
        // 0x10b85c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B858u, 0x10B860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B860u;
label_10b860:
    // 0x10b860: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10b860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10b864:
    // 0x10b864: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10b864u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b868:
    // 0x10b868: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10b868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b86c:
    // 0x10b86c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10b870:
    // 0x10b870: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10b870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b874:
    // 0x10b874: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10b878:
    // 0x10b878: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10b87c:
    // 0x10b87c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10b880:
    // 0x10b880: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10b884:
    // 0x10b884: 0x3e00008  jr          $ra
label_10b888:
    if (ctx->pc == 0x10B888u) {
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B88Cu;
        goto label_fallthrough_0x10b884;
    }
    ctx->pc = 0x10B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b884:
    ctx->pc = 0x10B88Cu;
}
