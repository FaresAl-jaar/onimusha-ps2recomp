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

// Function: sub_001BC830
// Address: 0x1bc830 - 0x1bd958
void sub_001BC830_0x1bc830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC830_0x1bc830");
#endif

    switch (ctx->pc) {
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca34u: goto label_1bca34;
        case 0x1bca5cu: goto label_1bca5c;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce30u: goto label_1bce30;
        case 0x1bce84u: goto label_1bce84;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcee8u: goto label_1bcee8;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf54u: goto label_1bcf54;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bd0ccu: goto label_1bd0cc;
        case 0x1bd0e0u: goto label_1bd0e0;
        case 0x1bd0ecu: goto label_1bd0ec;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1b4u: goto label_1bd1b4;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1f0u: goto label_1bd1f0;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd2a8u: goto label_1bd2a8;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd4a4u: goto label_1bd4a4;
        case 0x1bd4acu: goto label_1bd4ac;
        case 0x1bd4dcu: goto label_1bd4dc;
        case 0x1bd4e8u: goto label_1bd4e8;
        case 0x1bd50cu: goto label_1bd50c;
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd568u: goto label_1bd568;
        case 0x1bd5b0u: goto label_1bd5b0;
        case 0x1bd5c4u: goto label_1bd5c4;
        case 0x1bd5e4u: goto label_1bd5e4;
        case 0x1bd5f8u: goto label_1bd5f8;
        case 0x1bd61cu: goto label_1bd61c;
        case 0x1bd640u: goto label_1bd640;
        case 0x1bd7a4u: goto label_1bd7a4;
        case 0x1bd7acu: goto label_1bd7ac;
        case 0x1bd7dcu: goto label_1bd7dc;
        case 0x1bd7e8u: goto label_1bd7e8;
        case 0x1bd80cu: goto label_1bd80c;
        case 0x1bd84cu: goto label_1bd84c;
        case 0x1bd868u: goto label_1bd868;
        case 0x1bd8b0u: goto label_1bd8b0;
        case 0x1bd8c4u: goto label_1bd8c4;
        case 0x1bd8e4u: goto label_1bd8e4;
        case 0x1bd8f8u: goto label_1bd8f8;
        case 0x1bd91cu: goto label_1bd91c;
        default: break;
    }

    ctx->pc = 0x1bc830u;

    // 0x1bc830: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
    // 0x1bc834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc838: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bc838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bc83c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bc840: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bc844: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bc848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc84c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc858: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bc858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc85c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BC85Cu;
    SET_GPR_U32(ctx, 31, 0x1BC864u);
    ctx->pc = 0x1BC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC85Cu;
    // 0x1bc860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BC85Cu, 0x1BC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC864u;
label_1bc864:
    // 0x1bc864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc868: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bc86c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc870: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bc870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bc874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc878: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bc87c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC87Cu;
    SET_GPR_U32(ctx, 31, 0x1BC884u);
    ctx->pc = 0x1BC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC87Cu;
    // 0x1bc880: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC87Cu, 0x1BC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC884u;
label_1bc884:
    // 0x1bc884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc888: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bc88c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC88Cu;
    SET_GPR_U32(ctx, 31, 0x1BC894u);
    ctx->pc = 0x1BC890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC88Cu;
    // 0x1bc890: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC88Cu, 0x1BC894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC894u;
label_1bc894:
    // 0x1bc894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc898: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bc898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bc89c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC89Cu;
    SET_GPR_U32(ctx, 31, 0x1BC8A4u);
    ctx->pc = 0x1BC8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC89Cu;
    // 0x1bc8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC89Cu, 0x1BC8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8A4u;
label_1bc8a4:
    // 0x1bc8a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1bc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8ac: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bc8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bc8b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC8B0u;
    SET_GPR_U32(ctx, 31, 0x1BC8B8u);
    ctx->pc = 0x1BC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8B0u;
    // 0x1bc8b4: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC8B0u, 0x1BC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8B8u;
label_1bc8b8:
    // 0x1bc8b8: 0x24030700  addiu       $v1, $zero, 0x700
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1bc8bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1bc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1bc8c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc8c4: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1bc8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1bc8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bc8d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC8D0u;
    SET_GPR_U32(ctx, 31, 0x1BC8D8u);
    ctx->pc = 0x1BC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8D0u;
    // 0x1bc8d4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC8D0u, 0x1BC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8D8u;
label_1bc8d8:
    // 0x1bc8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8dc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC8DCu;
    SET_GPR_U32(ctx, 31, 0x1BC8E4u);
    ctx->pc = 0x1BC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8DCu;
    // 0x1bc8e0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC8DCu, 0x1BC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8E4u;
label_1bc8e4:
    // 0x1bc8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc8f0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BC8F0u;
    SET_GPR_U32(ctx, 31, 0x1BC8F8u);
    ctx->pc = 0x1BC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8F0u;
    // 0x1bc8f4: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BC8F0u, 0x1BC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8F8u;
label_1bc8f8:
    // 0x1bc8f8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1bc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bc8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc900: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc904: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bc904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1bc908: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc90c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1bc90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bc910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bc910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bc914: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC914u;
    SET_GPR_U32(ctx, 31, 0x1BC91Cu);
    ctx->pc = 0x1BC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC914u;
    // 0x1bc918: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC914u, 0x1BC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC91Cu;
label_1bc91c:
    // 0x1bc91c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc920: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bc920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bc924: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc928: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc92c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bc92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bc930: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc934: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1bc934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1bc938: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bc938u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bc93c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bc93cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bc940: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bc944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc94c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bc94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bc950: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bc950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bc954: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC954u;
    SET_GPR_U32(ctx, 31, 0x1BC95Cu);
    ctx->pc = 0x1BC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC954u;
    // 0x1bc958: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC954u, 0x1BC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC95Cu;
label_1bc95c:
    // 0x1bc95c: 0x3c020208  lui         $v0, 0x208
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)520 << 16));
    // 0x1bc960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc964: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bc964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bc968: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC968u;
    SET_GPR_U32(ctx, 31, 0x1BC970u);
    ctx->pc = 0x1BC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC968u;
    // 0x1bc96c: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC968u, 0x1BC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC970u;
label_1bc970:
    // 0x1bc970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc978: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC978u;
    SET_GPR_U32(ctx, 31, 0x1BC980u);
    ctx->pc = 0x1BC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC978u;
    // 0x1bc97c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC978u, 0x1BC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC980u;
label_1bc980:
    // 0x1bc980: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bc984: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1bc988: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bc988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc98c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BC98Cu;
    {
        const bool branch_taken_0x1bc98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC98Cu;
        // 0x1bc990: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc98c) {
            ctx->pc = 0x1BCA50u;
            goto label_1bca50;
        }
    }
    ctx->pc = 0x1BC994u;
    // 0x1bc994: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1bc994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bc998: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc99c: 0x0  nop
    ctx->pc = 0x1bc99cu;
    // NOP
label_1bc9a0:
    // 0x1bc9a0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bc9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bc9a4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bc9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bc9a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc9ac: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1bc9b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bc9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bc9b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bc9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bc9b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc9bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bc9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc9c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bc9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bc9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9c8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC9C8u;
    SET_GPR_U32(ctx, 31, 0x1BC9D0u);
    ctx->pc = 0x1BC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9C8u;
    // 0x1bc9cc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC9C8u, 0x1BC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9D0u;
label_1bc9d0:
    // 0x1bc9d0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc9dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC9DCu;
    SET_GPR_U32(ctx, 31, 0x1BC9E4u);
    ctx->pc = 0x1BC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9DCu;
    // 0x1bc9e0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC9DCu, 0x1BC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9E4u;
label_1bc9e4:
    // 0x1bc9e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc9e8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bc9ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc9f0: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1bc9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1bc9f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bc9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bca00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCA00u;
    SET_GPR_U32(ctx, 31, 0x1BCA08u);
    ctx->pc = 0x1BCA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA00u;
    // 0x1bca04: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCA00u, 0x1BCA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA08u;
label_1bca08:
    // 0x1bca08: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1bca08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1bca0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bca14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCA14u;
    SET_GPR_U32(ctx, 31, 0x1BCA1Cu);
    ctx->pc = 0x1BCA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA14u;
    // 0x1bca18: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCA14u, 0x1BCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA1Cu;
label_1bca1c:
    // 0x1bca1c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1bca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1bca20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca24: 0x34429080  ori         $v0, $v0, 0x9080
    ctx->pc = 0x1bca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36992);
    // 0x1bca28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bca2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCA2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCA34u);
    ctx->pc = 0x1BCA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA2Cu;
    // 0x1bca30: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCA2Cu, 0x1BCA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA34u;
label_1bca34:
    // 0x1bca34: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bca38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bca3c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1bca40: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1bca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1bca44: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1bca44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bca48: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BCA48u;
    {
        const bool branch_taken_0x1bca48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA48u;
        // 0x1bca4c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca48) {
            ctx->pc = 0x1BC9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc9a0;
        }
    }
    ctx->pc = 0x1BCA50u;
label_1bca50:
    // 0x1bca50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca54: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BCA54u;
    SET_GPR_U32(ctx, 31, 0x1BCA5Cu);
    ctx->pc = 0x1BCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA54u;
    // 0x1bca58: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BCA54u, 0x1BCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA5Cu;
label_1bca5c:
    // 0x1bca5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca60: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x1bca64: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1BCA64u;
    SET_GPR_U32(ctx, 31, 0x1BCA6Cu);
    ctx->pc = 0x1BCA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA64u;
    // 0x1bca68: 0x2606008c  addiu       $a2, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1BCA64u, 0x1BCA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA6Cu;
label_1bca6c:
    // 0x1bca6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bca70: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x1bca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x1bca74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bca78:
    // 0x1bca78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bca7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCA7Cu;
    {
        const bool branch_taken_0x1bca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca7c) {
            ctx->pc = 0x1BCA90u;
            goto label_1bca90;
        }
    }
    ctx->pc = 0x1BCA84u;
    // 0x1bca84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCA84u;
    {
        const bool branch_taken_0x1bca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA84u;
        // 0x1bca88: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca84) {
            ctx->pc = 0x1BCA98u;
            goto label_1bca98;
        }
    }
    ctx->pc = 0x1BCA8Cu;
    // 0x1bca8c: 0x0  nop
    ctx->pc = 0x1bca8cu;
    // NOP
label_1bca90:
    // 0x1bca90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bca90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1bca94: 0x0  nop
    ctx->pc = 0x1bca94u;
    // NOP
label_1bca98:
    // 0x1bca98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bca9c: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1bca9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bcaa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BCAA0u;
    {
        const bool branch_taken_0x1bcaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAA0u;
        // 0x1bcaa4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcaa0) {
            ctx->pc = 0x1BCA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bca78;
        }
    }
    ctx->pc = 0x1BCAA8u;
    // 0x1bcaa8: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bcaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcab0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BCAB0u;
    SET_GPR_U32(ctx, 31, 0x1BCAB8u);
    ctx->pc = 0x1BCAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB0u;
    // 0x1bcab4: 0x27a60460  addiu       $a2, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BCAB0u, 0x1BCAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAB8u;
label_1bcab8:
    // 0x1bcab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcabc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bcac0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcac4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bcac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bcac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcacc: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bcaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bcad0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCAD0u;
    SET_GPR_U32(ctx, 31, 0x1BCAD8u);
    ctx->pc = 0x1BCAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAD0u;
    // 0x1bcad4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCAD0u, 0x1BCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAD8u;
label_1bcad8:
    // 0x1bcad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcadc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bcae0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCAE0u;
    SET_GPR_U32(ctx, 31, 0x1BCAE8u);
    ctx->pc = 0x1BCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAE0u;
    // 0x1bcae4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCAE0u, 0x1BCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAE8u;
label_1bcae8:
    // 0x1bcae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcaec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BCAECu;
    SET_GPR_U32(ctx, 31, 0x1BCAF4u);
    ctx->pc = 0x1BCAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAECu;
    // 0x1bcaf0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BCAECu, 0x1BCAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAF4u;
label_1bcaf4:
    // 0x1bcaf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcafc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bcafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bcb00: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BCB00u;
    SET_GPR_U32(ctx, 31, 0x1BCB08u);
    ctx->pc = 0x1BCB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB00u;
    // 0x1bcb04: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BCB00u, 0x1BCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB08u;
label_1bcb08:
    // 0x1bcb08: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bcb0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcb14: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bcb18: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bcb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bcb1c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bcb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bcb20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bcb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bcb24: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BCB24u;
    SET_GPR_U32(ctx, 31, 0x1BCB2Cu);
    ctx->pc = 0x1BCB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB24u;
    // 0x1bcb28: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BCB24u, 0x1BCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB2Cu;
label_1bcb2c:
    // 0x1bcb2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bcb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcb30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bcb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bcb34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bcb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bcb38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcb3c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bcb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bcb40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcb44: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1bcb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1bcb48: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bcb48u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bcb4c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bcb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bcb50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bcb54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcb5c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bcb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bcb60: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bcb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bcb64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCB64u;
    SET_GPR_U32(ctx, 31, 0x1BCB6Cu);
    ctx->pc = 0x1BCB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB64u;
    // 0x1bcb68: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCB64u, 0x1BCB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB6Cu;
label_1bcb6c:
    // 0x1bcb6c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1bcb70: 0x3c023008  lui         $v0, 0x3008
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12296 << 16));
    // 0x1bcb74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcb78: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bcb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bcb7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bcb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcb84: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bcb88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCB88u;
    SET_GPR_U32(ctx, 31, 0x1BCB90u);
    ctx->pc = 0x1BCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB88u;
    // 0x1bcb8c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCB88u, 0x1BCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB90u;
label_1bcb90:
    // 0x1bcb90: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1bcb94: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1bcb98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcb9c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1bcb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1bcba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcba4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bcba8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCBA8u;
    SET_GPR_U32(ctx, 31, 0x1BCBB0u);
    ctx->pc = 0x1BCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBA8u;
    // 0x1bcbac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCBA8u, 0x1BCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBB0u;
label_1bcbb0:
    // 0x1bcbb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbb4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bcbb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCBB8u;
    SET_GPR_U32(ctx, 31, 0x1BCBC0u);
    ctx->pc = 0x1BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBB8u;
    // 0x1bcbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCBB8u, 0x1BCBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBC0u;
label_1bcbc0:
    // 0x1bcbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCBC8u;
    SET_GPR_U32(ctx, 31, 0x1BCBD0u);
    ctx->pc = 0x1BCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBC8u;
    // 0x1bcbcc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCBC8u, 0x1BCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBD0u;
label_1bcbd0:
    // 0x1bcbd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bcbd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbd4: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bcbd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bcbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcbdc: 0x0  nop
    ctx->pc = 0x1bcbdcu;
    // NOP
label_1bcbe0:
    // 0x1bcbe0: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bcbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bcbe4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bcbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bcbe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bcbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bcbec: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1bcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1bcbf0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bcbf4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bcbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bcbf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcbfc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bcbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bcc00: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bcc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bcc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCC08u;
    SET_GPR_U32(ctx, 31, 0x1BCC10u);
    ctx->pc = 0x1BCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC08u;
    // 0x1bcc0c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCC08u, 0x1BCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC10u;
label_1bcc10:
    // 0x1bcc10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bcc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bcc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bcc1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCC1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC24u);
    ctx->pc = 0x1BCC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC1Cu;
    // 0x1bcc20: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCC1Cu, 0x1BCC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC24u;
label_1bcc24:
    // 0x1bcc24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bcc28: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bcc2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcc30: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bcc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bcc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bcc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc3c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bcc40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCC40u;
    SET_GPR_U32(ctx, 31, 0x1BCC48u);
    ctx->pc = 0x1BCC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC40u;
    // 0x1bcc44: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCC40u, 0x1BCC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC48u;
label_1bcc48:
    // 0x1bcc48: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bcc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bcc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bcc54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCC54u;
    SET_GPR_U32(ctx, 31, 0x1BCC5Cu);
    ctx->pc = 0x1BCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC54u;
    // 0x1bcc58: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCC54u, 0x1BCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC5Cu;
label_1bcc5c:
    // 0x1bcc5c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bcc60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc64: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bcc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bcc68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bcc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcc6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC74u);
    ctx->pc = 0x1BCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC6Cu;
    // 0x1bcc70: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCC6Cu, 0x1BCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC74u;
label_1bcc74:
    // 0x1bcc74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bcc78: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bcc78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bcc7c: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1bcc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bcc80: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1BCC80u;
    {
        const bool branch_taken_0x1bcc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC80u;
        // 0x1bcc84: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc80) {
            ctx->pc = 0x1BCBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcbe0;
        }
    }
    ctx->pc = 0x1BCC88u;
    // 0x1bcc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc8c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BCC8Cu;
    SET_GPR_U32(ctx, 31, 0x1BCC94u);
    ctx->pc = 0x1BCC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC8Cu;
    // 0x1bcc90: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BCC8Cu, 0x1BCC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC94u;
label_1bcc94:
    // 0x1bcc94: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x1bcc94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1bcc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc9c: 0x8e0b0088  lw          $t3, 0x88($s0)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1bcca0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1bcca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1bcca4: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x1bcca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1bcca8: 0x26070054  addiu       $a3, $s0, 0x54
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1bccac: 0x26090068  addiu       $t1, $s0, 0x68
    ctx->pc = 0x1bccacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1bccb0: 0xc070774  jal         func_1C1DD0
    ctx->pc = 0x1BCCB0u;
    SET_GPR_U32(ctx, 31, 0x1BCCB8u);
    ctx->pc = 0x1BCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCB0u;
    // 0x1bccb4: 0x260a0078  addiu       $t2, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DD0u, 0x1BCCB0u, 0x1BCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCB8u;
label_1bccb8:
    // 0x1bccb8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bccbc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1bccbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bccc0: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
    ctx->pc = 0x1BCCC0u;
    {
        const bool branch_taken_0x1bccc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bccc0) {
            ctx->pc = 0x1BCF78u;
            goto label_1bcf78;
        }
    }
    ctx->pc = 0x1BCCC8u;
    // 0x1bccc8: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bcccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccd0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BCCD0u;
    SET_GPR_U32(ctx, 31, 0x1BCCD8u);
    ctx->pc = 0x1BCCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCD0u;
    // 0x1bccd4: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BCCD0u, 0x1BCCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCD8u;
label_1bccd8:
    // 0x1bccd8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bccdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcce0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bcce4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCCE4u;
    SET_GPR_U32(ctx, 31, 0x1BCCECu);
    ctx->pc = 0x1BCCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCE4u;
    // 0x1bcce8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCCE4u, 0x1BCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCECu;
label_1bccec:
    // 0x1bccec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccf0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BCCF0u;
    SET_GPR_U32(ctx, 31, 0x1BCCF8u);
    ctx->pc = 0x1BCCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCF0u;
    // 0x1bccf4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BCCF0u, 0x1BCCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCF8u;
label_1bccf8:
    // 0x1bccf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bccfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bccfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bcd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bcd04: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bcd08: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bcd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bcd0c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bcd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bcd10: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bcd10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bcd14: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BCD14u;
    SET_GPR_U32(ctx, 31, 0x1BCD1Cu);
    ctx->pc = 0x1BCD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD14u;
    // 0x1bcd18: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BCD14u, 0x1BCD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bcd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcd20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bcd24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bcd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bcd28: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bcd2c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bcd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bcd30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcd34: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1bcd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bcd38: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bcd38u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bcd3c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bcd3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bcd40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bcd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcd4c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bcd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bcd50: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bcd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bcd54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCD54u;
    SET_GPR_U32(ctx, 31, 0x1BCD5Cu);
    ctx->pc = 0x1BCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD54u;
    // 0x1bcd58: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCD54u, 0x1BCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD5Cu;
label_1bcd5c:
    // 0x1bcd5c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BCD5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD64u);
    ctx->pc = 0x1BCD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD5Cu;
    // 0x1bcd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BCD5Cu, 0x1BCD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD64u;
label_1bcd64:
    // 0x1bcd64: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bcd64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd6c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1bcd70: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bcd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bcd74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bcd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcd78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bcd7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bcd80: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bcd80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bcd84: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1bcd84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bcd88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCD88u;
    SET_GPR_U32(ctx, 31, 0x1BCD90u);
    ctx->pc = 0x1BCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD88u;
    // 0x1bcd8c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCD88u, 0x1BCD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD90u;
label_1bcd90:
    // 0x1bcd90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcd94: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x1bcd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x1bcd98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcd9c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bcd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bcda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcda4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bcda8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCDA8u;
    SET_GPR_U32(ctx, 31, 0x1BCDB0u);
    ctx->pc = 0x1BCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDA8u;
    // 0x1bcdac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCDA8u, 0x1BCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDB0u;
label_1bcdb0:
    // 0x1bcdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdb4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bcdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bcdb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCDB8u;
    SET_GPR_U32(ctx, 31, 0x1BCDC0u);
    ctx->pc = 0x1BCDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDB8u;
    // 0x1bcdbc: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCDB8u, 0x1BCDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDC0u;
label_1bcdc0:
    // 0x1bcdc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdc4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bcdc8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCDC8u;
    SET_GPR_U32(ctx, 31, 0x1BCDD0u);
    ctx->pc = 0x1BCDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDC8u;
    // 0x1bcdcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCDC8u, 0x1BCDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDD0u;
label_1bcdd0:
    // 0x1bcdd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bcdd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCDD4u;
    {
        const bool branch_taken_0x1bcdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDD4u;
        // 0x1bcdd8: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdd4) {
            ctx->pc = 0x1BCDF8u;
            goto label_1bcdf8;
        }
    }
    ctx->pc = 0x1BCDDCu;
    // 0x1bcddc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1bcde0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcde8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bcde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bcdec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCDECu;
    SET_GPR_U32(ctx, 31, 0x1BCDF4u);
    ctx->pc = 0x1BCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDECu;
    // 0x1bcdf0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCDECu, 0x1BCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDF4u;
label_1bcdf4:
    // 0x1bcdf4: 0x0  nop
    ctx->pc = 0x1bcdf4u;
    // NOP
label_1bcdf8:
    // 0x1bcdf8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1bcdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bcdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce00: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCE00u;
    {
        const bool branch_taken_0x1bce00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE00u;
        // 0x1bce04: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce00) {
            ctx->pc = 0x1BCE20u;
            goto label_1bce20;
        }
    }
    ctx->pc = 0x1BCE08u;
    // 0x1bce08: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bce0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bce0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bce10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce14: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bce18: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCE18u;
    SET_GPR_U32(ctx, 31, 0x1BCE20u);
    ctx->pc = 0x1BCE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE18u;
    // 0x1bce1c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCE18u, 0x1BCE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE20u;
label_1bce20:
    // 0x1bce20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bce24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCE28u;
    SET_GPR_U32(ctx, 31, 0x1BCE30u);
    ctx->pc = 0x1BCE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE28u;
    // 0x1bce2c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCE28u, 0x1BCE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE30u;
label_1bce30:
    // 0x1bce30: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1bce30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bce34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce38: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bce38u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bce3c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bce40: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bce44: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bce44u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bce48: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bce48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bce4c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bce4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bce50: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bce50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bce54: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bce54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bce58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bce5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bce60: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bce60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bce64: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bce64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bce68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bce6c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bce6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bce70: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bce70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bce74: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bce78: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bce7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE84u);
    ctx->pc = 0x1BCE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE7Cu;
    // 0x1bce80: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCE7Cu, 0x1BCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE84u;
label_1bce84:
    // 0x1bce84: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bce88: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bce8c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1bce8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bce90: 0x102002a9  beqz        $at, . + 4 + (0x2A9 << 2)
    ctx->pc = 0x1BCE90u;
    {
        const bool branch_taken_0x1bce90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE90u;
        // 0x1bce94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce90) {
            ctx->pc = 0x1BD938u;
            goto label_1bd938;
        }
    }
    ctx->pc = 0x1BCE98u;
    // 0x1bce98: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bce9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bce9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcea0:
    // 0x1bcea0: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bcea4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bcea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bcea8: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bcea8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bceac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bceb0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1bceb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bceb4: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bceb8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bceb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bcebc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bcebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bcec0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bcec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcec8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bcec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bcecc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bced0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bced4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bced8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bcedc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bcedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bcee0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCEE0u;
    SET_GPR_U32(ctx, 31, 0x1BCEE8u);
    ctx->pc = 0x1BCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEE0u;
    // 0x1bcee4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCEE0u, 0x1BCEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEE8u;
label_1bcee8:
    // 0x1bcee8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bceec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcef0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bcef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCEF4u;
    SET_GPR_U32(ctx, 31, 0x1BCEFCu);
    ctx->pc = 0x1BCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEF4u;
    // 0x1bcef8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCEF4u, 0x1BCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEFCu;
label_1bcefc:
    // 0x1bcefc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bcf00: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bcf04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcf08: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bcf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bcf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bcf14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCF14u;
    SET_GPR_U32(ctx, 31, 0x1BCF1Cu);
    ctx->pc = 0x1BCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF14u;
    // 0x1bcf18: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCF14u, 0x1BCF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF1Cu;
label_1bcf1c:
    // 0x1bcf1c: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bcf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bcf28: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCF28u;
    SET_GPR_U32(ctx, 31, 0x1BCF30u);
    ctx->pc = 0x1BCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF28u;
    // 0x1bcf2c: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCF28u, 0x1BCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF30u;
label_1bcf30:
    // 0x1bcf30: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bcf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bcf34: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bcf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bcf38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bcf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bcf3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bcf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bcf40: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bcf44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bcf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bcf4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BCF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF54u);
    ctx->pc = 0x1BCF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF4Cu;
    // 0x1bcf50: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BCF4Cu, 0x1BCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF54u;
label_1bcf54:
    // 0x1bcf54: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bcf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bcf58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bcf5c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1bcf60: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bcf64: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1bcf64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bcf68: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1BCF68u;
    {
        const bool branch_taken_0x1bcf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF68u;
        // 0x1bcf6c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf68) {
            ctx->pc = 0x1BCEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcea0;
        }
    }
    ctx->pc = 0x1BCF70u;
    // 0x1bcf70: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x1BCF70u;
    {
        const bool branch_taken_0x1bcf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf70) {
            ctx->pc = 0x1BD938u;
            goto label_1bd938;
        }
    }
    ctx->pc = 0x1BCF78u;
label_1bcf78:
    // 0x1bcf78: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bcf7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bcf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf80: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1bcf84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bcf84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf88:
    // 0x1bcf88: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bcf88u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x70000000
    // 0x1bcf8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bcf90: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x1bcf90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bcf94: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bcf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bcf98: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bcf9c: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bcfa0: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bcfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bcfa4: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bcfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bcfa8: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bcfac: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bcfb0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bcfb4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bcfb8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bcfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bcfbc: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bcfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bcfc0: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bcfc4: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bcfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bcfc8: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bcfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bcfcc: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bcfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bcfd0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bcfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bcfd4: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1bcfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1bcfd8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bcfdc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bcfdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bcfe0: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bcfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bcfe4: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bcfe8: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bcfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bcfec: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bcfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bcff0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bcff4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bcff8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bcffc: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1bcffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bd000: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bd000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd004: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd004u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd008: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd00c: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd010: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd014: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd018: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd01c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1bd01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1bd020: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd024: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bd024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd028: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd028u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd02c: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd030: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd034: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd038: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd03c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd040: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1bd040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1bd044: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bd048: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bd048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd04c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd050: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd054: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd058: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd058u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd05c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd060: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd064: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1bd064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1bd068: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd06c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bd06cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd070: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd074: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd078: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd07c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd080: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd084: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd088: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1bd088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1bd08c: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1bd090: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bd090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd094: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bd094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bd098: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd09c: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd0a0: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd0a4: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd0a8: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd0ac: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd0acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd0b0: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1bd0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x1bd0b4: 0x14a0ffb4  bnez        $a1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1BD0B4u;
    {
        const bool branch_taken_0x1bd0b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0B4u;
        // 0x1bd0b8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0b4) {
            ctx->pc = 0x1BCF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcf88;
        }
    }
    ctx->pc = 0x1BD0BCu;
    // 0x1bd0bc: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bd0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0c4: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BD0C4u;
    SET_GPR_U32(ctx, 31, 0x1BD0CCu);
    ctx->pc = 0x1BD0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0C4u;
    // 0x1bd0c8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BD0C4u, 0x1BD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0CCu;
label_1bd0cc:
    // 0x1bd0cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0d4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bd0d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD0D8u;
    SET_GPR_U32(ctx, 31, 0x1BD0E0u);
    ctx->pc = 0x1BD0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0D8u;
    // 0x1bd0dc: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD0D8u, 0x1BD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0E0u;
label_1bd0e0:
    // 0x1bd0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0e4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD0E4u;
    SET_GPR_U32(ctx, 31, 0x1BD0ECu);
    ctx->pc = 0x1BD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0E4u;
    // 0x1bd0e8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD0E4u, 0x1BD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0ECu;
label_1bd0ec:
    // 0x1bd0ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd0f8: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bd0fc: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bd0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bd100: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bd100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bd104: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bd104u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd108: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD108u;
    SET_GPR_U32(ctx, 31, 0x1BD110u);
    ctx->pc = 0x1BD10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD108u;
    // 0x1bd10c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD108u, 0x1BD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD110u;
label_1bd110:
    // 0x1bd110: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd114: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bd114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bd118: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd11c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd120: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bd120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bd124: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd128: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1bd128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bd12c: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bd12cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd130: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bd130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bd134: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bd134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bd138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd13c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd140: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bd140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bd144: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bd144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bd148: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD148u;
    SET_GPR_U32(ctx, 31, 0x1BD150u);
    ctx->pc = 0x1BD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD148u;
    // 0x1bd14c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD148u, 0x1BD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD150u;
label_1bd150:
    // 0x1bd150: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BD150u;
    SET_GPR_U32(ctx, 31, 0x1BD158u);
    ctx->pc = 0x1BD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD150u;
    // 0x1bd154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BD150u, 0x1BD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD158u;
label_1bd158:
    // 0x1bd158: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bd158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd160: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1bd164: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bd164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bd168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd16c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd174: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bd174u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bd178: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1bd178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bd17c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD17Cu;
    SET_GPR_U32(ctx, 31, 0x1BD184u);
    ctx->pc = 0x1BD180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD17Cu;
    // 0x1bd180: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD17Cu, 0x1BD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD184u;
label_1bd184:
    // 0x1bd184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd188: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x1bd18c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd190: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1bd190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1bd194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd198: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bd198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bd19c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD19Cu;
    SET_GPR_U32(ctx, 31, 0x1BD1A4u);
    ctx->pc = 0x1BD1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD19Cu;
    // 0x1bd1a0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD19Cu, 0x1BD1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1A4u;
label_1bd1a4:
    // 0x1bd1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1a8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bd1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bd1ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD1ACu;
    SET_GPR_U32(ctx, 31, 0x1BD1B4u);
    ctx->pc = 0x1BD1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1ACu;
    // 0x1bd1b0: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD1ACu, 0x1BD1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1B4u;
label_1bd1b4:
    // 0x1bd1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1b8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bd1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bd1bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD1BCu;
    SET_GPR_U32(ctx, 31, 0x1BD1C4u);
    ctx->pc = 0x1BD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1BCu;
    // 0x1bd1c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD1BCu, 0x1BD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C4u;
label_1bd1c4:
    // 0x1bd1c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bd1c8: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1bd1cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1d4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bd1d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD1D8u;
    SET_GPR_U32(ctx, 31, 0x1BD1E0u);
    ctx->pc = 0x1BD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1D8u;
    // 0x1bd1dc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD1D8u, 0x1BD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1E0u;
label_1bd1e0:
    // 0x1bd1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD1E8u;
    SET_GPR_U32(ctx, 31, 0x1BD1F0u);
    ctx->pc = 0x1BD1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1E8u;
    // 0x1bd1ec: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD1E8u, 0x1BD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1F0u;
label_1bd1f0:
    // 0x1bd1f0: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1bd1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1f8: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bd1f8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bd1fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bd200: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bd204: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bd204u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bd208: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bd208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bd20c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bd20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bd210: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bd210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bd214: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bd214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bd218: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd21c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd220: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bd220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bd224: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bd224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bd228: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd22c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bd22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bd230: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bd230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bd234: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bd234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bd238: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bd238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bd23c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD23Cu;
    SET_GPR_U32(ctx, 31, 0x1BD244u);
    ctx->pc = 0x1BD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD23Cu;
    // 0x1bd240: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD23Cu, 0x1BD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD244u;
label_1bd244:
    // 0x1bd244: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd248: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bd24c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bd24cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd250: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BD250u;
    {
        const bool branch_taken_0x1bd250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD250u;
        // 0x1bd254: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd250) {
            ctx->pc = 0x1BD330u;
            goto label_1bd330;
        }
    }
    ctx->pc = 0x1BD258u;
    // 0x1bd258: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bd25c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bd25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd260:
    // 0x1bd260: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1bd260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bd264: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd268: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bd268u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bd26c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bd26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bd270: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bd270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bd274: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bd278: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bd278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bd27c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bd27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd280: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bd280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bd284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd288: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bd288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bd28c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bd28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bd290: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd294: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd298: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd29c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bd29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bd2a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD2A0u;
    SET_GPR_U32(ctx, 31, 0x1BD2A8u);
    ctx->pc = 0x1BD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2A0u;
    // 0x1bd2a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD2A0u, 0x1BD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2A8u;
label_1bd2a8:
    // 0x1bd2a8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd2b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD2B4u;
    SET_GPR_U32(ctx, 31, 0x1BD2BCu);
    ctx->pc = 0x1BD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2B4u;
    // 0x1bd2b8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD2B4u, 0x1BD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2BCu;
label_1bd2bc:
    // 0x1bd2bc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd2c0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bd2c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd2c8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bd2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bd2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bd2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bd2d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD2D4u;
    SET_GPR_U32(ctx, 31, 0x1BD2DCu);
    ctx->pc = 0x1BD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2D4u;
    // 0x1bd2d8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD2D4u, 0x1BD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2DCu;
label_1bd2dc:
    // 0x1bd2dc: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bd2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd2e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD2E8u;
    SET_GPR_U32(ctx, 31, 0x1BD2F0u);
    ctx->pc = 0x1BD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2E8u;
    // 0x1bd2ec: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD2E8u, 0x1BD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2F0u;
label_1bd2f0:
    // 0x1bd2f0: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bd2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bd2f4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd2f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bd2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bd2fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd300: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bd300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bd304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd308: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd30c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD30Cu;
    SET_GPR_U32(ctx, 31, 0x1BD314u);
    ctx->pc = 0x1BD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD30Cu;
    // 0x1bd310: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD30Cu, 0x1BD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD314u;
label_1bd314:
    // 0x1bd314: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd318: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bd318u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bd31c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bd320: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bd320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bd324: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1bd324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd328: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1BD328u;
    {
        const bool branch_taken_0x1bd328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD328u;
        // 0x1bd32c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd328) {
            ctx->pc = 0x1BD260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd260;
        }
    }
    ctx->pc = 0x1BD330u;
label_1bd330:
    // 0x1bd330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bd330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd334: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1bd338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bd338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd33c: 0x0  nop
    ctx->pc = 0x1bd33cu;
    // NOP
label_1bd340:
    // 0x1bd340: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bd340u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x70000000
    // 0x1bd344: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bd348: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x1bd348u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bd34c: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd350: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd354: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd358: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd35c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd360: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd364: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd368: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd36c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bd370: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bd374: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd374u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd378: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd37c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd37cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd380: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd384: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd388: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd388u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd38c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd390: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd394: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1bd394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1bd398: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd39c: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd39cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd3a0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd3a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd3a4: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd3a8: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd3ac: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd3b0: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd3b4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd3b8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd3bc: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bd3c0: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bd3c4: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd3c8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd3cc: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd3d0: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd3d4: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd3d8: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd3dc: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd3e0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd3e4: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1bd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1bd3e8: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bd3ec: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd3f0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd3f4: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd3f8: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd3fc: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd400: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd404: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd408: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd40c: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1bd40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1bd410: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1bd410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bd414: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd414u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd418: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd41c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd420: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd424: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd428: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd42c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd430: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd434: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1bd434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1bd438: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1bd438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bd43c: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd43cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd440: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd444: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd444u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd448: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd44c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bd44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd450: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd454: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd458: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd45c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1bd45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1bd460: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1bd460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1bd464: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bd468: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bd46c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bd46cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bd470: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bd474: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bd478: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bd478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bd47c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bd480: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bd484: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bd488: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1bd488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x1bd48c: 0x14a0ffac  bnez        $a1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1BD48Cu;
    {
        const bool branch_taken_0x1bd48c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD48Cu;
        // 0x1bd490: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd48c) {
            ctx->pc = 0x1BD340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd340;
        }
    }
    ctx->pc = 0x1BD494u;
    // 0x1bd494: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bd494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd49c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BD49Cu;
    SET_GPR_U32(ctx, 31, 0x1BD4A4u);
    ctx->pc = 0x1BD4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD49Cu;
    // 0x1bd4a0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BD49Cu, 0x1BD4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4A4u;
label_1bd4a4:
    // 0x1bd4a4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BD4A4u;
    SET_GPR_U32(ctx, 31, 0x1BD4ACu);
    ctx->pc = 0x1BD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4A4u;
    // 0x1bd4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BD4A4u, 0x1BD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4ACu;
label_1bd4ac:
    // 0x1bd4ac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1bd4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bd4b8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bd4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bd4bc: 0x344300ff  ori         $v1, $v0, 0xFF
    ctx->pc = 0x1bd4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1bd4c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bd4c4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd4c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd4cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd4d0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bd4d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bd4d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD4D4u;
    SET_GPR_U32(ctx, 31, 0x1BD4DCu);
    ctx->pc = 0x1BD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4D4u;
    // 0x1bd4d8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD4D4u, 0x1BD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4DCu;
label_1bd4dc:
    // 0x1bd4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4e0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD4E0u;
    SET_GPR_U32(ctx, 31, 0x1BD4E8u);
    ctx->pc = 0x1BD4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4E0u;
    // 0x1bd4e4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD4E0u, 0x1BD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4E8u;
label_1bd4e8:
    // 0x1bd4e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd4f4: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bd4f8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bd4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bd4fc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bd4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bd500: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bd500u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd504: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD504u;
    SET_GPR_U32(ctx, 31, 0x1BD50Cu);
    ctx->pc = 0x1BD508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD504u;
    // 0x1bd508: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD504u, 0x1BD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD50Cu;
label_1bd50c:
    // 0x1bd50c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd510: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bd514: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd518: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd51c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bd51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bd520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd524: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1bd524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bd528: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bd528u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd52c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bd52cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bd530: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bd530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bd534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd53c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bd53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bd540: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bd540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bd544: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD544u;
    SET_GPR_U32(ctx, 31, 0x1BD54Cu);
    ctx->pc = 0x1BD548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD544u;
    // 0x1bd548: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD544u, 0x1BD54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD54Cu;
label_1bd54c:
    // 0x1bd54c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd550: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bd554: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bd554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd558: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BD558u;
    {
        const bool branch_taken_0x1bd558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD558u;
        // 0x1bd55c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd558) {
            ctx->pc = 0x1BD638u;
            goto label_1bd638;
        }
    }
    ctx->pc = 0x1BD560u;
    // 0x1bd560: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bd564: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd568:
    // 0x1bd568: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1bd568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bd56c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd570: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bd570u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bd574: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bd574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bd578: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bd578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bd57c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bd580: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bd580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bd584: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bd584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd588: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bd58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd590: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bd590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bd594: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bd594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bd598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd59c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd5a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bd5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bd5a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD5A8u;
    SET_GPR_U32(ctx, 31, 0x1BD5B0u);
    ctx->pc = 0x1BD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5A8u;
    // 0x1bd5ac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD5A8u, 0x1BD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5B0u;
label_1bd5b0:
    // 0x1bd5b0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd5bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD5BCu;
    SET_GPR_U32(ctx, 31, 0x1BD5C4u);
    ctx->pc = 0x1BD5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5BCu;
    // 0x1bd5c0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD5BCu, 0x1BD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C4u;
label_1bd5c4:
    // 0x1bd5c4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd5c8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bd5cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd5d0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bd5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bd5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bd5dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD5DCu;
    SET_GPR_U32(ctx, 31, 0x1BD5E4u);
    ctx->pc = 0x1BD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5DCu;
    // 0x1bd5e0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD5DCu, 0x1BD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E4u;
label_1bd5e4:
    // 0x1bd5e4: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bd5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bd5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd5f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD5F0u;
    SET_GPR_U32(ctx, 31, 0x1BD5F8u);
    ctx->pc = 0x1BD5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5F0u;
    // 0x1bd5f4: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD5F0u, 0x1BD5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5F8u;
label_1bd5f8:
    // 0x1bd5f8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bd5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bd5fc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd600: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bd600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bd604: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd608: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bd608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bd60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd610: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd614: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD614u;
    SET_GPR_U32(ctx, 31, 0x1BD61Cu);
    ctx->pc = 0x1BD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD614u;
    // 0x1bd618: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD614u, 0x1BD61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD61Cu;
label_1bd61c:
    // 0x1bd61c: 0x8e2278c8  lw          $v0, 0x78C8($s1)
    ctx->pc = 0x1bd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd620: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bd624: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bd628: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bd62c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1bd62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bd630: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1BD630u;
    {
        const bool branch_taken_0x1bd630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD630u;
        // 0x1bd634: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd630) {
            ctx->pc = 0x1BD568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd568;
        }
    }
    ctx->pc = 0x1BD638u;
label_1bd638:
    // 0x1bd638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bd638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd63c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1bd640:
    // 0x1bd640: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x70000000
    // 0x1bd644: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bd648: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1bd648u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bd64c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd650: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd654: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd658: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd65c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd660: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd664: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd668: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd66c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1bd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1bd670: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd674: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd678: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd67c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd680: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd684: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bd684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd688: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd68c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd690: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd694: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1bd694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1bd698: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bd69c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd6a0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd6a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd6a4: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd6a8: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd6ac: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd6b0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd6b4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd6b8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd6bc: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1bd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1bd6c0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd6c4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd6c8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd6c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd6cc: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd6d0: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd6d4: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bd6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd6d8: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd6dc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd6e0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd6e4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1bd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1bd6e8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bd6ec: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd6f0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd6f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd6f4: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd6f8: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd6fc: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd700: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd704: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd708: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd70c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1bd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1bd710: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1bd714: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd718: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd71c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd720: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd724: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bd724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd728: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd728u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd72c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd730: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd734: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x1bd734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x1bd738: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bd73c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd740: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd744: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd744u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd748: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd74c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bd74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd750: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd754: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd758: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd75c: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1bd75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1bd760: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1bd760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bd764: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bd764u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bd768: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1bd768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1bd76c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bd76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bd770: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bd774: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bd778: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bd778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bd77c: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bd77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bd780: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bd784: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bd784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bd788: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1bd788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1bd78c: 0x1480ffac  bnez        $a0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1BD78Cu;
    {
        const bool branch_taken_0x1bd78c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD78Cu;
        // 0x1bd790: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd78c) {
            ctx->pc = 0x1BD640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd640;
        }
    }
    ctx->pc = 0x1BD794u;
    // 0x1bd794: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd79c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BD79Cu;
    SET_GPR_U32(ctx, 31, 0x1BD7A4u);
    ctx->pc = 0x1BD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD79Cu;
    // 0x1bd7a0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BD79Cu, 0x1BD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7A4u;
label_1bd7a4:
    // 0x1bd7a4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BD7A4u;
    SET_GPR_U32(ctx, 31, 0x1BD7ACu);
    ctx->pc = 0x1BD7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD7A4u;
    // 0x1bd7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BD7A4u, 0x1BD7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7ACu;
label_1bd7ac:
    // 0x1bd7ac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1bd7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7b4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1bd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1bd7b8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bd7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bd7bc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1bd7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bd7c0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bd7c4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd7c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd7cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bd7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bd7d0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bd7d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bd7d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD7D4u;
    SET_GPR_U32(ctx, 31, 0x1BD7DCu);
    ctx->pc = 0x1BD7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD7D4u;
    // 0x1bd7d8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD7D4u, 0x1BD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7DCu;
label_1bd7dc:
    // 0x1bd7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7e0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD7E0u;
    SET_GPR_U32(ctx, 31, 0x1BD7E8u);
    ctx->pc = 0x1BD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD7E0u;
    // 0x1bd7e4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD7E0u, 0x1BD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD7E8u;
label_1bd7e8:
    // 0x1bd7e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd7f4: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bd7f8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bd7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bd7fc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bd7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bd800: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1bd800u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd804: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BD804u;
    SET_GPR_U32(ctx, 31, 0x1BD80Cu);
    ctx->pc = 0x1BD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD804u;
    // 0x1bd808: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BD804u, 0x1BD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD80Cu;
label_1bd80c:
    // 0x1bd80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bd80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd810: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bd814: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bd814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bd818: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bd818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bd81c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bd81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bd820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd824: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1bd824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bd828: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bd828u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bd82c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bd82cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bd830: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bd834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd838: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd83c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bd83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bd840: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bd840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bd844: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD844u;
    SET_GPR_U32(ctx, 31, 0x1BD84Cu);
    ctx->pc = 0x1BD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD844u;
    // 0x1bd848: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD844u, 0x1BD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD84Cu;
label_1bd84c:
    // 0x1bd84c: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd850: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bd854: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1bd854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd858: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BD858u;
    {
        const bool branch_taken_0x1bd858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD858u;
        // 0x1bd85c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd858) {
            ctx->pc = 0x1BD938u;
            goto label_1bd938;
        }
    }
    ctx->pc = 0x1BD860u;
    // 0x1bd860: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bd864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bd864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd868:
    // 0x1bd868: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1bd868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bd86c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd870: 0x9e2678c0  lwu         $a2, 0x78C0($s1)
    ctx->pc = 0x1bd870u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bd874: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bd874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bd878: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1bd878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bd87c: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bd880: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bd880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bd884: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bd884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd888: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bd88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd890: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bd890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bd894: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bd894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bd898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd89c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd8a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd8a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bd8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bd8a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD8A8u;
    SET_GPR_U32(ctx, 31, 0x1BD8B0u);
    ctx->pc = 0x1BD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8A8u;
    // 0x1bd8ac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD8A8u, 0x1BD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8B0u;
label_1bd8b0:
    // 0x1bd8b0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bd8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd8bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD8BCu;
    SET_GPR_U32(ctx, 31, 0x1BD8C4u);
    ctx->pc = 0x1BD8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8BCu;
    // 0x1bd8c0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD8BCu, 0x1BD8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8C4u;
label_1bd8c4:
    // 0x1bd8c4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd8c8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bd8cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd8d0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bd8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bd8dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD8DCu;
    SET_GPR_U32(ctx, 31, 0x1BD8E4u);
    ctx->pc = 0x1BD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8DCu;
    // 0x1bd8e0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD8DCu, 0x1BD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8E4u;
label_1bd8e4:
    // 0x1bd8e4: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bd8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd8ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bd8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd8f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD8F0u;
    SET_GPR_U32(ctx, 31, 0x1BD8F8u);
    ctx->pc = 0x1BD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8F0u;
    // 0x1bd8f4: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD8F0u, 0x1BD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8F8u;
label_1bd8f8:
    // 0x1bd8f8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1bd8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1bd8fc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bd900: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bd904: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bd904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bd908: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bd908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bd90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd910: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd914: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BD914u;
    SET_GPR_U32(ctx, 31, 0x1BD91Cu);
    ctx->pc = 0x1BD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD914u;
    // 0x1bd918: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BD914u, 0x1BD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD91Cu;
label_1bd91c:
    // 0x1bd91c: 0x8e2378c8  lw          $v1, 0x78C8($s1)
    ctx->pc = 0x1bd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bd920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bd924: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1bd928: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bd928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bd92c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1bd92cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd930: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1BD930u;
    {
        const bool branch_taken_0x1bd930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD930u;
        // 0x1bd934: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd930) {
            ctx->pc = 0x1BD868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd868;
        }
    }
    ctx->pc = 0x1BD938u;
label_1bd938:
    // 0x1bd938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bd938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd93c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bd93cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bd940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd950: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD950u;
        // 0x1bd954: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD958u;
}
