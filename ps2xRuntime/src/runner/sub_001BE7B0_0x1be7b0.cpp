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

// Function: sub_001BE7B0
// Address: 0x1be7b0 - 0x1bed88
void sub_001BE7B0_0x1be7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE7B0_0x1be7b0");
#endif

    switch (ctx->pc) {
        case 0x1be804u: goto label_1be804;
        case 0x1be824u: goto label_1be824;
        case 0x1be834u: goto label_1be834;
        case 0x1be844u: goto label_1be844;
        case 0x1be858u: goto label_1be858;
        case 0x1be88cu: goto label_1be88c;
        case 0x1be8a4u: goto label_1be8a4;
        case 0x1be8dcu: goto label_1be8dc;
        case 0x1be91cu: goto label_1be91c;
        case 0x1be940u: goto label_1be940;
        case 0x1be950u: goto label_1be950;
        case 0x1be9e0u: goto label_1be9e0;
        case 0x1bea08u: goto label_1bea08;
        case 0x1bea1cu: goto label_1bea1c;
        case 0x1bea40u: goto label_1bea40;
        case 0x1bea50u: goto label_1bea50;
        case 0x1bea60u: goto label_1bea60;
        case 0x1bea8cu: goto label_1bea8c;
        case 0x1beabcu: goto label_1beabc;
        case 0x1beadcu: goto label_1beadc;
        case 0x1beaecu: goto label_1beaec;
        case 0x1beb24u: goto label_1beb24;
        case 0x1beb4cu: goto label_1beb4c;
        case 0x1beb88u: goto label_1beb88;
        case 0x1bebccu: goto label_1bebcc;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebecu: goto label_1bebec;
        case 0x1bec1cu: goto label_1bec1c;
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec68u: goto label_1bec68;
        case 0x1bec7cu: goto label_1bec7c;
        case 0x1bec88u: goto label_1bec88;
        case 0x1becb4u: goto label_1becb4;
        case 0x1becc0u: goto label_1becc0;
        case 0x1becfcu: goto label_1becfc;
        case 0x1bed3cu: goto label_1bed3c;
        case 0x1bed48u: goto label_1bed48;
        default: break;
    }

    ctx->pc = 0x1be7b0u;

    // 0x1be7b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1be7b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1be7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1be7b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1be7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1be7bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1be7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1be7c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1be7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1be7c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1be7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1be7c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1be7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1be7cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1be7ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1be7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1be7d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1be7d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be7dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1be7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be7e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be7ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1be7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7f0: 0x152600a9  bne         $t1, $a2, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7F0u;
        // 0x1be7f4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BEA98u;
            goto label_1bea98;
        }
    }
    ctx->pc = 0x1BE7F8u;
    // 0x1be7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be7fc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BE7FCu;
    SET_GPR_U32(ctx, 31, 0x1BE804u);
    ctx->pc = 0x1BE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7FCu;
    // 0x1be800: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BE7FCu, 0x1BE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE804u;
label_1be804:
    // 0x1be804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be808: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1be808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1be80c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be810: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1be810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1be814: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be818: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1be818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1be81c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE81Cu;
    SET_GPR_U32(ctx, 31, 0x1BE824u);
    ctx->pc = 0x1BE820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE81Cu;
    // 0x1be820: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE81Cu, 0x1BE824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE824u;
label_1be824:
    // 0x1be824: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be828: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1be82c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE82Cu;
    SET_GPR_U32(ctx, 31, 0x1BE834u);
    ctx->pc = 0x1BE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE82Cu;
    // 0x1be830: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE82Cu, 0x1BE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE834u;
label_1be834:
    // 0x1be834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be838: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1be838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1be83c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE83Cu;
    SET_GPR_U32(ctx, 31, 0x1BE844u);
    ctx->pc = 0x1BE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE83Cu;
    // 0x1be840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE83Cu, 0x1BE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE844u;
label_1be844:
    // 0x1be844: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1be844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1be848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be84c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1be850: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE850u;
    SET_GPR_U32(ctx, 31, 0x1BE858u);
    ctx->pc = 0x1BE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE850u;
    // 0x1be854: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE850u, 0x1BE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE858u;
label_1be858:
    // 0x1be858: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1be858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1be85c: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x1be85cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1be860: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1be860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be864: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be868: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be86c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1be86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1be870: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be874: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1be874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1be878: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1be878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1be87c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1be87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1be880: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1be880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be884: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE884u;
    SET_GPR_U32(ctx, 31, 0x1BE88Cu);
    ctx->pc = 0x1BE888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE884u;
    // 0x1be888: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE884u, 0x1BE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE88Cu;
label_1be88c:
    // 0x1be88c: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x1be88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x1be890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be894: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1be894u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be89c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BE89Cu;
    SET_GPR_U32(ctx, 31, 0x1BE8A4u);
    ctx->pc = 0x1BE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE89Cu;
    // 0x1be8a0: 0x16b03e  dsrl32      $s6, $s6, 0 (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BE89Cu, 0x1BE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8A4u;
label_1be8a4:
    // 0x1be8a4: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1be8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1be8a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be8ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be8b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be8b4: 0x236b8  dsll        $a2, $v0, 26
    ctx->pc = 0x1be8b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 26);
    // 0x1be8b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be8bc: 0x1623b8  dsll        $a0, $s6, 14
    ctx->pc = 0x1be8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << 14);
    // 0x1be8c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1be8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1be8c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1be8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be8c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1be8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be8d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8d4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BE8D4u;
    SET_GPR_U32(ctx, 31, 0x1BE8DCu);
    ctx->pc = 0x1BE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8D4u;
    // 0x1be8d8: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BE8D4u, 0x1BE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8DCu;
label_1be8dc:
    // 0x1be8dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1be8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be8e0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1be8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1be8e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be8e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1be8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be8ec: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1be8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1be8f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be8f4: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1be8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1be8f8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1be8f8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1be8fc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1be8fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be900: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1be904: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be908: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be90c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1be90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1be910: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1be910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1be914: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE914u;
    SET_GPR_U32(ctx, 31, 0x1BE91Cu);
    ctx->pc = 0x1BE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE914u;
    // 0x1be918: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE914u, 0x1BE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE91Cu;
label_1be91c:
    // 0x1be91c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1be91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1be920: 0x161438  dsll        $v0, $s6, 16
    ctx->pc = 0x1be920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << 16);
    // 0x1be924: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be92c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be930: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1be934: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1be938: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE938u;
    SET_GPR_U32(ctx, 31, 0x1BE940u);
    ctx->pc = 0x1BE93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE938u;
    // 0x1be93c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE938u, 0x1BE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE940u;
label_1be940:
    // 0x1be940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be948: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BE948u;
    SET_GPR_U32(ctx, 31, 0x1BE950u);
    ctx->pc = 0x1BE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE948u;
    // 0x1be94c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BE948u, 0x1BE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE950u;
label_1be950:
    // 0x1be950: 0x8ea278c8  lw          $v0, 0x78C8($s5)
    ctx->pc = 0x1be950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1be954: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1be954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1be958: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1be958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1be95c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BE95Cu;
    {
        const bool branch_taken_0x1be95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE95Cu;
        // 0x1be960: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be95c) {
            ctx->pc = 0x1BEA80u;
            goto label_1bea80;
        }
    }
    ctx->pc = 0x1BE964u;
    // 0x1be964: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1be964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1be968: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1be96c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be970: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1be970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1be974: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be978: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1be978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be97c: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1be97cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1be980: 0x26020708  addiu       $v0, $s0, 0x708
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1800));
    // 0x1be984: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1be988: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1be98c: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1be990: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be994: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1be994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1be998: 0x26220790  addiu       $v0, $s1, 0x790
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
    // 0x1be99c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be9a0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1be9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1be9a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1be9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1be9a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1be9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1be9ac: 0xa38825  or          $s1, $a1, $v1
    ctx->pc = 0x1be9acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1be9b0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1be9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1be9b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1be9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be9b8: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1be9b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1be9bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be9c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1be9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be9c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1be9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1be9c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be9cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1be9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be9d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1be9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9d4: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1be9d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1be9d8: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1be9d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be9dc: 0x0  nop
    ctx->pc = 0x1be9dcu;
    // NOP
label_1be9e0:
    // 0x1be9e0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1be9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1be9e4: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1be9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1be9e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be9ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1be9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1be9f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1be9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1be9f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1be9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be9f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9fc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1be9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bea00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEA00u;
    SET_GPR_U32(ctx, 31, 0x1BEA08u);
    ctx->pc = 0x1BEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA00u;
    // 0x1bea04: 0x2423025  or          $a2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEA00u, 0x1BEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA08u;
label_1bea08:
    // 0x1bea08: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bea0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bea14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEA14u;
    SET_GPR_U32(ctx, 31, 0x1BEA1Cu);
    ctx->pc = 0x1BEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA14u;
    // 0x1bea18: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEA14u, 0x1BEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA1Cu;
label_1bea1c:
    // 0x1bea1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bea20: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bea24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bea28: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1bea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1bea2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bea30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea34: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bea38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEA38u;
    SET_GPR_U32(ctx, 31, 0x1BEA40u);
    ctx->pc = 0x1BEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA38u;
    // 0x1bea3c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEA38u, 0x1BEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA40u;
label_1bea40:
    // 0x1bea40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bea48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEA48u;
    SET_GPR_U32(ctx, 31, 0x1BEA50u);
    ctx->pc = 0x1BEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA48u;
    // 0x1bea4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEA48u, 0x1BEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA50u;
label_1bea50:
    // 0x1bea50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bea58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEA58u;
    SET_GPR_U32(ctx, 31, 0x1BEA60u);
    ctx->pc = 0x1BEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA58u;
    // 0x1bea5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEA58u, 0x1BEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA60u;
label_1bea60:
    // 0x1bea60: 0x8ea278c8  lw          $v0, 0x78C8($s5)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1bea64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1bea68: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1bea6c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1bea70: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1bea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bea74: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BEA74u;
    {
        const bool branch_taken_0x1bea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA74u;
        // 0x1bea78: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea74) {
            ctx->pc = 0x1BE9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be9e0;
        }
    }
    ctx->pc = 0x1BEA7Cu;
    // 0x1bea7c: 0x0  nop
    ctx->pc = 0x1bea7cu;
    // NOP
label_1bea80:
    // 0x1bea80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea84: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BEA84u;
    SET_GPR_U32(ctx, 31, 0x1BEA8Cu);
    ctx->pc = 0x1BEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA84u;
    // 0x1bea88: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BEA84u, 0x1BEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA8Cu;
label_1bea8c:
    // 0x1bea8c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1BEA8Cu;
    {
        const bool branch_taken_0x1bea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea8c) {
            ctx->pc = 0x1BED58u;
            goto label_1bed58;
        }
    }
    ctx->pc = 0x1BEA94u;
    // 0x1bea94: 0x0  nop
    ctx->pc = 0x1bea94u;
    // NOP
label_1bea98:
    // 0x1bea98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bea9c: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEA9Cu;
    {
        const bool branch_taken_0x1bea9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA9Cu;
        // 0x1beaa0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea9c) {
            ctx->pc = 0x1BEAA8u;
            goto label_1beaa8;
        }
    }
    ctx->pc = 0x1BEAA4u;
    // 0x1beaa4: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x1beaa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1beaa8:
    // 0x1beaa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beaac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1beaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beab0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beab4: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BEAB4u;
    SET_GPR_U32(ctx, 31, 0x1BEABCu);
    ctx->pc = 0x1BEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAB4u;
    // 0x1beab8: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BEAB4u, 0x1BEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEABCu;
label_1beabc:
    // 0x1beabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beac0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1beac4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1beac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1beac8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1beac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1beacc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bead0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bead4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEAD4u;
    SET_GPR_U32(ctx, 31, 0x1BEADCu);
    ctx->pc = 0x1BEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAD4u;
    // 0x1bead8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEAD4u, 0x1BEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEADCu;
label_1beadc:
    // 0x1beadc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beae0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1beae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1beae4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEAE4u;
    SET_GPR_U32(ctx, 31, 0x1BEAECu);
    ctx->pc = 0x1BEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAE4u;
    // 0x1beae8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEAE4u, 0x1BEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAECu;
label_1beaec:
    // 0x1beaec: 0x101182  srl         $v0, $s0, 6
    ctx->pc = 0x1beaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 6));
    // 0x1beaf0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1beaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1beaf4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1beaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beaf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1beaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1beafc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1beafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1beb00: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1beb04: 0x4b438  dsll        $s6, $a0, 16
    ctx->pc = 0x1beb04u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) << 16);
    // 0x1beb08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1beb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1beb0c: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x1beb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x1beb10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1beb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb14: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1beb14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1beb18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB24u);
    ctx->pc = 0x1BEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB1Cu;
    // 0x1beb20: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEB1Cu, 0x1BEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB24u;
label_1beb24:
    // 0x1beb24: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x1beb24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1beb28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb2c: 0x111182  srl         $v0, $s1, 6
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x1beb30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1beb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1beb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb38: 0x12f040  sll         $fp, $s2, 1
    ctx->pc = 0x1beb38u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1beb3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1beb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1beb40: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1beb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1beb44: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BEB44u;
    SET_GPR_U32(ctx, 31, 0x1BEB4Cu);
    ctx->pc = 0x1BEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB44u;
    // 0x1beb48: 0xffa200b0  sd          $v0, 0xB0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BEB44u, 0x1BEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB4Cu;
label_1beb4c:
    // 0x1beb4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1beb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1beb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1beb58: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x1beb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1beb5c: 0x32eb8  dsll        $a1, $v1, 26
    ctx->pc = 0x1beb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 26);
    // 0x1beb60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1beb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb64: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1beb64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1beb68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1beb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1beb6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1beb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1beb70: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x1beb74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1beb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1beb78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1beb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1beb7c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1beb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1beb80: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BEB80u;
    SET_GPR_U32(ctx, 31, 0x1BEB88u);
    ctx->pc = 0x1BEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB80u;
    // 0x1beb84: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BEB80u, 0x1BEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB88u;
label_1beb88:
    // 0x1beb88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1beb90: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1beb94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1beb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1beb98: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1beb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beb9c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1beb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1beba0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1beba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1beba4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1beba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1beba8: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1beba8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1bebac: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x1bebacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bebb0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bebb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bebbc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bebc0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bebc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEBC4u;
    SET_GPR_U32(ctx, 31, 0x1BEBCCu);
    ctx->pc = 0x1BEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBC4u;
    // 0x1bebc8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEBC4u, 0x1BEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBCCu;
label_1bebcc:
    // 0x1bebcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bebd4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEBD4u;
    SET_GPR_U32(ctx, 31, 0x1BEBDCu);
    ctx->pc = 0x1BEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBD4u;
    // 0x1bebd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEBD4u, 0x1BEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBDCu;
label_1bebdc:
    // 0x1bebdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebe4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEBE4u;
    SET_GPR_U32(ctx, 31, 0x1BEBECu);
    ctx->pc = 0x1BEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBE4u;
    // 0x1bebe8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEBE4u, 0x1BEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBECu;
label_1bebec:
    // 0x1bebec: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1bebf0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1bebf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bebf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bebf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bebfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bebfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bec00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bec04: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bec08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bec0c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1bec0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bec10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEC14u;
    SET_GPR_U32(ctx, 31, 0x1BEC1Cu);
    ctx->pc = 0x1BEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC14u;
    // 0x1bec18: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEC14u, 0x1BEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC1Cu;
label_1bec1c:
    // 0x1bec1c: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x1bec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1bec20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bec24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bec28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec2c: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x1bec2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x1bec30: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bec34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bec34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bec38: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x1bec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x1bec3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bec3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bec40: 0x34423f7f  ori         $v0, $v0, 0x3F7F
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16255);
    // 0x1bec44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bec48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BEC48u;
    SET_GPR_U32(ctx, 31, 0x1BEC50u);
    ctx->pc = 0x1BEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC48u;
    // 0x1bec4c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BEC48u, 0x1BEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC50u;
label_1bec50:
    // 0x1bec50: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x1bec50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bec54: 0x3bac2  srl         $s7, $v1, 11
    ctx->pc = 0x1bec54u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1bec58: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x1bec58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1bec5c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1BEC5Cu;
    {
        const bool branch_taken_0x1bec5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC5Cu;
        // 0x1bec60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec5c) {
            ctx->pc = 0x1BED58u;
            goto label_1bed58;
        }
    }
    ctx->pc = 0x1BEC64u;
    // 0x1bec64: 0x0  nop
    ctx->pc = 0x1bec64u;
    // NOP
label_1bec68:
    // 0x1bec68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bec74: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BEC74u;
    SET_GPR_U32(ctx, 31, 0x1BEC7Cu);
    ctx->pc = 0x1BEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC74u;
    // 0x1bec78: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BEC74u, 0x1BEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC7Cu;
label_1bec7c:
    // 0x1bec7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec80: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BEC80u;
    SET_GPR_U32(ctx, 31, 0x1BEC88u);
    ctx->pc = 0x1BEC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC80u;
    // 0x1bec84: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BEC80u, 0x1BEC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC88u;
label_1bec88:
    // 0x1bec88: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1bec8c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1bec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1bec90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bec94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bec98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bec98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bec9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1beca0: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x1beca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1beca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beca8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1beca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1becac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BECACu;
    SET_GPR_U32(ctx, 31, 0x1BECB4u);
    ctx->pc = 0x1BECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECACu;
    // 0x1becb0: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BECACu, 0x1BECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECB4u;
label_1becb4:
    // 0x1becb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1becb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becb8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BECB8u;
    SET_GPR_U32(ctx, 31, 0x1BECC0u);
    ctx->pc = 0x1BECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECB8u;
    // 0x1becbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BECB8u, 0x1BECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECC0u;
label_1becc0:
    // 0x1becc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1becc4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1becc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becc8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1beccc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1becccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1becd0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1becd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1becd4: 0x336b8  dsll        $a2, $v1, 26
    ctx->pc = 0x1becd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 26);
    // 0x1becd8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1becd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1becdc: 0x3c030130  lui         $v1, 0x130
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)304 << 16));
    // 0x1bece0: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1bece0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bece4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bece8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1becec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1becf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1becf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becf4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BECF4u;
    SET_GPR_U32(ctx, 31, 0x1BECFCu);
    ctx->pc = 0x1BECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECF4u;
    // 0x1becf8: 0x468025  or          $s0, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BECF4u, 0x1BECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECFCu;
label_1becfc:
    // 0x1becfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1becfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bed00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bed04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bed08: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bed0c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bed10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bed10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bed14: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1bed14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1bed18: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1bed18u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1bed1c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bed1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bed20: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bed24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bed2c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bed30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bed34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BED34u;
    SET_GPR_U32(ctx, 31, 0x1BED3Cu);
    ctx->pc = 0x1BED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED34u;
    // 0x1bed38: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BED34u, 0x1BED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED3Cu;
label_1bed3c:
    // 0x1bed3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed40: 0xc069da8  jal         func_1A76A0
    ctx->pc = 0x1BED40u;
    SET_GPR_U32(ctx, 31, 0x1BED48u);
    ctx->pc = 0x1BED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED40u;
    // 0x1bed44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76A0u, 0x1BED40u, 0x1BED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED48u;
label_1bed48:
    // 0x1bed48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bed4c: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x1bed4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1bed50: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1BED50u;
    {
        const bool branch_taken_0x1bed50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bed50) {
            ctx->pc = 0x1BEC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bec68;
        }
    }
    ctx->pc = 0x1BED58u;
label_1bed58:
    // 0x1bed58: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bed58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bed5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1bed5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bed60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bed60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bed64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bed64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bed68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bed68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bed6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bed6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bed70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bed70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bed74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bed74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bed78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bed78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bed7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bed7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed80: 0x3e00008  jr          $ra
    ctx->pc = 0x1BED80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED80u;
        // 0x1bed84: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED88u;
}
