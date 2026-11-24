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

// Function: sub_0022A318
// Address: 0x22a318 - 0x22a4cc
void sub_0022A318_0x22a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A318_0x22a318");
#endif

    switch (ctx->pc) {
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        default: break;
    }

    ctx->pc = 0x22a318u;

label_22a318:
    // 0x22a318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22a31c:
    // 0x22a31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a320:
    // 0x22a320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22a324:
    // 0x22a324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a328:
    // 0x22a328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22a32c:
    // 0x22a32c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22a330:
    // 0x22a330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22a334:
    // 0x22a334: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22a338:
    // 0x22a338: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22a33c:
    // 0x22a33c: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_22a340:
    if (ctx->pc == 0x22A340u) {
        ctx->pc = 0x22A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A33Cu;
        // 0x22a340: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A344u;
        goto label_22a344;
    }
    ctx->pc = 0x22A33Cu;
    {
        const bool branch_taken_0x22a33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A33Cu;
        // 0x22a340: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a33c) {
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A344u;
label_22a344:
    // 0x22a344: 0xc08f924  jal         func_23E490
label_22a348:
    if (ctx->pc == 0x22A348u) {
        ctx->pc = 0x22A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A344u;
        // 0x22a348: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A34Cu;
        goto label_22a34c;
    }
    ctx->pc = 0x22A344u;
    SET_GPR_U32(ctx, 31, 0x22A34Cu);
    ctx->pc = 0x22A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A344u;
    // 0x22a348: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22A344u, 0x22A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A34Cu;
label_22a34c:
    // 0x22a34c: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_22a350:
    if (ctx->pc == 0x22A350u) {
        ctx->pc = 0x22A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A34Cu;
        // 0x22a350: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A354u;
        goto label_22a354;
    }
    ctx->pc = 0x22A34Cu;
    {
        const bool branch_taken_0x22a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a34c) {
            ctx->pc = 0x22A350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A34Cu;
            // 0x22a350: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A354u;
label_22a354:
    // 0x22a354: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22a354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22a358:
    // 0x22a358: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22a35c:
    // 0x22a35c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22a360:
    // 0x22a360: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22a364:
    // 0x22a364: 0x40f809  jalr        $v0
label_22a368:
    if (ctx->pc == 0x22A368u) {
        ctx->pc = 0x22A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A364u;
        // 0x22a368: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A36Cu;
        goto label_22a36c;
    }
    ctx->pc = 0x22A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A36Cu);
        ctx->pc = 0x22A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A364u;
        // 0x22a368: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A364u, 0x22A36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A36Cu;
label_22a36c:
    // 0x22a36c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22a370:
    // 0x22a370: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22a374:
    // 0x22a374: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22a374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a378:
    // 0x22a378: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22a37c:
    // 0x22a37c: 0x875023  subu        $t2, $a0, $a3
    ctx->pc = 0x22a37cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22a380:
    // 0x22a380: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22a380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22a384:
    // 0x22a384: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x22a384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_22a388:
    // 0x22a388: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22a38c:
    // 0x22a38c: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x22a38cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_22a390:
    // 0x22a390: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22a394:
    // 0x22a394: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22a398:
    // 0x22a398: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x22a398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_22a39c:
    // 0x22a39c: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x22a39cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_22a3a0:
    // 0x22a3a0: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_22a3a4:
    // 0x22a3a4: 0x14860020  bne         $a0, $a2, . + 4 + (0x20 << 2)
label_22a3a8:
    if (ctx->pc == 0x22A3A8u) {
        ctx->pc = 0x22A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3A4u;
        // 0x22a3a8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3ACu;
        goto label_22a3ac;
    }
    ctx->pc = 0x22A3A4u;
    {
        const bool branch_taken_0x22a3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3A4u;
        // 0x22a3a8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3a4) {
            ctx->pc = 0x22A428u;
            goto label_22a428;
        }
    }
    ctx->pc = 0x22A3ACu;
label_22a3ac:
    // 0x22a3ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22a3b0:
    // 0x22a3b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a3b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a3b4:
    // 0x22a3b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22a3b8:
    // 0x22a3b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a3bc:
    // 0x22a3bc: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
label_22a3c0:
    if (ctx->pc == 0x22A3C0u) {
        ctx->pc = 0x22A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3BCu;
        // 0x22a3c0: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3C4u;
        goto label_22a3c4;
    }
    ctx->pc = 0x22A3BCu;
    {
        const bool branch_taken_0x22a3bc = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x22A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3BCu;
        // 0x22a3c0: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3bc) {
            ctx->pc = 0x22A46Cu;
            goto label_22a46c;
        }
    }
    ctx->pc = 0x22A3C4u;
label_22a3c4:
    // 0x22a3c4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22a3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a3c8:
    // 0x22a3c8: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x22a3c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_22a3cc:
    // 0x22a3cc: 0x0  nop
    ctx->pc = 0x22a3ccu;
    // NOP
label_22a3d0:
    // 0x22a3d0: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x22a3d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_22a3d4:
    // 0x22a3d4: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_22a3d8:
    // 0x22a3d8: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x22a3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_22a3dc:
    // 0x22a3dc: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x22a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_22a3e0:
    // 0x22a3e0: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_22a3e4:
    // 0x22a3e4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_22a3e8:
    // 0x22a3e8: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x22a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_22a3ec:
    // 0x22a3ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22a3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22a3f0:
    // 0x22a3f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x22a3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_22a3f4:
    // 0x22a3f4: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x22a3f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_22a3f8:
    // 0x22a3f8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x22a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_22a3fc:
    // 0x22a3fc: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x22a3fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_22a400:
    // 0x22a400: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x22a400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_22a404:
    // 0x22a404: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x22a404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22a408:
    // 0x22a408: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22a408u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_22a40c:
    // 0x22a40c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x22a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_22a410:
    // 0x22a410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a414:
    // 0x22a414: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_22a418:
    if (ctx->pc == 0x22A418u) {
        ctx->pc = 0x22A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A414u;
        // 0x22a418: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A41Cu;
        goto label_22a41c;
    }
    ctx->pc = 0x22A414u;
    {
        const bool branch_taken_0x22a414 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A414u;
        // 0x22a418: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a414) {
            ctx->pc = 0x22A3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3d0;
        }
    }
    ctx->pc = 0x22A41Cu;
label_22a41c:
    // 0x22a41c: 0x10000013  b           . + 4 + (0x13 << 2)
label_22a420:
    if (ctx->pc == 0x22A420u) {
        ctx->pc = 0x22A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A41Cu;
        // 0x22a420: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A424u;
        goto label_22a424;
    }
    ctx->pc = 0x22A41Cu;
    {
        const bool branch_taken_0x22a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A41Cu;
        // 0x22a420: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a41c) {
            ctx->pc = 0x22A46Cu;
            goto label_22a46c;
        }
    }
    ctx->pc = 0x22A424u;
label_22a424:
    // 0x22a424: 0x0  nop
    ctx->pc = 0x22a424u;
    // NOP
label_22a428:
    // 0x22a428: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
label_22a42c:
    if (ctx->pc == 0x22A42Cu) {
        ctx->pc = 0x22A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A428u;
        // 0x22a42c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A430u;
        goto label_22a430;
    }
    ctx->pc = 0x22A428u;
    {
        const bool branch_taken_0x22a428 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x22A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A428u;
        // 0x22a42c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a428) {
            ctx->pc = 0x22A46Cu;
            goto label_22a46c;
        }
    }
    ctx->pc = 0x22A430u;
label_22a430:
    // 0x22a430: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x22a430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_22a434:
    // 0x22a434: 0x0  nop
    ctx->pc = 0x22a434u;
    // NOP
label_22a438:
    // 0x22a438: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x22a438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_22a43c:
    // 0x22a43c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_22a440:
    // 0x22a440: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22a444:
    // 0x22a444: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x22a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_22a448:
    // 0x22a448: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22a448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22a44c:
    // 0x22a44c: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x22a44cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_22a450:
    // 0x22a450: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x22a450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22a454:
    // 0x22a454: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22a454u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_22a458:
    // 0x22a458: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x22a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_22a45c:
    // 0x22a45c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a460:
    // 0x22a460: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_22a464:
    if (ctx->pc == 0x22A464u) {
        ctx->pc = 0x22A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A460u;
        // 0x22a464: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A468u;
        goto label_22a468;
    }
    ctx->pc = 0x22A460u;
    {
        const bool branch_taken_0x22a460 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A460u;
        // 0x22a464: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a460) {
            ctx->pc = 0x22A438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a438;
        }
    }
    ctx->pc = 0x22A468u;
label_22a468:
    // 0x22a468: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22a468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22a46c:
    // 0x22a46c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22a470:
    // 0x22a470: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a474:
    // 0x22a474: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22a474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22a478:
    // 0x22a478: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22a47c:
    // 0x22a47c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x22a47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22a480:
    // 0x22a480: 0xae0a0090  sw          $t2, 0x90($s0)
    ctx->pc = 0x22a480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 10));
label_22a484:
    // 0x22a484: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a488:
    // 0x22a488: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22a488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22a48c:
    // 0x22a48c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a490:
    // 0x22a490: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22a494:
    if (ctx->pc == 0x22A494u) {
        ctx->pc = 0x22A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A490u;
        // 0x22a494: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A498u;
        goto label_22a498;
    }
    ctx->pc = 0x22A490u;
    {
        const bool branch_taken_0x22a490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a490) {
            ctx->pc = 0x22A494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A490u;
            // 0x22a494: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A498u;
label_22a498:
    // 0x22a498: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22a49c:
    // 0x22a49c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22a4a0:
    // 0x22a4a0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22a4a4:
    // 0x22a4a4: 0x60f809  jalr        $v1
label_22a4a8:
    if (ctx->pc == 0x22A4A8u) {
        ctx->pc = 0x22A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A4u;
        // 0x22a4a8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4ACu;
        goto label_22a4ac;
    }
    ctx->pc = 0x22A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22A4ACu);
        ctx->pc = 0x22A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A4u;
        // 0x22a4a8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4A4u, 0x22A4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a4b0:
    // 0x22a4b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22a4b4:
    // 0x22a4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a4b8:
    // 0x22a4b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22a4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22a4bc:
    // 0x22a4bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22a4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a4c0:
    // 0x22a4c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22a4c4:
    // 0x22a4c4: 0x3e00008  jr          $ra
label_22a4c8:
    if (ctx->pc == 0x22A4C8u) {
        ctx->pc = 0x22A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C4u;
        // 0x22a4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4CCu;
        goto label_fallthrough_0x22a4c4;
    }
    ctx->pc = 0x22A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4C4u;
        // 0x22a4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22a4c4:
    ctx->pc = 0x22A4CCu;
}
