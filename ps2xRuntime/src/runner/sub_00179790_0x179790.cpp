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

// Function: sub_00179790
// Address: 0x179790 - 0x17998c
void sub_00179790_0x179790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179790_0x179790");
#endif

    switch (ctx->pc) {
        case 0x1797d0u: goto label_1797d0;
        case 0x1797d8u: goto label_1797d8;
        case 0x1797f0u: goto label_1797f0;
        case 0x1797fcu: goto label_1797fc;
        case 0x179808u: goto label_179808;
        case 0x179814u: goto label_179814;
        case 0x179820u: goto label_179820;
        case 0x17982cu: goto label_17982c;
        case 0x179848u: goto label_179848;
        case 0x179854u: goto label_179854;
        case 0x179860u: goto label_179860;
        case 0x17986cu: goto label_17986c;
        case 0x179880u: goto label_179880;
        case 0x17988cu: goto label_17988c;
        case 0x179898u: goto label_179898;
        case 0x1798a4u: goto label_1798a4;
        case 0x1798b0u: goto label_1798b0;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798f8u: goto label_1798f8;
        case 0x179904u: goto label_179904;
        case 0x179910u: goto label_179910;
        case 0x17991cu: goto label_17991c;
        case 0x17992cu: goto label_17992c;
        case 0x179938u: goto label_179938;
        case 0x179940u: goto label_179940;
        case 0x179948u: goto label_179948;
        case 0x179964u: goto label_179964;
        case 0x179970u: goto label_179970;
        default: break;
    }

    ctx->pc = 0x179790u;

    // 0x179790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179794: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x179794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x179798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17979c: 0x2463ccc0  addiu       $v1, $v1, -0x3340
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954176));
    // 0x1797a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1797a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1797a4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1797a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1797a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1797ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1797acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1797b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1797b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1797b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1797b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1797bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1797bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1797c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1797c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1797c8: 0xc041262  jal         func_104988
    ctx->pc = 0x1797C8u;
    SET_GPR_U32(ctx, 31, 0x1797D0u);
    ctx->pc = 0x1797CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797C8u;
    // 0x1797cc: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104988u, 0x1797C8u, 0x1797D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797D0u;
label_1797d0:
    // 0x1797d0: 0xc041266  jal         func_104998
    ctx->pc = 0x1797D0u;
    SET_GPR_U32(ctx, 31, 0x1797D8u);
    ctx->pc = 0x1797D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797D0u;
    // 0x1797d4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104998u, 0x1797D0u, 0x1797D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797D8u;
label_1797d8:
    // 0x1797d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1797d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1797dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1797e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1797e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1797e4: 0x3402800a  ori         $v0, $zero, 0x800A
    ctx->pc = 0x1797e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
    // 0x1797e8: 0xc041286  jal         func_104A18
    ctx->pc = 0x1797E8u;
    SET_GPR_U32(ctx, 31, 0x1797F0u);
    ctx->pc = 0x1797ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797E8u;
    // 0x1797ec: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1797E8u, 0x1797F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797F0u;
label_1797f0:
    // 0x1797f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1797f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1797f4: 0xc041286  jal         func_104A18
    ctx->pc = 0x1797F4u;
    SET_GPR_U32(ctx, 31, 0x1797FCu);
    ctx->pc = 0x1797F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1797F4u;
    // 0x1797f8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1797F4u, 0x1797FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797FCu;
label_1797fc:
    // 0x1797fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1797fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179800: 0xc041286  jal         func_104A18
    ctx->pc = 0x179800u;
    SET_GPR_U32(ctx, 31, 0x179808u);
    ctx->pc = 0x179804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179800u;
    // 0x179804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179800u, 0x179808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179808u;
label_179808:
    // 0x179808: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17980c: 0xc041286  jal         func_104A18
    ctx->pc = 0x17980Cu;
    SET_GPR_U32(ctx, 31, 0x179814u);
    ctx->pc = 0x179810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17980Cu;
    // 0x179810: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x17980Cu, 0x179814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179814u;
label_179814:
    // 0x179814: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179818: 0xc041286  jal         func_104A18
    ctx->pc = 0x179818u;
    SET_GPR_U32(ctx, 31, 0x179820u);
    ctx->pc = 0x17981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179818u;
    // 0x17981c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179818u, 0x179820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179820u;
label_179820:
    // 0x179820: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179824: 0xc041286  jal         func_104A18
    ctx->pc = 0x179824u;
    SET_GPR_U32(ctx, 31, 0x17982Cu);
    ctx->pc = 0x179828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179824u;
    // 0x179828: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179824u, 0x17982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17982Cu;
label_17982c:
    // 0x17982c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179830: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179834: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x179834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x179838: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x179838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x17983c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x17983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x179840: 0xc041286  jal         func_104A18
    ctx->pc = 0x179840u;
    SET_GPR_U32(ctx, 31, 0x179848u);
    ctx->pc = 0x179844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179840u;
    // 0x179844: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179840u, 0x179848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179848u;
label_179848:
    // 0x179848: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17984c: 0xc041286  jal         func_104A18
    ctx->pc = 0x17984Cu;
    SET_GPR_U32(ctx, 31, 0x179854u);
    ctx->pc = 0x179850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17984Cu;
    // 0x179850: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x17984Cu, 0x179854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179854u;
label_179854:
    // 0x179854: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179858: 0xc041286  jal         func_104A18
    ctx->pc = 0x179858u;
    SET_GPR_U32(ctx, 31, 0x179860u);
    ctx->pc = 0x17985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179858u;
    // 0x17985c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179858u, 0x179860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179860u;
label_179860:
    // 0x179860: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179864: 0xc041286  jal         func_104A18
    ctx->pc = 0x179864u;
    SET_GPR_U32(ctx, 31, 0x17986Cu);
    ctx->pc = 0x179868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179864u;
    // 0x179868: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179864u, 0x17986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17986Cu;
label_17986c:
    // 0x17986c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x179870: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179874: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x179874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x179878: 0xc041286  jal         func_104A18
    ctx->pc = 0x179878u;
    SET_GPR_U32(ctx, 31, 0x179880u);
    ctx->pc = 0x17987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179878u;
    // 0x17987c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179878u, 0x179880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179880u;
label_179880:
    // 0x179880: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179884: 0xc041286  jal         func_104A18
    ctx->pc = 0x179884u;
    SET_GPR_U32(ctx, 31, 0x17988Cu);
    ctx->pc = 0x179888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179884u;
    // 0x179888: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179884u, 0x17988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17988Cu;
label_17988c:
    // 0x17988c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179890: 0xc041286  jal         func_104A18
    ctx->pc = 0x179890u;
    SET_GPR_U32(ctx, 31, 0x179898u);
    ctx->pc = 0x179894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179890u;
    // 0x179894: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179890u, 0x179898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179898u;
label_179898:
    // 0x179898: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17989c: 0xc041286  jal         func_104A18
    ctx->pc = 0x17989Cu;
    SET_GPR_U32(ctx, 31, 0x1798A4u);
    ctx->pc = 0x1798A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17989Cu;
    // 0x1798a0: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x17989Cu, 0x1798A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798A4u;
label_1798a4:
    // 0x1798a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1798a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1798a8: 0xc041286  jal         func_104A18
    ctx->pc = 0x1798A8u;
    SET_GPR_U32(ctx, 31, 0x1798B0u);
    ctx->pc = 0x1798ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798A8u;
    // 0x1798ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1798A8u, 0x1798B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798B0u;
label_1798b0:
    // 0x1798b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1798b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1798b4: 0xc041286  jal         func_104A18
    ctx->pc = 0x1798B4u;
    SET_GPR_U32(ctx, 31, 0x1798BCu);
    ctx->pc = 0x1798B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798B4u;
    // 0x1798b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1798B4u, 0x1798BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798BCu;
label_1798bc:
    // 0x1798bc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1798bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1798c0: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x1798c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1798c4: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x1798c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x1798c8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1798c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1798cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1798ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1798d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1798d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1798d4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1798d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1798d8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1798d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1798dc: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x1798dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x1798e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1798e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1798e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1798e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1798e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1798ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1798ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1798f0: 0xc041286  jal         func_104A18
    ctx->pc = 0x1798F0u;
    SET_GPR_U32(ctx, 31, 0x1798F8u);
    ctx->pc = 0x1798F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798F0u;
    // 0x1798f4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1798F0u, 0x1798F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798F8u;
label_1798f8:
    // 0x1798f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1798fc: 0xc041286  jal         func_104A18
    ctx->pc = 0x1798FCu;
    SET_GPR_U32(ctx, 31, 0x179904u);
    ctx->pc = 0x179900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1798FCu;
    // 0x179900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x1798FCu, 0x179904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179904u;
label_179904:
    // 0x179904: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179908: 0xc041286  jal         func_104A18
    ctx->pc = 0x179908u;
    SET_GPR_U32(ctx, 31, 0x179910u);
    ctx->pc = 0x17990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179908u;
    // 0x17990c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179908u, 0x179910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179910u;
label_179910:
    // 0x179910: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179914: 0xc041286  jal         func_104A18
    ctx->pc = 0x179914u;
    SET_GPR_U32(ctx, 31, 0x17991Cu);
    ctx->pc = 0x179918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179914u;
    // 0x179918: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179914u, 0x17991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17991Cu;
label_17991c:
    // 0x17991c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x179920: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179924: 0xc041286  jal         func_104A18
    ctx->pc = 0x179924u;
    SET_GPR_U32(ctx, 31, 0x17992Cu);
    ctx->pc = 0x179928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179924u;
    // 0x179928: 0x34454000  ori         $a1, $v0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179924u, 0x17992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17992Cu;
label_17992c:
    // 0x17992c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179930: 0xc041286  jal         func_104A18
    ctx->pc = 0x179930u;
    SET_GPR_U32(ctx, 31, 0x179938u);
    ctx->pc = 0x179934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179930u;
    // 0x179934: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A18u, 0x179930u, 0x179938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179938u;
label_179938:
    // 0x179938: 0xc04126a  jal         func_1049A8
    ctx->pc = 0x179938u;
    SET_GPR_U32(ctx, 31, 0x179940u);
    ctx->pc = 0x17993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179938u;
    // 0x17993c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049A8u, 0x179938u, 0x179940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179940u;
label_179940:
    // 0x179940: 0xc041280  jal         func_104A00
    ctx->pc = 0x179940u;
    SET_GPR_U32(ctx, 31, 0x179948u);
    ctx->pc = 0x179944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179940u;
    // 0x179944: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A00u, 0x179940u, 0x179948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179948u;
label_179948:
    // 0x179948: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x179948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x17994c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17994cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179950: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x179954: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x179954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x179958: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x179958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x17995c: 0xc04118c  jal         func_104630
    ctx->pc = 0x17995Cu;
    SET_GPR_U32(ctx, 31, 0x179964u);
    ctx->pc = 0x179960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17995Cu;
    // 0x179960: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x17995Cu, 0x179964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179964u;
label_179964:
    // 0x179964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179968: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x179968u;
    SET_GPR_U32(ctx, 31, 0x179970u);
    ctx->pc = 0x17996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179968u;
    // 0x17996c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x179968u, 0x179970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179970u;
label_179970:
    // 0x179970: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17997c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17997cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179984: 0x3e00008  jr          $ra
    ctx->pc = 0x179984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179984u;
        // 0x179988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17998Cu;
}
