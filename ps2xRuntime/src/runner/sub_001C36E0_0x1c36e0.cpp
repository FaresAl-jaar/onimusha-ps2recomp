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

// Function: sub_001C36E0
// Address: 0x1c36e0 - 0x1c3934
void sub_001C36E0_0x1c36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C36E0_0x1c36e0");
#endif

    switch (ctx->pc) {
        case 0x1c370cu: goto label_1c370c;
        case 0x1c372cu: goto label_1c372c;
        case 0x1c373cu: goto label_1c373c;
        case 0x1c374cu: goto label_1c374c;
        case 0x1c3760u: goto label_1c3760;
        case 0x1c3780u: goto label_1c3780;
        case 0x1c378cu: goto label_1c378c;
        case 0x1c37a0u: goto label_1c37a0;
        case 0x1c37c4u: goto label_1c37c4;
        case 0x1c3804u: goto label_1c3804;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c3848u: goto label_1c3848;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c388cu: goto label_1c388c;
        case 0x1c38b0u: goto label_1c38b0;
        case 0x1c38c4u: goto label_1c38c4;
        case 0x1c38dcu: goto label_1c38dc;
        case 0x1c3904u: goto label_1c3904;
        case 0x1c3918u: goto label_1c3918;
        default: break;
    }

    ctx->pc = 0x1c36e0u;

    // 0x1c36e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c36e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c36e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c36ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c36f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c36f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c36f4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c36f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c36f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c36f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c36fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c36fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3704: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C3704u;
    SET_GPR_U32(ctx, 31, 0x1C370Cu);
    ctx->pc = 0x1C3708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3704u;
    // 0x1c3708: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C3704u, 0x1C370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C370Cu;
label_1c370c:
    // 0x1c370c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3710: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1c3714: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3718: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1c3718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1c371c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3720: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c3720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c3724: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3724u;
    SET_GPR_U32(ctx, 31, 0x1C372Cu);
    ctx->pc = 0x1C3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3724u;
    // 0x1c3728: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3724u, 0x1C372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C372Cu;
label_1c372c:
    // 0x1c372c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c372cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3730: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c3734: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3734u;
    SET_GPR_U32(ctx, 31, 0x1C373Cu);
    ctx->pc = 0x1C3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3734u;
    // 0x1c3738: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3734u, 0x1C373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C373Cu;
label_1c373c:
    // 0x1c373c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3740: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c3744: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3744u;
    SET_GPR_U32(ctx, 31, 0x1C374Cu);
    ctx->pc = 0x1C3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3744u;
    // 0x1c3748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3744u, 0x1C374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C374Cu;
label_1c374c:
    // 0x1c374c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c3750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3754: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1c3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c3758: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3758u;
    SET_GPR_U32(ctx, 31, 0x1C3760u);
    ctx->pc = 0x1C375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3758u;
    // 0x1c375c: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3758u, 0x1C3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3760u;
label_1c3760:
    // 0x1c3760: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1c3764: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1c3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1c3768: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c376c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1c376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1c3770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3774: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c3774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3778: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3778u;
    SET_GPR_U32(ctx, 31, 0x1C3780u);
    ctx->pc = 0x1C377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3778u;
    // 0x1c377c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3778u, 0x1C3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3780u;
label_1c3780:
    // 0x1c3780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3784: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C3784u;
    SET_GPR_U32(ctx, 31, 0x1C378Cu);
    ctx->pc = 0x1C3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3784u;
    // 0x1c3788: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C3784u, 0x1C378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C378Cu;
label_1c378c:
    // 0x1c378c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3794: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3798: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C3798u;
    SET_GPR_U32(ctx, 31, 0x1C37A0u);
    ctx->pc = 0x1C379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3798u;
    // 0x1c379c: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C3798u, 0x1C37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37A0u;
label_1c37a0:
    // 0x1c37a0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1c37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c37a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c37a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c37a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c37ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c37acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c37b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c37b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c37b4: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1c37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1c37b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c37b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c37bc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C37BCu;
    SET_GPR_U32(ctx, 31, 0x1C37C4u);
    ctx->pc = 0x1C37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37BCu;
    // 0x1c37c0: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C37BCu, 0x1C37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37C4u;
label_1c37c4:
    // 0x1c37c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c37c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c37c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c37cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c37ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c37d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c37d4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c37d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c37d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c37d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c37dc: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1c37dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1c37e0: 0x9e6378d0  lwu         $v1, 0x78D0($s3)
    ctx->pc = 0x1c37e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 30928)));
    // 0x1c37e4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c37e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c37e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c37ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c37f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c37f4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c37f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c37f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c37f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c37fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C37FCu;
    SET_GPR_U32(ctx, 31, 0x1C3804u);
    ctx->pc = 0x1C3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37FCu;
    // 0x1c3800: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C37FCu, 0x1C3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3804u;
label_1c3804:
    // 0x1c3804: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x1c3804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x1c3808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c380c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1c380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1c3810: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3810u;
    SET_GPR_U32(ctx, 31, 0x1C3818u);
    ctx->pc = 0x1C3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3810u;
    // 0x1c3814: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3810u, 0x1C3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3818u;
label_1c3818:
    // 0x1c3818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c381c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3820: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3820u;
    SET_GPR_U32(ctx, 31, 0x1C3828u);
    ctx->pc = 0x1C3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3820u;
    // 0x1c3824: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3820u, 0x1C3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3828u;
label_1c3828:
    // 0x1c3828: 0x8e6278c8  lw          $v0, 0x78C8($s3)
    ctx->pc = 0x1c3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c382c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1c3830: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1c3830u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3834: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C3834u;
    {
        const bool branch_taken_0x1c3834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3834u;
        // 0x1c3838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3834) {
            ctx->pc = 0x1C38F8u;
            goto label_1c38f8;
        }
    }
    ctx->pc = 0x1C383Cu;
    // 0x1c383c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1c383cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c3840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3844: 0x0  nop
    ctx->pc = 0x1c3844u;
    // NOP
label_1c3848:
    // 0x1c3848: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1c3848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c384c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c384cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c3850: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c3854: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1c3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1c3858: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c3858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c385c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c385cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c3860: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3864: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c3864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3868: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c3868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c386c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3870: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3870u;
    SET_GPR_U32(ctx, 31, 0x1C3878u);
    ctx->pc = 0x1C3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3870u;
    // 0x1c3874: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3870u, 0x1C3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3878u;
label_1c3878:
    // 0x1c3878: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c387c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3880: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3884: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3884u;
    SET_GPR_U32(ctx, 31, 0x1C388Cu);
    ctx->pc = 0x1C3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3884u;
    // 0x1c3888: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3884u, 0x1C388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C388Cu;
label_1c388c:
    // 0x1c388c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3890: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c3894: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c3894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3898: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1c3898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1c389c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c38a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c38a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C38A8u;
    SET_GPR_U32(ctx, 31, 0x1C38B0u);
    ctx->pc = 0x1C38ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38A8u;
    // 0x1c38ac: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C38A8u, 0x1C38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38B0u;
label_1c38b0:
    // 0x1c38b0: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1c38b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c38b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c38bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C38BCu;
    SET_GPR_U32(ctx, 31, 0x1C38C4u);
    ctx->pc = 0x1C38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38BCu;
    // 0x1c38c0: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C38BCu, 0x1C38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38C4u;
label_1c38c4:
    // 0x1c38c4: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1c38c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c38c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38cc: 0x34429080  ori         $v0, $v0, 0x9080
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    // 0x1c38d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c38d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C38D4u;
    SET_GPR_U32(ctx, 31, 0x1C38DCu);
    ctx->pc = 0x1C38D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38D4u;
    // 0x1c38d8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C38D4u, 0x1C38DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38DCu;
label_1c38dc:
    // 0x1c38dc: 0x8e6278c8  lw          $v0, 0x78C8($s3)
    ctx->pc = 0x1c38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30920)));
    // 0x1c38e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c38e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c38e4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c38e8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1c38ec: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c38f0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C38F0u;
    {
        const bool branch_taken_0x1c38f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38F0u;
        // 0x1c38f4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38f0) {
            ctx->pc = 0x1C3848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3848;
        }
    }
    ctx->pc = 0x1C38F8u;
label_1c38f8:
    // 0x1c38f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c38f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38fc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C38FCu;
    SET_GPR_U32(ctx, 31, 0x1C3904u);
    ctx->pc = 0x1C3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38FCu;
    // 0x1c3900: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C38FCu, 0x1C3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3904u;
label_1c3904:
    // 0x1c3904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3908: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c3908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c390c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c3910: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1C3910u;
    SET_GPR_U32(ctx, 31, 0x1C3918u);
    ctx->pc = 0x1C3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3910u;
    // 0x1c3914: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1C3910u, 0x1C3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3918u;
label_1c3918:
    // 0x1c3918: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c391c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c391cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c392c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C392Cu;
        // 0x1c3930: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3934u;
}
