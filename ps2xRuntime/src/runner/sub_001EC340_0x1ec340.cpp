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

// Function: sub_001EC340
// Address: 0x1ec340 - 0x1ec404
void sub_001EC340_0x1ec340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC340_0x1ec340");
#endif

    switch (ctx->pc) {
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        default: break;
    }

    ctx->pc = 0x1ec340u;

label_1ec340:
    // 0x1ec340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ec344:
    // 0x1ec344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ec348:
    // 0x1ec348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec34c:
    // 0x1ec34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec350:
    // 0x1ec350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec354:
    // 0x1ec354: 0xc078684  jal         func_1E1A10
label_1ec358:
    if (ctx->pc == 0x1EC358u) {
        ctx->pc = 0x1EC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC354u;
        // 0x1ec358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC35Cu;
        goto label_1ec35c;
    }
    ctx->pc = 0x1EC354u;
    SET_GPR_U32(ctx, 31, 0x1EC35Cu);
    ctx->pc = 0x1EC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC354u;
    // 0x1ec358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EC354u, 0x1EC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC35Cu;
label_1ec35c:
    // 0x1ec35c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ec35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1ec360:
    // 0x1ec360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec364:
    // 0x1ec364: 0xc076bec  jal         func_1DAFB0
label_1ec368:
    if (ctx->pc == 0x1EC368u) {
        ctx->pc = 0x1EC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC364u;
        // 0x1ec368: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC36Cu;
        goto label_1ec36c;
    }
    ctx->pc = 0x1EC364u;
    SET_GPR_U32(ctx, 31, 0x1EC36Cu);
    ctx->pc = 0x1EC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC364u;
    // 0x1ec368: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EC364u, 0x1EC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC36Cu;
label_1ec36c:
    // 0x1ec36c: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1ec36cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
label_1ec370:
    // 0x1ec370: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ec370u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_1ec374:
    // 0x1ec374: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ec374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec378:
    // 0x1ec378: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ec378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ec37c:
    // 0x1ec37c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ec37cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_1ec380:
    // 0x1ec380: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1ec380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_1ec384:
    // 0x1ec384: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1ec384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1ec388:
    // 0x1ec388: 0xc074350  jal         func_1D0D40
label_1ec38c:
    if (ctx->pc == 0x1EC38Cu) {
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC390u;
        goto label_1ec390;
    }
    ctx->pc = 0x1EC388u;
    SET_GPR_U32(ctx, 31, 0x1EC390u);
    ctx->pc = 0x1EC38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC388u;
    // 0x1ec38c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EC388u, 0x1EC390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC390u;
label_1ec390:
    // 0x1ec390: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x1ec390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_1ec394:
    // 0x1ec394: 0x9226003b  lbu         $a2, 0x3B($s1)
    ctx->pc = 0x1ec394u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
label_1ec398:
    // 0x1ec398: 0xc074378  jal         func_1D0DE0
label_1ec39c:
    if (ctx->pc == 0x1EC39Cu) {
        ctx->pc = 0x1EC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC398u;
        // 0x1ec39c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3A0u;
        goto label_1ec3a0;
    }
    ctx->pc = 0x1EC398u;
    SET_GPR_U32(ctx, 31, 0x1EC3A0u);
    ctx->pc = 0x1EC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC398u;
    // 0x1ec39c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EC398u, 0x1EC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3A0u;
label_1ec3a0:
    // 0x1ec3a0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1ec3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_1ec3a4:
    // 0x1ec3a4: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x1ec3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_1ec3a8:
    // 0x1ec3a8: 0xc0741a4  jal         func_1D0690
label_1ec3ac:
    if (ctx->pc == 0x1EC3ACu) {
        ctx->pc = 0x1EC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3A8u;
        // 0x1ec3ac: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3B0u;
        goto label_1ec3b0;
    }
    ctx->pc = 0x1EC3A8u;
    SET_GPR_U32(ctx, 31, 0x1EC3B0u);
    ctx->pc = 0x1EC3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3A8u;
    // 0x1ec3ac: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1EC3A8u, 0x1EC3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3B0u;
label_1ec3b0:
    // 0x1ec3b0: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1ec3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_1ec3b4:
    // 0x1ec3b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1ec3b8:
    // 0x1ec3b8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1ec3bc:
    if (ctx->pc == 0x1EC3BCu) {
        ctx->pc = 0x1EC3C0u;
        goto label_1ec3c0;
    }
    ctx->pc = 0x1EC3B8u;
    {
        const bool branch_taken_0x1ec3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3b8) {
            ctx->pc = 0x1EC3D8u;
            goto label_1ec3d8;
        }
    }
    ctx->pc = 0x1EC3C0u;
label_1ec3c0:
    // 0x1ec3c0: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1ec3c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ec3c4:
    // 0x1ec3c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec3c8:
    // 0x1ec3c8: 0x320f809  jalr        $t9
label_1ec3cc:
    if (ctx->pc == 0x1EC3CCu) {
        ctx->pc = 0x1EC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C8u;
        // 0x1ec3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3D0u;
        goto label_1ec3d0;
    }
    ctx->pc = 0x1EC3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC3D0u);
        ctx->pc = 0x1EC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3C8u;
        // 0x1ec3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC3C8u, 0x1EC3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC3D0u;
label_1ec3d0:
    // 0x1ec3d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ec3d4:
    if (ctx->pc == 0x1EC3D4u) {
        ctx->pc = 0x1EC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D0u;
        // 0x1ec3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3D8u;
        goto label_1ec3d8;
    }
    ctx->pc = 0x1EC3D0u;
    {
        const bool branch_taken_0x1ec3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3D0u;
        // 0x1ec3d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3d0) {
            ctx->pc = 0x1EC3F0u;
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC3D8u;
label_1ec3d8:
    // 0x1ec3d8: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x1ec3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_1ec3dc:
    // 0x1ec3dc: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x1ec3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ec3e0:
    // 0x1ec3e0: 0xc049522  jal         func_125488
label_1ec3e4:
    if (ctx->pc == 0x1EC3E4u) {
        ctx->pc = 0x1EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3E0u;
        // 0x1ec3e4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC3E8u;
        goto label_1ec3e8;
    }
    ctx->pc = 0x1EC3E0u;
    SET_GPR_U32(ctx, 31, 0x1EC3E8u);
    ctx->pc = 0x1EC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3E0u;
    // 0x1ec3e4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1EC3E0u, 0x1EC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3E8u;
label_1ec3e8:
    // 0x1ec3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec3ec:
    // 0x1ec3ec: 0x0  nop
    ctx->pc = 0x1ec3ecu;
    // NOP
label_1ec3f0:
    // 0x1ec3f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec3f4:
    // 0x1ec3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec3f8:
    // 0x1ec3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec3fc:
    // 0x1ec3fc: 0x3e00008  jr          $ra
label_1ec400:
    if (ctx->pc == 0x1EC400u) {
        ctx->pc = 0x1EC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3FCu;
        // 0x1ec400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC404u;
        goto label_fallthrough_0x1ec3fc;
    }
    ctx->pc = 0x1EC3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC3FCu;
        // 0x1ec400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec3fc:
    ctx->pc = 0x1EC404u;
}
