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

// Function: sub_0011A2D0
// Address: 0x11a2d0 - 0x11a7a8
void sub_0011A2D0_0x11a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A2D0_0x11a2d0");
#endif

    switch (ctx->pc) {
        case 0x11a32cu: goto label_11a32c;
        case 0x11a384u: goto label_11a384;
        case 0x11a3a0u: goto label_11a3a0;
        case 0x11a3a8u: goto label_11a3a8;
        case 0x11a3b8u: goto label_11a3b8;
        case 0x11a3c4u: goto label_11a3c4;
        case 0x11a3e0u: goto label_11a3e0;
        case 0x11a3fcu: goto label_11a3fc;
        case 0x11a418u: goto label_11a418;
        case 0x11a420u: goto label_11a420;
        case 0x11a430u: goto label_11a430;
        case 0x11a43cu: goto label_11a43c;
        case 0x11a458u: goto label_11a458;
        case 0x11a488u: goto label_11a488;
        case 0x11a49cu: goto label_11a49c;
        case 0x11a4acu: goto label_11a4ac;
        case 0x11a4b4u: goto label_11a4b4;
        case 0x11a4c0u: goto label_11a4c0;
        case 0x11a4d4u: goto label_11a4d4;
        case 0x11a4e0u: goto label_11a4e0;
        case 0x11a4f4u: goto label_11a4f4;
        case 0x11a528u: goto label_11a528;
        case 0x11a558u: goto label_11a558;
        case 0x11a568u: goto label_11a568;
        case 0x11a580u: goto label_11a580;
        case 0x11a590u: goto label_11a590;
        case 0x11a59cu: goto label_11a59c;
        case 0x11a5a8u: goto label_11a5a8;
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a604u: goto label_11a604;
        case 0x11a614u: goto label_11a614;
        case 0x11a620u: goto label_11a620;
        case 0x11a62cu: goto label_11a62c;
        case 0x11a63cu: goto label_11a63c;
        case 0x11a650u: goto label_11a650;
        case 0x11a65cu: goto label_11a65c;
        case 0x11a678u: goto label_11a678;
        case 0x11a684u: goto label_11a684;
        case 0x11a68cu: goto label_11a68c;
        case 0x11a698u: goto label_11a698;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6f4u: goto label_11a6f4;
        case 0x11a700u: goto label_11a700;
        case 0x11a708u: goto label_11a708;
        case 0x11a718u: goto label_11a718;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a744u: goto label_11a744;
        case 0x11a754u: goto label_11a754;
        case 0x11a778u: goto label_11a778;
        case 0x11a78cu: goto label_11a78c;
        default: break;
    }

    ctx->pc = 0x11a2d0u;

    // 0x11a2d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a2d4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11a2d8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11a2dc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a2dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a2e0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11a2e4: 0x3c0e3fe9  lui         $t6, 0x3FE9
    ctx->pc = 0x11a2e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16361 << 16));
    // 0x11a2e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11a2ec: 0x4a03f  dsra32      $s4, $a0, 0
    ctx->pc = 0x11a2ecu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11a2f0: 0x28f8024  and         $s0, $s4, $t7
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
    // 0x11a2f4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x11a2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x11a2f8: 0x35ce21fb  ori         $t6, $t6, 0x21FB
    ctx->pc = 0x11a2f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8699);
    // 0x11a2fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x11a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x11a300: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x11a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x11a304: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a308: 0x1d0702a  slt         $t6, $t6, $s0
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a30c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x11a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x11a310: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x11a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x11a314: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x11a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x11a318: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A318u;
    {
        const bool branch_taken_0x11a318 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A318u;
        // 0x11a31c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a318) {
            ctx->pc = 0x11A360u;
            goto label_11a360;
        }
    }
    ctx->pc = 0x11A320u;
    // 0x11a320: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x11a320u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x11a324: 0xfca00008  sd          $zero, 0x8($a1)
    ctx->pc = 0x11a324u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 0));
    // 0x11a328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a32c:
    // 0x11a32c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11a32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a330: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11a330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a334: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x11a334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11a338: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11a338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a33c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11a340: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a344: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x11a344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11a348: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11a348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a34c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11a350: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x11a350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a354: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11a358: 0x3e00008  jr          $ra
    ctx->pc = 0x11A358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A358u;
        // 0x11a35c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A360u;
label_11a360:
    // 0x11a360: 0x3c0f4002  lui         $t7, 0x4002
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16386 << 16));
    // 0x11a364: 0x35efd97b  ori         $t7, $t7, 0xD97B
    ctx->pc = 0x11a364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)55675);
    // 0x11a368: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a368u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a36c: 0x15e00040  bnez        $t7, . + 4 + (0x40 << 2)
    ctx->pc = 0x11A36Cu;
    {
        const bool branch_taken_0x11a36c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A36Cu;
        // 0x11a370: 0x3c0f4139  lui         $t7, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a36c) {
            ctx->pc = 0x11A470u;
            goto label_11a470;
        }
    }
    ctx->pc = 0x11A374u;
    // 0x11a374: 0x1a80001f  blez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x11A374u;
    {
        const bool branch_taken_0x11a374 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x11A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A374u;
        // 0x11a378: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a374) {
            ctx->pc = 0x11A3F4u;
            goto label_11a3f4;
        }
    }
    ctx->pc = 0x11A37Cu;
    // 0x11a37c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A37Cu;
    SET_GPR_U32(ctx, 31, 0x11A384u);
    ctx->pc = 0x11A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A37Cu;
    // 0x11a380: 0xdde52bf0  ld          $a1, 0x2BF0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 11248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A37Cu, 0x11A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A384u;
label_11a384:
    // 0x11a384: 0x3c0f3ff9  lui         $t7, 0x3FF9
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16377 << 16));
    // 0x11a388: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x11a388u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x11a38c: 0x120f0010  beq         $s0, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A38Cu;
    {
        const bool branch_taken_0x11a38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A38Cu;
        // 0x11a390: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a38c) {
            ctx->pc = 0x11A3D0u;
            goto label_11a3d0;
        }
    }
    ctx->pc = 0x11A394u;
    // 0x11a394: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a394u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a39c: 0xddf02bf8  ld          $s0, 0x2BF8($t7)
    ctx->pc = 0x11a39cu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x662BF8u));
label_11a3a0:
    // 0x11a3a0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A3A0u;
    SET_GPR_U32(ctx, 31, 0x11A3A8u);
    ctx->pc = 0x11A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3A0u;
    // 0x11a3a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A3A0u, 0x11A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3A8u;
label_11a3a8:
    // 0x11a3a8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x11a3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3b0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A3B0u;
    SET_GPR_U32(ctx, 31, 0x11A3B8u);
    ctx->pc = 0x11A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3B0u;
    // 0x11a3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A3B0u, 0x11A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3B8u;
label_11a3b8:
    // 0x11a3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3bc: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A3BCu;
    SET_GPR_U32(ctx, 31, 0x11A3C4u);
    ctx->pc = 0x11A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3BCu;
    // 0x11a3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A3BCu, 0x11A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3C4u;
label_11a3c4:
    // 0x11a3c4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x11a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x11a3c8: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x11A3C8u;
    {
        const bool branch_taken_0x11a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3C8u;
        // 0x11a3cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3c8) {
            ctx->pc = 0x11A32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A3D0u;
label_11a3d0:
    // 0x11a3d0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a3d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3d8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A3D8u;
    SET_GPR_U32(ctx, 31, 0x11A3E0u);
    ctx->pc = 0x11A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3D8u;
    // 0x11a3dc: 0xdde52c00  ld          $a1, 0x2C00($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 11264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A3D8u, 0x11A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3E0u;
label_11a3e0:
    // 0x11a3e0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a3e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a3e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3e8: 0xddf02c08  ld          $s0, 0x2C08($t7)
    ctx->pc = 0x11a3e8u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x662C08u));
    // 0x11a3ec: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x11A3ECu;
    {
        const bool branch_taken_0x11a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3ECu;
        // 0x11a3f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3ec) {
            ctx->pc = 0x11A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a3a0;
        }
    }
    ctx->pc = 0x11A3F4u;
label_11a3f4:
    // 0x11a3f4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A3F4u;
    SET_GPR_U32(ctx, 31, 0x11A3FCu);
    ctx->pc = 0x11A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3F4u;
    // 0x11a3f8: 0xdde52bf0  ld          $a1, 0x2BF0($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 11248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A3F4u, 0x11A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3FCu;
label_11a3fc:
    // 0x11a3fc: 0x3c0f3ff9  lui         $t7, 0x3FF9
    ctx->pc = 0x11a3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16377 << 16));
    // 0x11a400: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x11a400u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x11a404: 0x120f0010  beq         $s0, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A404u;
    {
        const bool branch_taken_0x11a404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A404u;
        // 0x11a408: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a404) {
            ctx->pc = 0x11A448u;
            goto label_11a448;
        }
    }
    ctx->pc = 0x11A40Cu;
    // 0x11a40c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a414: 0xddf02bf8  ld          $s0, 0x2BF8($t7)
    ctx->pc = 0x11a414u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x662BF8u));
label_11a418:
    // 0x11a418: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A418u;
    SET_GPR_U32(ctx, 31, 0x11A420u);
    ctx->pc = 0x11A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A418u;
    // 0x11a41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A418u, 0x11A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A420u;
label_11a420:
    // 0x11a420: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a420u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x11a424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a428: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A428u;
    SET_GPR_U32(ctx, 31, 0x11A430u);
    ctx->pc = 0x11A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A428u;
    // 0x11a42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A428u, 0x11A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A430u;
label_11a430:
    // 0x11a430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a434: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A434u;
    SET_GPR_U32(ctx, 31, 0x11A43Cu);
    ctx->pc = 0x11A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A434u;
    // 0x11a438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A434u, 0x11A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A43Cu;
label_11a43c:
    // 0x11a43c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x11a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x11a440: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x11A440u;
    {
        const bool branch_taken_0x11a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A440u;
        // 0x11a444: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a440) {
            ctx->pc = 0x11A32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A448u;
label_11a448:
    // 0x11a448: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a450: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A450u;
    SET_GPR_U32(ctx, 31, 0x11A458u);
    ctx->pc = 0x11A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A450u;
    // 0x11a454: 0xdde52c00  ld          $a1, 0x2C00($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 11264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A450u, 0x11A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A458u;
label_11a458:
    // 0x11a458: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a45c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a460: 0xddf02c08  ld          $s0, 0x2C08($t7)
    ctx->pc = 0x11a460u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x662C08u));
    // 0x11a464: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x11A464u;
    {
        const bool branch_taken_0x11a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A464u;
        // 0x11a468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a464) {
            ctx->pc = 0x11A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a418;
        }
    }
    ctx->pc = 0x11A46Cu;
    // 0x11a46c: 0x0  nop
    ctx->pc = 0x11a46cu;
    // NOP
label_11a470:
    // 0x11a470: 0x35ef21fb  ori         $t7, $t7, 0x21FB
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8699);
    // 0x11a474: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a474u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a478: 0x15e00089  bnez        $t7, . + 4 + (0x89 << 2)
    ctx->pc = 0x11A478u;
    {
        const bool branch_taken_0x11a478 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A478u;
        // 0x11a47c: 0x3c0f7fef  lui         $t7, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a478) {
            ctx->pc = 0x11A6A0u;
            goto label_11a6a0;
        }
    }
    ctx->pc = 0x11A480u;
    // 0x11a480: 0xc0478a6  jal         func_11E298
    ctx->pc = 0x11A480u;
    SET_GPR_U32(ctx, 31, 0x11A488u);
    ctx->pc = 0x11E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E298u, 0x11A480u, 0x11A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A488u;
label_11a488:
    // 0x11a488: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a488u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a48c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11a48cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a490: 0xdde52c10  ld          $a1, 0x2C10($t7)
    ctx->pc = 0x11a490u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662C10u));
    // 0x11a494: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A494u;
    SET_GPR_U32(ctx, 31, 0x11A49Cu);
    ctx->pc = 0x11A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A494u;
    // 0x11a498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A494u, 0x11A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A49Cu;
label_11a49c:
    // 0x11a49c: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11a4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11A4A4u;
    SET_GPR_U32(ctx, 31, 0x11A4ACu);
    ctx->pc = 0x11A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4A4u;
    // 0x11a4a8: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11A4A4u, 0x11A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4ACu;
label_11a4ac:
    // 0x11a4ac: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11A4ACu;
    SET_GPR_U32(ctx, 31, 0x11A4B4u);
    ctx->pc = 0x11A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4ACu;
    // 0x11a4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11A4ACu, 0x11A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4B4u;
label_11a4b4:
    // 0x11a4b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11a4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4b8: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11A4B8u;
    SET_GPR_U32(ctx, 31, 0x11A4C0u);
    ctx->pc = 0x11A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4B8u;
    // 0x11a4bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11A4B8u, 0x11A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4C0u;
label_11a4c0:
    // 0x11a4c0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a4c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11a4c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4c8: 0xdde52bf0  ld          $a1, 0x2BF0($t7)
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662BF0u));
    // 0x11a4cc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A4CCu;
    SET_GPR_U32(ctx, 31, 0x11A4D4u);
    ctx->pc = 0x11A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4CCu;
    // 0x11a4d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A4CCu, 0x11A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4D4u;
label_11a4d4:
    // 0x11a4d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4d8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A4D8u;
    SET_GPR_U32(ctx, 31, 0x11A4E0u);
    ctx->pc = 0x11A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4D8u;
    // 0x11a4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A4D8u, 0x11A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4E0u;
label_11a4e0:
    // 0x11a4e0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a4e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a4e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4e8: 0xdde52bf8  ld          $a1, 0x2BF8($t7)
    ctx->pc = 0x11a4e8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662BF8u));
    // 0x11a4ec: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A4ECu;
    SET_GPR_U32(ctx, 31, 0x11A4F4u);
    ctx->pc = 0x11A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4ECu;
    // 0x11a4f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A4ECu, 0x11A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4F4u;
label_11a4f4:
    // 0x11a4f4: 0x2acf0020  slti        $t7, $s6, 0x20
    ctx->pc = 0x11a4f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x11a4f8: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A4F8u;
    {
        const bool branch_taken_0x11a4f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4F8u;
        // 0x11a4fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4f8) {
            ctx->pc = 0x11A51Cu;
            goto label_11a51c;
        }
    }
    ctx->pc = 0x11A500u;
    // 0x11a500: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11a500u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11a504: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x11a504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11a508: 0x25ce2b20  addiu       $t6, $t6, 0x2B20
    ctx->pc = 0x11a508u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11040));
    // 0x11a50c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x11a50cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11a510: 0x8dedfffc  lw          $t5, -0x4($t7)
    ctx->pc = 0x11a510u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11a514: 0x160d0047  bne         $s0, $t5, . + 4 + (0x47 << 2)
    ctx->pc = 0x11A514u;
    {
        const bool branch_taken_0x11a514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        ctx->pc = 0x11A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A514u;
        // 0x11a518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a514) {
            ctx->pc = 0x11A634u;
            goto label_11a634;
        }
    }
    ctx->pc = 0x11A51Cu;
label_11a51c:
    // 0x11a51c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a520: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A520u;
    SET_GPR_U32(ctx, 31, 0x11A528u);
    ctx->pc = 0x11A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A520u;
    // 0x11a524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A520u, 0x11A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A528u;
label_11a528:
    // 0x11a528: 0x10f503  sra         $fp, $s0, 20
    ctx->pc = 0x11a528u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 16), 20));
    // 0x11a52c: 0x27d3e  dsrl32      $t7, $v0, 20
    ctx->pc = 0x11a52cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x11a530: 0x31ef07ff  andi        $t7, $t7, 0x7FF
    ctx->pc = 0x11a530u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x11a534: 0x3cf8023  subu        $s0, $fp, $t7
    ctx->pc = 0x11a534u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x11a538: 0x2a0e0011  slti        $t6, $s0, 0x11
    ctx->pc = 0x11a538u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x11a53c: 0x15c00040  bnez        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x11A53Cu;
    {
        const bool branch_taken_0x11a53c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A53Cu;
        // 0x11a540: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a53c) {
            ctx->pc = 0x11A640u;
            goto label_11a640;
        }
    }
    ctx->pc = 0x11A544u;
    // 0x11a544: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a544u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a548: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a54c: 0xdde52c00  ld          $a1, 0x2C00($t7)
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662C00u));
    // 0x11a550: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A550u;
    SET_GPR_U32(ctx, 31, 0x11A558u);
    ctx->pc = 0x11A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A550u;
    // 0x11a554: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A550u, 0x11A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A558u;
label_11a558:
    // 0x11a558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a55c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a560: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A560u;
    SET_GPR_U32(ctx, 31, 0x11A568u);
    ctx->pc = 0x11A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A560u;
    // 0x11a564: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A560u, 0x11A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A568u;
label_11a568:
    // 0x11a568: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a568u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a56c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x11a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x11a570: 0xdde52c08  ld          $a1, 0x2C08($t7)
    ctx->pc = 0x11a570u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662C08u));
    // 0x11a574: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a578: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A578u;
    SET_GPR_U32(ctx, 31, 0x11A580u);
    ctx->pc = 0x11A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A578u;
    // 0x11a57c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A578u, 0x11A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A580u;
label_11a580:
    // 0x11a580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a588: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A588u;
    SET_GPR_U32(ctx, 31, 0x11A590u);
    ctx->pc = 0x11A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A588u;
    // 0x11a58c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A588u, 0x11A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A590u;
label_11a590:
    // 0x11a590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a594: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A594u;
    SET_GPR_U32(ctx, 31, 0x11A59Cu);
    ctx->pc = 0x11A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A594u;
    // 0x11a598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A594u, 0x11A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A59Cu;
label_11a59c:
    // 0x11a59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5a0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A5A0u;
    SET_GPR_U32(ctx, 31, 0x11A5A8u);
    ctx->pc = 0x11A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5A0u;
    // 0x11a5a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A5A0u, 0x11A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5A8u;
label_11a5a8:
    // 0x11a5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5b0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A5B0u;
    SET_GPR_U32(ctx, 31, 0x11A5B8u);
    ctx->pc = 0x11A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5B0u;
    // 0x11a5b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A5B0u, 0x11A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5B8u;
label_11a5b8:
    // 0x11a5b8: 0x27d3e  dsrl32      $t7, $v0, 20
    ctx->pc = 0x11a5b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x11a5bc: 0x31ef07ff  andi        $t7, $t7, 0x7FF
    ctx->pc = 0x11a5bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x11a5c0: 0x3cf8023  subu        $s0, $fp, $t7
    ctx->pc = 0x11a5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 15)));
    // 0x11a5c4: 0x2a0e0032  slti        $t6, $s0, 0x32
    ctx->pc = 0x11a5c4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x11a5c8: 0x15c0001d  bnez        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x11A5C8u;
    {
        const bool branch_taken_0x11a5c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5C8u;
        // 0x11a5cc: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5c8) {
            ctx->pc = 0x11A640u;
            goto label_11a640;
        }
    }
    ctx->pc = 0x11A5D0u;
    // 0x11a5d0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a5d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a5d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5d8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A5D8u;
    SET_GPR_U32(ctx, 31, 0x11A5E0u);
    ctx->pc = 0x11A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5D8u;
    // 0x11a5dc: 0xdde52c18  ld          $a1, 0x2C18($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 11288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A5D8u, 0x11A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5E0u;
label_11a5e0:
    // 0x11a5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5e8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A5E8u;
    SET_GPR_U32(ctx, 31, 0x11A5F0u);
    ctx->pc = 0x11A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5E8u;
    // 0x11a5ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A5E8u, 0x11A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5F0u;
label_11a5f0:
    // 0x11a5f0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11a5f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a5f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5f8: 0xdde52c20  ld          $a1, 0x2C20($t7)
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x662C20u));
    // 0x11a5fc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A5FCu;
    SET_GPR_U32(ctx, 31, 0x11A604u);
    ctx->pc = 0x11A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A5FCu;
    // 0x11a600: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A5FCu, 0x11A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x11a604u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a60c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A60Cu;
    SET_GPR_U32(ctx, 31, 0x11A614u);
    ctx->pc = 0x11A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A60Cu;
    // 0x11a610: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A60Cu, 0x11A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A614u;
label_11a614:
    // 0x11a614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a618: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A618u;
    SET_GPR_U32(ctx, 31, 0x11A620u);
    ctx->pc = 0x11A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A618u;
    // 0x11a61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A618u, 0x11A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A620u;
label_11a620:
    // 0x11a620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a624: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A624u;
    SET_GPR_U32(ctx, 31, 0x11A62Cu);
    ctx->pc = 0x11A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A624u;
    // 0x11a628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A624u, 0x11A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A62Cu;
label_11a62c:
    // 0x11a62c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a630: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a634:
    // 0x11a634: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A634u;
    SET_GPR_U32(ctx, 31, 0x11A63Cu);
    ctx->pc = 0x11A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A634u;
    // 0x11a638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A634u, 0x11A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A63Cu;
label_11a63c:
    // 0x11a63c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_11a640:
    // 0x11a640: 0xde530000  ld          $s3, 0x0($s2)
    ctx->pc = 0x11a640u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a648: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A648u;
    SET_GPR_U32(ctx, 31, 0x11A650u);
    ctx->pc = 0x11A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A648u;
    // 0x11a64c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A648u, 0x11A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A650u;
label_11a650:
    // 0x11a650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a654: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A654u;
    SET_GPR_U32(ctx, 31, 0x11A65Cu);
    ctx->pc = 0x11A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A654u;
    // 0x11a658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A654u, 0x11A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A65Cu;
label_11a65c:
    // 0x11a65c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x11a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x11a660: 0x681000d  bgez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11A660u;
    {
        const bool branch_taken_0x11a660 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A660u;
        // 0x11a664: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a660) {
            ctx->pc = 0x11A698u;
            goto label_11a698;
        }
    }
    ctx->pc = 0x11A668u;
    // 0x11a668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a66c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a670: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A670u;
    SET_GPR_U32(ctx, 31, 0x11A678u);
    ctx->pc = 0x11A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A670u;
    // 0x11a674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A670u, 0x11A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A678u;
label_11a678:
    // 0x11a678: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a678u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x11a67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a680: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a684:
    // 0x11a684: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A684u;
    SET_GPR_U32(ctx, 31, 0x11A68Cu);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A684u, 0x11A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A68Cu;
label_11a68c:
    // 0x11a68c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x11a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x11a690: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x11A690u;
    {
        const bool branch_taken_0x11a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A690u;
        // 0x11a694: 0x162023  negu        $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a690) {
            ctx->pc = 0x11A32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A698u;
label_11a698:
    // 0x11a698: 0x1000ff24  b           . + 4 + (-0xDC << 2)
    ctx->pc = 0x11A698u;
    {
        const bool branch_taken_0x11a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A698u;
        // 0x11a69c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a698) {
            ctx->pc = 0x11A32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A6A0u;
label_11a6a0:
    // 0x11a6a0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11a6a4: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11a6a4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a6a8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A6A8u;
    {
        const bool branch_taken_0x11a6a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6A8u;
        // 0x11a6ac: 0x107d03  sra         $t7, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6a8) {
            ctx->pc = 0x11A6C8u;
            goto label_11a6c8;
        }
    }
    ctx->pc = 0x11A6B0u;
    // 0x11a6b0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A6B0u;
    SET_GPR_U32(ctx, 31, 0x11A6B8u);
    ctx->pc = 0x11A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6B0u;
    // 0x11a6b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A6B0u, 0x11A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6B8u;
label_11a6b8:
    // 0x11a6b8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x11a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x11a6bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6c0: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
    ctx->pc = 0x11A6C0u;
    {
        const bool branch_taken_0x11a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6C0u;
        // 0x11a6c4: 0xfe420008  sd          $v0, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6c0) {
            ctx->pc = 0x11A32Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A6C8u;
label_11a6c8:
    // 0x11a6c8: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11a6c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11a6cc: 0x25f5fbea  addiu       $s5, $t7, -0x416
    ctx->pc = 0x11a6ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966250));
    // 0x11a6d0: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x11a6d0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x11a6d4: 0x157d00  sll         $t7, $s5, 20
    ctx->pc = 0x11a6d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x11a6d8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11a6d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11a6dc: 0x20f7823  subu        $t7, $s0, $t7
    ctx->pc = 0x11a6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x11a6e0: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11a6e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11a6e4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11a6e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11a6e8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x11a6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6ec: 0x1cf8825  or          $s1, $t6, $t7
    ctx->pc = 0x11a6ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11a6f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11a6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a6f4:
    // 0x11a6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6f8: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11A6F8u;
    SET_GPR_U32(ctx, 31, 0x11A700u);
    ctx->pc = 0x11A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6F8u;
    // 0x11a6fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11A6F8u, 0x11A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A700u;
label_11a700:
    // 0x11a700: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11A700u;
    SET_GPR_U32(ctx, 31, 0x11A708u);
    ctx->pc = 0x11A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A700u;
    // 0x11a704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11A700u, 0x11A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A708u;
label_11a708:
    // 0x11a708: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x11a708u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x11a70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a710: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A710u;
    SET_GPR_U32(ctx, 31, 0x11A718u);
    ctx->pc = 0x11A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A710u;
    // 0x11a714: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A710u, 0x11A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A718u;
label_11a718:
    // 0x11a718: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11a71c: 0x24050417  addiu       $a1, $zero, 0x417
    ctx->pc = 0x11a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x11a720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a724: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11A724u;
    SET_GPR_U32(ctx, 31, 0x11A72Cu);
    ctx->pc = 0x11A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A724u;
    // 0x11a728: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11A724u, 0x11A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A72Cu;
label_11a72c:
    // 0x11a72c: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11A72Cu;
    {
        const bool branch_taken_0x11a72c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x11A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A72Cu;
        // 0x11a730: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a72c) {
            ctx->pc = 0x11A6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a6f4;
        }
    }
    ctx->pc = 0x11A734u;
    // 0x11a734: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x11a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x11a738: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a73c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a740: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11a740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11a744:
    // 0x11a744: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a748: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a74c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11A74Cu;
    SET_GPR_U32(ctx, 31, 0x11A754u);
    ctx->pc = 0x11A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A74Cu;
    // 0x11a750: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11A74Cu, 0x11A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A754u;
label_11a754:
    // 0x11a754: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11A754u;
    {
        const bool branch_taken_0x11a754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A754u;
        // 0x11a758: 0x3c090066  lui         $t1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a754) {
            ctx->pc = 0x11A7A0u;
            goto label_11a7a0;
        }
    }
    ctx->pc = 0x11A75Cu;
    // 0x11a75c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11a75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a760: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11a760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a764: 0x25292a18  addiu       $t1, $t1, 0x2A18
    ctx->pc = 0x11a764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10776));
    // 0x11a768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a76c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a770: 0xc047206  jal         func_11C818
    ctx->pc = 0x11A770u;
    SET_GPR_U32(ctx, 31, 0x11A778u);
    ctx->pc = 0x11A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A770u;
    // 0x11a774: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C818u, 0x11A770u, 0x11A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A778u;
label_11a778:
    // 0x11a778: 0x681ffc7  bgez        $s4, . + 4 + (-0x39 << 2)
    ctx->pc = 0x11A778u;
    {
        const bool branch_taken_0x11a778 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A778u;
        // 0x11a77c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a778) {
            ctx->pc = 0x11A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a698;
        }
    }
    ctx->pc = 0x11A780u;
    // 0x11a780: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x11a780u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a784: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11A784u;
    SET_GPR_U32(ctx, 31, 0x11A78Cu);
    ctx->pc = 0x11A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A784u;
    // 0x11a788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11A784u, 0x11A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A78Cu;
label_11a78c:
    // 0x11a78c: 0xde450008  ld          $a1, 0x8($s2)
    ctx->pc = 0x11a78cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11a790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a794: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x11A794u;
    {
        const bool branch_taken_0x11a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A794u;
        // 0x11a798: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a794) {
            ctx->pc = 0x11A684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a684;
        }
    }
    ctx->pc = 0x11A79Cu;
    // 0x11a79c: 0x0  nop
    ctx->pc = 0x11a79cu;
    // NOP
label_11a7a0:
    // 0x11a7a0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11A7A0u;
    {
        const bool branch_taken_0x11a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7A0u;
        // 0x11a7a4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7a0) {
            ctx->pc = 0x11A744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a744;
        }
    }
    ctx->pc = 0x11A7A8u;
}
