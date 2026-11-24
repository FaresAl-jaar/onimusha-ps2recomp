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

// Function: sub_003297E0
// Address: 0x3297e0 - 0x329a30
void sub_003297E0_0x3297e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003297E0_0x3297e0");
#endif

    switch (ctx->pc) {
        case 0x32985cu: goto label_32985c;
        case 0x32987cu: goto label_32987c;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298c8u: goto label_3298c8;
        case 0x3298f8u: goto label_3298f8;
        case 0x329910u: goto label_329910;
        case 0x329930u: goto label_329930;
        case 0x329940u: goto label_329940;
        case 0x329968u: goto label_329968;
        case 0x329988u: goto label_329988;
        case 0x3299d4u: goto label_3299d4;
        case 0x3299e0u: goto label_3299e0;
        case 0x329a14u: goto label_329a14;
        case 0x329a1cu: goto label_329a1c;
        default: break;
    }

    ctx->pc = 0x3297e0u;

    // 0x3297e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3297e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3297e4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3297e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3297e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3297e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3297ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3297ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3297f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3297f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297f4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3297f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3297f8: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3297F8u;
    {
        const bool branch_taken_0x3297f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3297FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297F8u;
        // 0x3297fc: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297f8) {
            ctx->pc = 0x329998u;
            goto label_329998;
        }
    }
    ctx->pc = 0x329800u;
    // 0x329800: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x329800u;
    {
        const bool branch_taken_0x329800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329800) {
            ctx->pc = 0x329938u;
            goto label_329938;
        }
    }
    ctx->pc = 0x329808u;
    // 0x329808: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x329808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x32980c: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x32980Cu;
    {
        const bool branch_taken_0x32980c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x329810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32980Cu;
        // 0x329810: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32980c) {
            ctx->pc = 0x329900u;
            goto label_329900;
        }
    }
    ctx->pc = 0x329814u;
    // 0x329814: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x329814u;
    {
        const bool branch_taken_0x329814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329814) {
            ctx->pc = 0x3298F0u;
            goto label_3298f0;
        }
    }
    ctx->pc = 0x32981Cu;
    // 0x32981c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x329820: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x329820u;
    {
        const bool branch_taken_0x329820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329820) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x329828u;
    // 0x329828: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329828u;
    {
        const bool branch_taken_0x329828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329828) {
            ctx->pc = 0x329838u;
            goto label_329838;
        }
    }
    ctx->pc = 0x329830u;
    // 0x329830: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x329830u;
    {
        const bool branch_taken_0x329830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329830) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329838u;
label_329838:
    // 0x329838: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x329838u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32983c: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x32983cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x329840: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x329840u;
    {
        const bool branch_taken_0x329840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329840) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329848u;
    // 0x329848: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x329848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32984c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32984Cu;
    {
        const bool branch_taken_0x32984c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32984Cu;
        // 0x329850: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32984c) {
            ctx->pc = 0x329868u;
            goto label_329868;
        }
    }
    ctx->pc = 0x329854u;
    // 0x329854: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x329854u;
    SET_GPR_U32(ctx, 31, 0x32985Cu);
    ctx->pc = 0x329858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329854u;
    // 0x329858: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x329854u, 0x32985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32985Cu;
label_32985c:
    // 0x32985c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x329860: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329864: 0x0  nop
    ctx->pc = 0x329864u;
    // NOP
label_329868:
    // 0x329868: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x329868u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32986c: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x32986Cu;
    {
        const bool branch_taken_0x32986c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32986Cu;
        // 0x329870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32986c) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329874u;
    // 0x329874: 0xc0ca6d8  jal         func_329B60
    ctx->pc = 0x329874u;
    SET_GPR_U32(ctx, 31, 0x32987Cu);
    ctx->pc = 0x329B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B60u, 0x329874u, 0x32987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32987Cu;
label_32987c:
    // 0x32987c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x32987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x329880: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x329880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x329884: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x329884u;
    {
        const bool branch_taken_0x329884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329884) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x32988Cu;
    // 0x32988c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x32988cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x329890: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329894: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x329894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x329898: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x32989c: 0x2407400a  addiu       $a3, $zero, 0x400A
    ctx->pc = 0x32989cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16394));
    // 0x3298a0: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x3298A0u;
    SET_GPR_U32(ctx, 31, 0x3298A8u);
    ctx->pc = 0x3298A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298A0u;
    // 0x3298a4: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x3298A0u, 0x3298A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298A8u;
label_3298a8:
    // 0x3298a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3298a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3298ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3298acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3298b0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3298B0u;
    {
        const bool branch_taken_0x3298b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3298b0) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x3298B8u;
    // 0x3298b8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x3298b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3298bc: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x3298bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3298c0: 0xc0ca700  jal         func_329C00
    ctx->pc = 0x3298C0u;
    SET_GPR_U32(ctx, 31, 0x3298C8u);
    ctx->pc = 0x3298C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298C0u;
    // 0x3298c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C00u, 0x3298C0u, 0x3298C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298C8u;
label_3298c8:
    // 0x3298c8: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x3298c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3298cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3298CCu;
    {
        const bool branch_taken_0x3298cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298CCu;
        // 0x3298d0: 0xa603000a  sh          $v1, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298cc) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x3298D4u;
    // 0x3298d4: 0x0  nop
    ctx->pc = 0x3298d4u;
    // NOP
label_3298d8:
    // 0x3298d8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3298dc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3298dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3298e0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x3298e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3298e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3298E4u;
    {
        const bool branch_taken_0x3298e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E4u;
        // 0x3298e8: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298e4) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x3298ECu;
    // 0x3298ec: 0x0  nop
    ctx->pc = 0x3298ecu;
    // NOP
label_3298f0:
    // 0x3298f0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3298F0u;
    SET_GPR_U32(ctx, 31, 0x3298F8u);
    ctx->pc = 0x3298F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298F0u;
    // 0x3298f4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3298F0u, 0x3298F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298F8u;
label_3298f8:
    // 0x3298f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3298F8u;
    {
        const bool branch_taken_0x3298f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3298f8) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329900u;
label_329900:
    // 0x329900: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x329900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x329904: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x329904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x329908: 0xc0ca6ec  jal         func_329BB0
    ctx->pc = 0x329908u;
    SET_GPR_U32(ctx, 31, 0x329910u);
    ctx->pc = 0x32990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329908u;
    // 0x32990c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329BB0u, 0x329908u, 0x329910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329910u;
label_329910:
    // 0x329910: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x329910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x329914: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x329914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x329918: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x329918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32991c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32991cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329920: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x329920u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x329924: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x329928: 0xc0554c0  jal         func_155300
    ctx->pc = 0x329928u;
    SET_GPR_U32(ctx, 31, 0x329930u);
    ctx->pc = 0x32992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329928u;
    // 0x32992c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155300u, 0x329928u, 0x329930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329930u;
label_329930:
    // 0x329930: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x329930u;
    {
        const bool branch_taken_0x329930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329930) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329938u;
label_329938:
    // 0x329938: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x329938u;
    SET_GPR_U32(ctx, 31, 0x329940u);
    ctx->pc = 0x32993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329938u;
    // 0x32993c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x329938u, 0x329940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329940u;
label_329940:
    // 0x329940: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x329940u;
    {
        const bool branch_taken_0x329940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329940) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329948u;
    // 0x329948: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x329948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32994c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32994cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329950: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x329950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x329954: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x329954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x329958: 0x2407400a  addiu       $a3, $zero, 0x400A
    ctx->pc = 0x329958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16394));
    // 0x32995c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x32995cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x329960: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x329960u;
    SET_GPR_U32(ctx, 31, 0x329968u);
    ctx->pc = 0x329964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329960u;
    // 0x329964: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x329960u, 0x329968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329968u;
label_329968:
    // 0x329968: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32996c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x32996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x329970: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x329970u;
    {
        const bool branch_taken_0x329970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329970) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329978u;
    // 0x329978: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x329978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x32997c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x32997cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x329980: 0xc0ca700  jal         func_329C00
    ctx->pc = 0x329980u;
    SET_GPR_U32(ctx, 31, 0x329988u);
    ctx->pc = 0x329984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329980u;
    // 0x329984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C00u, 0x329980u, 0x329988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329988u;
label_329988:
    // 0x329988: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x329988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32998c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x329990u;
    {
        const bool branch_taken_0x329990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329990u;
        // 0x329994: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329990) {
            ctx->pc = 0x3299A8u;
            goto label_3299a8;
        }
    }
    ctx->pc = 0x329998u;
label_329998:
    // 0x329998: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x329998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32999c: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x32999cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3299a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3299a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3299a4: 0x0  nop
    ctx->pc = 0x3299a4u;
    // NOP
label_3299a8:
    // 0x3299a8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x3299a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3299ac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3299ACu;
    {
        const bool branch_taken_0x3299ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3299ac) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299B4u;
    // 0x3299b4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3299b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3299b8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3299B8u;
    {
        const bool branch_taken_0x3299b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299B8u;
        // 0x3299bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299b8) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299C0u;
    // 0x3299c0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x3299c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3299c4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3299C4u;
    {
        const bool branch_taken_0x3299c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3299c4) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299CCu;
    // 0x3299cc: 0xc09c470  jal         func_2711C0
    ctx->pc = 0x3299CCu;
    SET_GPR_U32(ctx, 31, 0x3299D4u);
    ctx->pc = 0x3299D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299CCu;
    // 0x3299d0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711C0u, 0x3299CCu, 0x3299D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299D4u;
label_3299d4:
    // 0x3299d4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3299d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3299d8: 0xc095018  jal         func_254060
    ctx->pc = 0x3299D8u;
    SET_GPR_U32(ctx, 31, 0x3299E0u);
    ctx->pc = 0x3299DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299D8u;
    // 0x3299dc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x3299D8u, 0x3299E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299E0u;
label_3299e0:
    // 0x3299e0: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x3299e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
    // 0x3299e4: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3299e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x3299e8: 0x842797f8  lh          $a3, -0x6808($at)
    ctx->pc = 0x3299e8u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x4E97F8u));
    // 0x3299ec: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x3299ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x3299f0: 0x240a01c0  addiu       $t2, $zero, 0x1C0
    ctx->pc = 0x3299f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x3299f4: 0x34698080  ori         $t1, $v1, 0x8080
    ctx->pc = 0x3299f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3299f8: 0x248497f0  addiu       $a0, $a0, -0x6810
    ctx->pc = 0x3299f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940656));
    // 0x3299fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3299fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a04: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x329a04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x329a08: 0x1471823  subu        $v1, $t2, $a3
    ctx->pc = 0x329a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x329a0c: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x329A0Cu;
    SET_GPR_U32(ctx, 31, 0x329A14u);
    ctx->pc = 0x329A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A0Cu;
    // 0x329a10: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x329A0Cu, 0x329A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A14u;
label_329a14:
    // 0x329a14: 0xc09c47c  jal         func_2711F0
    ctx->pc = 0x329A14u;
    SET_GPR_U32(ctx, 31, 0x329A1Cu);
    ctx->pc = 0x2711F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711F0u, 0x329A14u, 0x329A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A1Cu;
label_329a1c:
    // 0x329a1c: 0x0  nop
    ctx->pc = 0x329a1cu;
    // NOP
label_329a20:
    // 0x329a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329a28: 0x3e00008  jr          $ra
    ctx->pc = 0x329A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A28u;
        // 0x329a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329A30u;
}
