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

// Function: sub_003AD820
// Address: 0x3ad820 - 0x3ad924
void sub_003AD820_0x3ad820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD820_0x3ad820");
#endif

    switch (ctx->pc) {
        case 0x3ad898u: goto label_3ad898;
        case 0x3ad910u: goto label_3ad910;
        default: break;
    }

    ctx->pc = 0x3ad820u;

    // 0x3ad820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ad820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ad824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ad824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ad828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ad82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ad830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ad834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad838: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD838u;
    {
        const bool branch_taken_0x3ad838 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD838u;
        // 0x3ad83c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad838) {
            ctx->pc = 0x3AD858u;
            goto label_3ad858;
        }
    }
    ctx->pc = 0x3AD840u;
    // 0x3ad840: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x3ad840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3ad844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad848: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD848u;
    {
        const bool branch_taken_0x3ad848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ad848) {
            ctx->pc = 0x3AD858u;
            goto label_3ad858;
        }
    }
    ctx->pc = 0x3AD850u;
    // 0x3ad850: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ad850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad854: 0x0  nop
    ctx->pc = 0x3ad854u;
    // NOP
label_3ad858:
    // 0x3ad858: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ad85c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD85Cu;
    {
        const bool branch_taken_0x3ad85c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD85Cu;
        // 0x3ad860: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad85c) {
            ctx->pc = 0x3AD878u;
            goto label_3ad878;
        }
    }
    ctx->pc = 0x3AD864u;
    // 0x3ad864: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD864u;
    {
        const bool branch_taken_0x3ad864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ad864) {
            ctx->pc = 0x3AD878u;
            goto label_3ad878;
        }
    }
    ctx->pc = 0x3AD86Cu;
    // 0x3ad86c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD86Cu;
    {
        const bool branch_taken_0x3ad86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad86c) {
            ctx->pc = 0x3AD888u;
            goto label_3ad888;
        }
    }
    ctx->pc = 0x3AD874u;
    // 0x3ad874: 0x0  nop
    ctx->pc = 0x3ad874u;
    // NOP
label_3ad878:
    // 0x3ad878: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x3ad878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x3ad87c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD87Cu;
    {
        const bool branch_taken_0x3ad87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD87Cu;
        // 0x3ad880: 0xa4820016  sh          $v0, 0x16($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad87c) {
            ctx->pc = 0x3AD890u;
            goto label_3ad890;
        }
    }
    ctx->pc = 0x3AD884u;
    // 0x3ad884: 0x0  nop
    ctx->pc = 0x3ad884u;
    // NOP
label_3ad888:
    // 0x3ad888: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x3ad888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3ad88c: 0xa4820016  sh          $v0, 0x16($a0)
    ctx->pc = 0x3ad88cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
label_3ad890:
    // 0x3ad890: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x3AD890u;
    SET_GPR_U32(ctx, 31, 0x3AD898u);
    ctx->pc = 0x3AD894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD890u;
    // 0x3ad894: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x3AD890u, 0x3AD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD898u;
label_3ad898:
    // 0x3ad898: 0x2403016e  addiu       $v1, $zero, 0x16E
    ctx->pc = 0x3ad898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
    // 0x3ad89c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3ad89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ad8a0: 0xa7a30032  sh          $v1, 0x32($sp)
    ctx->pc = 0x3ad8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ad8a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ad8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ad8a8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3ad8ac: 0xa3a20035  sb          $v0, 0x35($sp)
    ctx->pc = 0x3ad8acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad8b0: 0xa3a30036  sb          $v1, 0x36($sp)
    ctx->pc = 0x3ad8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ad8b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ad8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ad8b8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3ad8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ad8bc: 0xa3a20034  sb          $v0, 0x34($sp)
    ctx->pc = 0x3ad8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad8c0: 0xa3a30037  sb          $v1, 0x37($sp)
    ctx->pc = 0x3ad8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ad8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ad8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ad8c8: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3ad8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3ad8cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD8CCu;
    {
        const bool branch_taken_0x3ad8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8CCu;
        // 0x3ad8d0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8cc) {
            ctx->pc = 0x3AD8E8u;
            goto label_3ad8e8;
        }
    }
    ctx->pc = 0x3AD8D4u;
    // 0x3ad8d4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3ad8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3ad8d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3ad8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3ad8dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD8DCu;
    {
        const bool branch_taken_0x3ad8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8DCu;
        // 0x3ad8e0: 0x240201a2  addiu       $v0, $zero, 0x1A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8dc) {
            ctx->pc = 0x3AD8E8u;
            goto label_3ad8e8;
        }
    }
    ctx->pc = 0x3AD8E4u;
    // 0x3ad8e4: 0xa7a2003e  sh          $v0, 0x3E($sp)
    ctx->pc = 0x3ad8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
label_3ad8e8:
    // 0x3ad8e8: 0x10463c  dsll32      $t0, $s0, 24
    ctx->pc = 0x3ad8e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) << (32 + 24));
    // 0x3ad8ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3ad8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3ad8f0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3ad8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3ad8f4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x3ad8f4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x3ad8f8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3ad8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3ad8fc: 0x2222825  or          $a1, $s1, $v0
    ctx->pc = 0x3ad8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3ad900: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3ad900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad904: 0x24070710  addiu       $a3, $zero, 0x710
    ctx->pc = 0x3ad904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
    // 0x3ad908: 0xc09565c  jal         func_255970
    ctx->pc = 0x3AD908u;
    SET_GPR_U32(ctx, 31, 0x3AD910u);
    ctx->pc = 0x3AD90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD908u;
    // 0x3ad90c: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x3AD908u, 0x3AD910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD910u;
label_3ad910:
    // 0x3ad910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ad910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad91c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD91Cu;
        // 0x3ad920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD924u;
}
