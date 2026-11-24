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

// Function: sub_0017A3B0
// Address: 0x17a3b0 - 0x17a728
void sub_0017A3B0_0x17a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A3B0_0x17a3b0");
#endif

    switch (ctx->pc) {
        case 0x17a460u: goto label_17a460;
        case 0x17a478u: goto label_17a478;
        case 0x17a498u: goto label_17a498;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4e0u: goto label_17a4e0;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a57cu: goto label_17a57c;
        case 0x17a5c8u: goto label_17a5c8;
        case 0x17a5e0u: goto label_17a5e0;
        case 0x17a600u: goto label_17a600;
        case 0x17a628u: goto label_17a628;
        case 0x17a648u: goto label_17a648;
        case 0x17a6a0u: goto label_17a6a0;
        case 0x17a700u: goto label_17a700;
        default: break;
    }

    ctx->pc = 0x17a3b0u;

    // 0x17a3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a3b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a3c0: 0x8c832cbc  lw          $v1, 0x2CBC($a0)
    ctx->pc = 0x17a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11452)));
    // 0x17a3c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A3C4u;
    {
        const bool branch_taken_0x17a3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3C4u;
        // 0x17a3c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3c4) {
            ctx->pc = 0x17A3D8u;
            goto label_17a3d8;
        }
    }
    ctx->pc = 0x17A3CCu;
    // 0x17a3cc: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x17A3CCu;
    {
        const bool branch_taken_0x17a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3CCu;
        // 0x17a3d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3cc) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A3D4u;
    // 0x17a3d4: 0x0  nop
    ctx->pc = 0x17a3d4u;
    // NOP
label_17a3d8:
    // 0x17a3d8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x17a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x17a3dc: 0x0  nop
    ctx->pc = 0x17a3dcu;
    // NOP
    // 0x17a3e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17a3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a3e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a3ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17a3f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17a3f4: 0xaf828640  sw          $v0, -0x79C0($gp)
    ctx->pc = 0x17a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 2));
    // 0x17a3f8: 0x8f868640  lw          $a2, -0x79C0($gp)
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a3fc: 0x90c30020  lbu         $v1, 0x20($a2)
    ctx->pc = 0x17a3fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x17a400: 0x10640063  beq         $v1, $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x17A400u;
    {
        const bool branch_taken_0x17a400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x17A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A400u;
        // 0x17a404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a400) {
            ctx->pc = 0x17A590u;
            goto label_17a590;
        }
    }
    ctx->pc = 0x17A408u;
    // 0x17a408: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A408u;
    {
        const bool branch_taken_0x17a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a408) {
            ctx->pc = 0x17A428u;
            goto label_17a428;
        }
    }
    ctx->pc = 0x17A410u;
    // 0x17a410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A410u;
    {
        const bool branch_taken_0x17a410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a410) {
            ctx->pc = 0x17A420u;
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A418u;
    // 0x17a418: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x17A418u;
    {
        const bool branch_taken_0x17a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a418) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A420u;
label_17a420:
    // 0x17a420: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x17A420u;
    {
        const bool branch_taken_0x17a420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a420) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A428u;
label_17a428:
    // 0x17a428: 0x92032c74  lbu         $v1, 0x2C74($s0)
    ctx->pc = 0x17a428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a42c: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17A42Cu;
    {
        const bool branch_taken_0x17a42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x17a42c) {
            ctx->pc = 0x17A4D8u;
            goto label_17a4d8;
        }
    }
    ctx->pc = 0x17A434u;
    // 0x17a434: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17A434u;
    {
        const bool branch_taken_0x17a434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a434) {
            ctx->pc = 0x17A490u;
            goto label_17a490;
        }
    }
    ctx->pc = 0x17A43Cu;
    // 0x17a43c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A43Cu;
    {
        const bool branch_taken_0x17a43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a43c) {
            ctx->pc = 0x17A450u;
            goto label_17a450;
        }
    }
    ctx->pc = 0x17A444u;
    // 0x17a444: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x17A444u;
    {
        const bool branch_taken_0x17a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a444) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A44Cu;
    // 0x17a44c: 0x0  nop
    ctx->pc = 0x17a44cu;
    // NOP
label_17a450:
    // 0x17a450: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x17a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17a454: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17a458: 0xc049522  jal         func_125488
    ctx->pc = 0x17A458u;
    SET_GPR_U32(ctx, 31, 0x17A460u);
    ctx->pc = 0x17A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A458u;
    // 0x17a45c: 0x8cc6000c  lw          $a2, 0xC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17A458u, 0x17A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A460u;
label_17a460:
    // 0x17a460: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a464: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x17a464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17a468: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x17a468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17a46c: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x17a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17a470: 0xc05ea30  jal         func_17A8C0
    ctx->pc = 0x17A470u;
    SET_GPR_U32(ctx, 31, 0x17A478u);
    ctx->pc = 0x17A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A470u;
    // 0x17a474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8C0u, 0x17A470u, 0x17A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A478u;
label_17a478:
    // 0x17a478: 0x92032c74  lbu         $v1, 0x2C74($s0)
    ctx->pc = 0x17a478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a484: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x17A484u;
    {
        const bool branch_taken_0x17a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A484u;
        // 0x17a488: 0xa2032c74  sb          $v1, 0x2C74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a484) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A48Cu;
    // 0x17a48c: 0x0  nop
    ctx->pc = 0x17a48cu;
    // NOP
label_17a490:
    // 0x17a490: 0xc05ea38  jal         func_17A8E0
    ctx->pc = 0x17A490u;
    SET_GPR_U32(ctx, 31, 0x17A498u);
    ctx->pc = 0x17A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A490u;
    // 0x17a494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8E0u, 0x17A490u, 0x17A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A498u;
label_17a498:
    // 0x17a498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a49c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17A49Cu;
    {
        const bool branch_taken_0x17a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a49c) {
            ctx->pc = 0x17A4D0u;
            goto label_17a4d0;
        }
    }
    ctx->pc = 0x17A4A4u;
    // 0x17a4a4: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a4a8: 0x8e062c94  lw          $a2, 0x2C94($s0)
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11412)));
    // 0x17a4ac: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17a4b0: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17a4b4: 0x8c480030  lw          $t0, 0x30($v0)
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17a4b8: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17A4B8u;
    SET_GPR_U32(ctx, 31, 0x17A4C0u);
    ctx->pc = 0x17A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4B8u;
    // 0x17a4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA00u, 0x17A4B8u, 0x17A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4C0u;
label_17a4c0:
    // 0x17a4c0: 0x92022c74  lbu         $v0, 0x2C74($s0)
    ctx->pc = 0x17a4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a4c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a4c8: 0xa2022c74  sb          $v0, 0x2C74($s0)
    ctx->pc = 0x17a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11380), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a4cc: 0x0  nop
    ctx->pc = 0x17a4ccu;
    // NOP
label_17a4d0:
    // 0x17a4d0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x17A4D0u;
    {
        const bool branch_taken_0x17a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4D0u;
        // 0x17a4d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4d0) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A4D8u;
label_17a4d8:
    // 0x17a4d8: 0xc05ea88  jal         func_17AA20
    ctx->pc = 0x17A4D8u;
    SET_GPR_U32(ctx, 31, 0x17A4E0u);
    ctx->pc = 0x17A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4D8u;
    // 0x17a4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA20u, 0x17A4D8u, 0x17A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4E0u;
label_17a4e0:
    // 0x17a4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a4e4: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17A4E4u;
    {
        const bool branch_taken_0x17a4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a4e4) {
            ctx->pc = 0x17A588u;
            goto label_17a588;
        }
    }
    ctx->pc = 0x17A4ECu;
    // 0x17a4ec: 0x8f868640  lw          $a2, -0x79C0($gp)
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a4f0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x17a4f4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x17a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x17a4f8: 0x24846b80  addiu       $a0, $a0, 0x6B80
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27520));
    // 0x17a4fc: 0x24a55518  addiu       $a1, $a1, 0x5518
    ctx->pc = 0x17a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21784));
    // 0x17a500: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x17a504: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x17a504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x17a508: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x17a50c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17a50cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17a510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a514: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x17A514u;
    SET_GPR_U32(ctx, 31, 0x17A51Cu);
    ctx->pc = 0x17A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A514u;
    // 0x17a518: 0xacc20024  sw          $v0, 0x24($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x17A514u, 0x17A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A51Cu;
label_17a51c:
    // 0x17a51c: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x17a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a520: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a524: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a528: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x17a528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x17a52c: 0x24a56b80  addiu       $a1, $a1, 0x6B80
    ctx->pc = 0x17a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
    // 0x17a530: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17a534: 0xac236c00  sw          $v1, 0x6C00($at)
    ctx->pc = 0x17a534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C00u, _value); } while (0);
    // 0x17a538: 0x8e032cb4  lw          $v1, 0x2CB4($s0)
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11444)));
    // 0x17a53c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a540: 0xac236c04  sw          $v1, 0x6C04($at)
    ctx->pc = 0x17a540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C04u, _value); } while (0);
    // 0x17a544: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x17a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17a548: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a54c: 0xac236c08  sw          $v1, 0x6C08($at)
    ctx->pc = 0x17a54cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C08u, _value); } while (0);
    // 0x17a550: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a554: 0xac206c0c  sw          $zero, 0x6C0C($at)
    ctx->pc = 0x17a554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C0Cu, _value); } while (0);
    // 0x17a558: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17a55c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a560: 0xac236c10  sw          $v1, 0x6C10($at)
    ctx->pc = 0x17a560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C10u, _value); } while (0);
    // 0x17a564: 0x8e032c98  lw          $v1, 0x2C98($s0)
    ctx->pc = 0x17a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x17a568: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a56c: 0xac236c18  sw          $v1, 0x6C18($at)
    ctx->pc = 0x17a56cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C18u, _value); } while (0);
    // 0x17a570: 0x8083001f  lb          $v1, 0x1F($a0)
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x17a574: 0xc054704  jal         func_151C10
    ctx->pc = 0x17A574u;
    SET_GPR_U32(ctx, 31, 0x17A57Cu);
    ctx->pc = 0x17A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A574u;
    // 0x17a578: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C10u, 0x17A574u, 0x17A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A57Cu;
label_17a57c:
    // 0x17a57c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x17A57Cu;
    {
        const bool branch_taken_0x17a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a57c) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A584u;
    // 0x17a584: 0x0  nop
    ctx->pc = 0x17a584u;
    // NOP
label_17a588:
    // 0x17a588: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x17A588u;
    {
        const bool branch_taken_0x17a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A588u;
        // 0x17a58c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a588) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A590u;
label_17a590:
    // 0x17a590: 0x92032c74  lbu         $v1, 0x2C74($s0)
    ctx->pc = 0x17a590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a594: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17A594u;
    {
        const bool branch_taken_0x17a594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x17A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A594u;
        // 0x17a598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a594) {
            ctx->pc = 0x17A640u;
            goto label_17a640;
        }
    }
    ctx->pc = 0x17A59Cu;
    // 0x17a59c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17A59Cu;
    {
        const bool branch_taken_0x17a59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a59c) {
            ctx->pc = 0x17A5F8u;
            goto label_17a5f8;
        }
    }
    ctx->pc = 0x17A5A4u;
    // 0x17a5a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A5A4u;
    {
        const bool branch_taken_0x17a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5a4) {
            ctx->pc = 0x17A5B8u;
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A5ACu;
    // 0x17a5ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x17A5ACu;
    {
        const bool branch_taken_0x17a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5ac) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A5B4u;
    // 0x17a5b4: 0x0  nop
    ctx->pc = 0x17a5b4u;
    // NOP
label_17a5b8:
    // 0x17a5b8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17a5bc: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x17a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17a5c0: 0xc049522  jal         func_125488
    ctx->pc = 0x17A5C0u;
    SET_GPR_U32(ctx, 31, 0x17A5C8u);
    ctx->pc = 0x17A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5C0u;
    // 0x17a5c4: 0x8cc6000c  lw          $a2, 0xC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x17A5C0u, 0x17A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5C8u;
label_17a5c8:
    // 0x17a5c8: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x17a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a5cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17a5d0: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17a5d4: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x17a5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17a5d8: 0xc05ea30  jal         func_17A8C0
    ctx->pc = 0x17A5D8u;
    SET_GPR_U32(ctx, 31, 0x17A5E0u);
    ctx->pc = 0x17A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5D8u;
    // 0x17a5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8C0u, 0x17A5D8u, 0x17A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5E0u;
label_17a5e0:
    // 0x17a5e0: 0x92032c74  lbu         $v1, 0x2C74($s0)
    ctx->pc = 0x17a5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a5e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17a5ec: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x17A5ECu;
    {
        const bool branch_taken_0x17a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5ECu;
        // 0x17a5f0: 0xa2032c74  sb          $v1, 0x2C74($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5ec) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A5F4u;
    // 0x17a5f4: 0x0  nop
    ctx->pc = 0x17a5f4u;
    // NOP
label_17a5f8:
    // 0x17a5f8: 0xc05ea38  jal         func_17A8E0
    ctx->pc = 0x17A5F8u;
    SET_GPR_U32(ctx, 31, 0x17A600u);
    ctx->pc = 0x17A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5F8u;
    // 0x17a5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8E0u, 0x17A5F8u, 0x17A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A600u;
label_17a600:
    // 0x17a600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a604: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17A604u;
    {
        const bool branch_taken_0x17a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a604) {
            ctx->pc = 0x17A638u;
            goto label_17a638;
        }
    }
    ctx->pc = 0x17A60Cu;
    // 0x17a60c: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x17a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a610: 0x8e062c94  lw          $a2, 0x2C94($s0)
    ctx->pc = 0x17a610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11412)));
    // 0x17a614: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x17a614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17a618: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x17a618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17a61c: 0x8c480030  lw          $t0, 0x30($v0)
    ctx->pc = 0x17a61cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17a620: 0xc05ea80  jal         func_17AA00
    ctx->pc = 0x17A620u;
    SET_GPR_U32(ctx, 31, 0x17A628u);
    ctx->pc = 0x17A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A620u;
    // 0x17a624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA00u, 0x17A620u, 0x17A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A628u;
label_17a628:
    // 0x17a628: 0x92022c74  lbu         $v0, 0x2C74($s0)
    ctx->pc = 0x17a628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11380)));
    // 0x17a62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a630: 0xa2022c74  sb          $v0, 0x2C74($s0)
    ctx->pc = 0x17a630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11380), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a634: 0x0  nop
    ctx->pc = 0x17a634u;
    // NOP
label_17a638:
    // 0x17a638: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x17A638u;
    {
        const bool branch_taken_0x17a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A638u;
        // 0x17a63c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a638) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A640u;
label_17a640:
    // 0x17a640: 0xc05ea88  jal         func_17AA20
    ctx->pc = 0x17A640u;
    SET_GPR_U32(ctx, 31, 0x17A648u);
    ctx->pc = 0x17A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A640u;
    // 0x17a644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA20u, 0x17A640u, 0x17A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A648u;
label_17a648:
    // 0x17a648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a64c: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x17A64Cu;
    {
        const bool branch_taken_0x17a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a64c) {
            ctx->pc = 0x17A708u;
            goto label_17a708;
        }
    }
    ctx->pc = 0x17A654u;
    // 0x17a654: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x17a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a658: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x17a658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x17a65c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x17a660: 0x8e022c7c  lw          $v0, 0x2C7C($s0)
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x17a664: 0x24846b80  addiu       $a0, $a0, 0x6B80
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27520));
    // 0x17a668: 0x24a55530  addiu       $a1, $a1, 0x5530
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21808));
    // 0x17a66c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x17a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x17a670: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17a674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a678: 0xae022c7c  sw          $v0, 0x2C7C($s0)
    ctx->pc = 0x17a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11388), GPR_U32(ctx, 2));
    // 0x17a67c: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x17a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a680: 0x8e022c78  lw          $v0, 0x2C78($s0)
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11384)));
    // 0x17a684: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x17a688: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17a688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a68c: 0xae022c78  sw          $v0, 0x2C78($s0)
    ctx->pc = 0x17a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11384), GPR_U32(ctx, 2));
    // 0x17a690: 0x92022c75  lbu         $v0, 0x2C75($s0)
    ctx->pc = 0x17a690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11381)));
    // 0x17a694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a698: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x17A698u;
    SET_GPR_U32(ctx, 31, 0x17A6A0u);
    ctx->pc = 0x17A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A698u;
    // 0x17a69c: 0xa2022c75  sb          $v0, 0x2C75($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11381), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x17A698u, 0x17A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6A0u;
label_17a6a0:
    // 0x17a6a0: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x17a6a4: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a6a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6ac: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x17a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x17a6b0: 0x24a56b80  addiu       $a1, $a1, 0x6B80
    ctx->pc = 0x17a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
    // 0x17a6b4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17a6b8: 0xac236c00  sw          $v1, 0x6C00($at)
    ctx->pc = 0x17a6b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C00u, _value); } while (0);
    // 0x17a6bc: 0x8e032cb4  lw          $v1, 0x2CB4($s0)
    ctx->pc = 0x17a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11444)));
    // 0x17a6c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6c4: 0xac236c04  sw          $v1, 0x6C04($at)
    ctx->pc = 0x17a6c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C04u, _value); } while (0);
    // 0x17a6c8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x17a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17a6cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6d0: 0xac236c08  sw          $v1, 0x6C08($at)
    ctx->pc = 0x17a6d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C08u, _value); } while (0);
    // 0x17a6d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6d8: 0xac206c0c  sw          $zero, 0x6C0C($at)
    ctx->pc = 0x17a6d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C0Cu, _value); } while (0);
    // 0x17a6dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17a6e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6e4: 0xac236c10  sw          $v1, 0x6C10($at)
    ctx->pc = 0x17a6e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C10u, _value); } while (0);
    // 0x17a6e8: 0x8e032c98  lw          $v1, 0x2C98($s0)
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x17a6ec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a6f0: 0xac236c18  sw          $v1, 0x6C18($at)
    ctx->pc = 0x17a6f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C18u, _value); } while (0);
    // 0x17a6f4: 0x8083001f  lb          $v1, 0x1F($a0)
    ctx->pc = 0x17a6f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x17a6f8: 0xc054704  jal         func_151C10
    ctx->pc = 0x17A6F8u;
    SET_GPR_U32(ctx, 31, 0x17A700u);
    ctx->pc = 0x17A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6F8u;
    // 0x17a6fc: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C10u, 0x17A6F8u, 0x17A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A700u;
label_17a700:
    // 0x17a700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A700u;
    {
        const bool branch_taken_0x17a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a700) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A708u;
label_17a708:
    // 0x17a708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A708u;
    {
        const bool branch_taken_0x17a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A708u;
        // 0x17a70c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a708) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A710u;
label_17a710:
    // 0x17a710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a714: 0x0  nop
    ctx->pc = 0x17a714u;
    // NOP
label_17a718:
    // 0x17a718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a720: 0x3e00008  jr          $ra
    ctx->pc = 0x17A720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A720u;
        // 0x17a724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A728u;
}
