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

// Function: sub_0033A380
// Address: 0x33a380 - 0x33a4ac
void sub_0033A380_0x33a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A380_0x33a380");
#endif

    switch (ctx->pc) {
        case 0x33a3b8u: goto label_33a3b8;
        case 0x33a3e8u: goto label_33a3e8;
        case 0x33a418u: goto label_33a418;
        case 0x33a438u: goto label_33a438;
        case 0x33a444u: goto label_33a444;
        case 0x33a48cu: goto label_33a48c;
        default: break;
    }

    ctx->pc = 0x33a380u;

    // 0x33a380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a384: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33a388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33a38c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33a390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33a394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a39c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33a39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a3a4: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x33a3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x33a3a8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A3A8u;
    {
        const bool branch_taken_0x33a3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3A8u;
        // 0x33a3ac: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3a8) {
            ctx->pc = 0x33A3D0u;
            goto label_33a3d0;
        }
    }
    ctx->pc = 0x33A3B0u;
    // 0x33a3b0: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A3B0u;
    SET_GPR_U32(ctx, 31, 0x33A3B8u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A3B0u, 0x33A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A3B8u;
label_33a3b8:
    // 0x33a3b8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x33a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x33a3bc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x33a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x33a3c0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x33a3c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a3c4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x33A3C4u;
    {
        const bool branch_taken_0x33a3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a3c4) {
            ctx->pc = 0x33A490u;
            goto label_33a490;
        }
    }
    ctx->pc = 0x33A3CCu;
    // 0x33a3cc: 0x0  nop
    ctx->pc = 0x33a3ccu;
    // NOP
label_33a3d0:
    // 0x33a3d0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x33a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x33a3d4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x33a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33a3d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A3D8u;
    {
        const bool branch_taken_0x33a3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3D8u;
        // 0x33a3dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3d8) {
            ctx->pc = 0x33A400u;
            goto label_33a400;
        }
    }
    ctx->pc = 0x33A3E0u;
    // 0x33a3e0: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A3E0u;
    SET_GPR_U32(ctx, 31, 0x33A3E8u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A3E0u, 0x33A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A3E8u;
label_33a3e8:
    // 0x33a3e8: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x33a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x33a3ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x33a3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a3f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3F0u;
    {
        const bool branch_taken_0x33a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a3f0) {
            ctx->pc = 0x33A400u;
            goto label_33a400;
        }
    }
    ctx->pc = 0x33A3F8u;
    // 0x33a3f8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x33a3f8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33a3fc: 0x0  nop
    ctx->pc = 0x33a3fcu;
    // NOP
label_33a400:
    // 0x33a400: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x33a400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x33a404: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x33a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x33a408: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A408u;
    {
        const bool branch_taken_0x33a408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a408) {
            ctx->pc = 0x33A430u;
            goto label_33a430;
        }
    }
    ctx->pc = 0x33A410u;
    // 0x33a410: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A410u;
    SET_GPR_U32(ctx, 31, 0x33A418u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A410u, 0x33A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A418u;
label_33a418:
    // 0x33a418: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x33a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x33a41c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x33a41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A420u;
    {
        const bool branch_taken_0x33a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a420) {
            ctx->pc = 0x33A430u;
            goto label_33a430;
        }
    }
    ctx->pc = 0x33A428u;
    // 0x33a428: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x33a428u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33a42c: 0x0  nop
    ctx->pc = 0x33a42cu;
    // NOP
label_33a430:
    // 0x33a430: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x33A430u;
    SET_GPR_U32(ctx, 31, 0x33A438u);
    ctx->pc = 0x33A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A430u;
    // 0x33a434: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x33A430u, 0x33A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A438u;
label_33a438:
    // 0x33a438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a43c: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x33A43Cu;
    SET_GPR_U32(ctx, 31, 0x33A444u);
    ctx->pc = 0x33A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A43Cu;
    // 0x33a440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x33A43Cu, 0x33A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A444u;
label_33a444:
    // 0x33a444: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x33a444u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33a448: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x33a448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x33a44c: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x33a44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x33a450: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x33a450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33a454: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x33a454u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33a458: 0x24c6dcd0  addiu       $a2, $a2, -0x2330
    ctx->pc = 0x33a458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958288));
    // 0x33a45c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x33a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x33a460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33a464: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a468: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33a46c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a474: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33a474u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a47c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33a480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a484: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33A484u;
    SET_GPR_U32(ctx, 31, 0x33A48Cu);
    ctx->pc = 0x33A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A484u;
    // 0x33a488: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33A484u, 0x33A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A48Cu;
label_33a48c:
    // 0x33a48c: 0x0  nop
    ctx->pc = 0x33a48cu;
    // NOP
label_33a490:
    // 0x33a490: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33a494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4A4u;
        // 0x33a4a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A4ACu;
}
