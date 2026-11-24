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

// Function: sub_001BF7F0
// Address: 0x1bf7f0 - 0x1bfae0
void sub_001BF7F0_0x1bf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF7F0_0x1bf7f0");
#endif

    switch (ctx->pc) {
        case 0x1bf844u: goto label_1bf844;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf87cu: goto label_1bf87c;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8f0u: goto label_1bf8f0;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfab4u: goto label_1bfab4;
        default: break;
    }

    ctx->pc = 0x1bf7f0u;

    // 0x1bf7f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bf7f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bf7f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bf7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bf7fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bf7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bf800: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1bf800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bf804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bf808: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bf808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf80c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf810: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1bf810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf818: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1bf818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf81c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf820: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1bf820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf834: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1bf834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf83c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BF83Cu;
    SET_GPR_U32(ctx, 31, 0x1BF844u);
    ctx->pc = 0x1BF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF83Cu;
    // 0x1bf840: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BF83Cu, 0x1BF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF844u;
label_1bf844:
    // 0x1bf844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf848: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1bf848u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bf84c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf850: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1bf850u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1bf854: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bf854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bf858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf85c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bf860: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bf864: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF864u;
    SET_GPR_U32(ctx, 31, 0x1BF86Cu);
    ctx->pc = 0x1BF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF864u;
    // 0x1bf868: 0x2223025  or          $a2, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF864u, 0x1BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF86Cu;
label_1bf86c:
    // 0x1bf86c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf870: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bf870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bf874: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF874u;
    SET_GPR_U32(ctx, 31, 0x1BF87Cu);
    ctx->pc = 0x1BF878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF874u;
    // 0x1bf878: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF874u, 0x1BF87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF87Cu;
label_1bf87c:
    // 0x1bf87c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1bf87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bf880: 0x149182  srl         $s2, $s4, 6
    ctx->pc = 0x1bf880u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x1bf884: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf888: 0x12803c  dsll32      $s0, $s2, 0
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bf88c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf890: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1bf890u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1bf894: 0x101438  dsll        $v0, $s0, 16
    ctx->pc = 0x1bf894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 16);
    // 0x1bf898: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf89c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1bf89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1bf8a0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bf8a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF8A4u;
    SET_GPR_U32(ctx, 31, 0x1BF8ACu);
    ctx->pc = 0x1BF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8A4u;
    // 0x1bf8a8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF8A4u, 0x1BF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8ACu;
label_1bf8ac:
    // 0x1bf8ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8b0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF8B0u;
    SET_GPR_U32(ctx, 31, 0x1BF8B8u);
    ctx->pc = 0x1BF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8B0u;
    // 0x1bf8b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF8B0u, 0x1BF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8B8u;
label_1bf8b8:
    // 0x1bf8b8: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x1bf8bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf8c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf8c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf8c8: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1bf8c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1bf8cc: 0x1023b8  dsll        $a0, $s0, 14
    ctx->pc = 0x1bf8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << 14);
    // 0x1bf8d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf8d4: 0x3c0201b0  lui         $v0, 0x1B0
    ctx->pc = 0x1bf8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)432 << 16));
    // 0x1bf8d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf8dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bf8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf8e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8e8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF8E8u;
    SET_GPR_U32(ctx, 31, 0x1BF8F0u);
    ctx->pc = 0x1BF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8E8u;
    // 0x1bf8ec: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF8E8u, 0x1BF8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8F0u;
label_1bf8f0:
    // 0x1bf8f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf8f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf8f8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1bf8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1bf8fc: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x1bf900: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf904: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x1bf904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1bf908: 0x2042825  or          $a1, $s0, $a0
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1bf90c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bf90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf910: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1bf910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf914: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1bf914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1bf918: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf91c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1bf91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1bf920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf924: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf928: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1bf928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf92c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF92Cu;
    SET_GPR_U32(ctx, 31, 0x1BF934u);
    ctx->pc = 0x1BF930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF92Cu;
    // 0x1bf930: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF92Cu, 0x1BF934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF934u;
label_1bf934:
    // 0x1bf934: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf938: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf93c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF93Cu;
    SET_GPR_U32(ctx, 31, 0x1BF944u);
    ctx->pc = 0x1BF940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF93Cu;
    // 0x1bf940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF93Cu, 0x1BF944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF944u;
label_1bf944:
    // 0x1bf944: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf94c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF94Cu;
    SET_GPR_U32(ctx, 31, 0x1BF954u);
    ctx->pc = 0x1BF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF94Cu;
    // 0x1bf950: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF94Cu, 0x1BF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF954u;
label_1bf954:
    // 0x1bf954: 0x8ec678c8  lw          $a2, 0x78C8($s6)
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 30920)));
    // 0x1bf958: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bf958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf95c: 0x9ec778cc  lwu         $a3, 0x78CC($s6)
    ctx->pc = 0x1bf95cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 22), 30924)));
    // 0x1bf960: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bf960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bf964: 0x8ec278c4  lw          $v0, 0x78C4($s6)
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 30916)));
    // 0x1bf968: 0x9ec378c0  lwu         $v1, 0x78C0($s6)
    ctx->pc = 0x1bf968u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 30912)));
    // 0x1bf96c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bf970: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bf970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bf974: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bf974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bf978: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bf978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bf97c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf984: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bf984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bf988: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bf988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bf98c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf990: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bf990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bf994: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bf998: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf99c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bf99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bf9a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF9A0u;
    SET_GPR_U32(ctx, 31, 0x1BF9A8u);
    ctx->pc = 0x1BF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9A0u;
    // 0x1bf9a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF9A0u, 0x1BF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9A8u;
label_1bf9a8:
    // 0x1bf9a8: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x1bf9a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1bf9ac: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1BF9ACu;
    {
        const bool branch_taken_0x1bf9ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9ACu;
        // 0x1bf9b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9ac) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BF9B4u;
    // 0x1bf9b4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bf9b8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1bf9bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf9c0: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1bf9c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf9c8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bf9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf9cc: 0x3bc3c  dsll32      $s7, $v1, 16
    ctx->pc = 0x1bf9ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1bf9d0: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x1bf9d4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1bf9d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf9dc: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1bf9e0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bf9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bf9e4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1bf9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf9e8: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bf9ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf9f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bf9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bf9f4: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1bf9f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1bf9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1bf9fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bfa00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfa04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bfa08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa0c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfa10: 0xa4a025  or          $s4, $a1, $a0
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1bfa14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfa18: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1bfa18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfa1c: 0x0  nop
    ctx->pc = 0x1bfa1cu;
    // NOP
label_1bfa20:
    // 0x1bfa20: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1bfa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bfa24: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1bfa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bfa28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bfa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bfa2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bfa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bfa30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bfa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bfa34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bfa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfa38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa3c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfa40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFA40u;
    SET_GPR_U32(ctx, 31, 0x1BFA48u);
    ctx->pc = 0x1BFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA40u;
    // 0x1bfa44: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFA40u, 0x1BFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA48u;
label_1bfa48:
    // 0x1bfa48: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bfa4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFA54u;
    SET_GPR_U32(ctx, 31, 0x1BFA5Cu);
    ctx->pc = 0x1BFA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA54u;
    // 0x1bfa58: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFA54u, 0x1BFA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA5Cu;
label_1bfa5c:
    // 0x1bfa5c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bfa60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bfa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bfa68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFA68u;
    SET_GPR_U32(ctx, 31, 0x1BFA70u);
    ctx->pc = 0x1BFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA68u;
    // 0x1bfa6c: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFA68u, 0x1BFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA70u;
label_1bfa70:
    // 0x1bfa70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bfa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFA78u;
    SET_GPR_U32(ctx, 31, 0x1BFA80u);
    ctx->pc = 0x1BFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA78u;
    // 0x1bfa7c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFA78u, 0x1BFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA80u;
label_1bfa80:
    // 0x1bfa80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfa84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfa88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BFA88u;
    SET_GPR_U32(ctx, 31, 0x1BFA90u);
    ctx->pc = 0x1BFA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA88u;
    // 0x1bfa8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BFA88u, 0x1BFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA90u;
label_1bfa90:
    // 0x1bfa90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bfa90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bfa94: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1bfa98: 0x2b2102b  sltu        $v0, $s5, $s2
    ctx->pc = 0x1bfa98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1bfa9c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BFA9Cu;
    {
        const bool branch_taken_0x1bfa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA9Cu;
        // 0x1bfaa0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa9c) {
            ctx->pc = 0x1BFA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfa20;
        }
    }
    ctx->pc = 0x1BFAA4u;
    // 0x1bfaa4: 0x0  nop
    ctx->pc = 0x1bfaa4u;
    // NOP
label_1bfaa8:
    // 0x1bfaa8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bfaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfaac: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BFAACu;
    SET_GPR_U32(ctx, 31, 0x1BFAB4u);
    ctx->pc = 0x1BFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAACu;
    // 0x1bfab0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BFAACu, 0x1BFAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAB4u;
label_1bfab4:
    // 0x1bfab4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfab8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bfab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfabc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bfabcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfac0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bfac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfacc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfaccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAD8u;
        // 0x1bfadc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFAE0u;
}
