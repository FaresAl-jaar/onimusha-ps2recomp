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

// Function: sub_002727B0
// Address: 0x2727b0 - 0x2728c4
void sub_002727B0_0x2727b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002727B0_0x2727b0");
#endif

    switch (ctx->pc) {
        case 0x2727f8u: goto label_2727f8;
        case 0x272840u: goto label_272840;
        case 0x272858u: goto label_272858;
        default: break;
    }

    ctx->pc = 0x2727b0u;

    // 0x2727b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2727b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2727b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2727b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2727bc: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2727bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2727c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2727c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2727c4: 0x24a52670  addiu       $a1, $a1, 0x2670
    ctx->pc = 0x2727c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9840));
    // 0x2727c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2727c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2727cc: 0x24632674  addiu       $v1, $v1, 0x2674
    ctx->pc = 0x2727ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9844));
    // 0x2727d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2727d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2727d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2727d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2727d8: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2727d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2727dc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2727dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2727e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2727e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2727e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2727e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2727e8: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2727e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2727ec: 0x94700000  lhu         $s0, 0x0($v1)
    ctx->pc = 0x2727ecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2727f0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2727F0u;
    {
        const bool branch_taken_0x2727f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727F0u;
        // 0x2727f4: 0xa480002c  sh          $zero, 0x2C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727f0) {
            ctx->pc = 0x2728A0u;
            goto label_2728a0;
        }
    }
    ctx->pc = 0x2727F8u;
label_2727f8:
    // 0x2727f8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x2727f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2727fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2727fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x272800: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x272800u;
    {
        const bool branch_taken_0x272800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x272804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272800u;
        // 0x272804: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272800) {
            ctx->pc = 0x272850u;
            goto label_272850;
        }
    }
    ctx->pc = 0x272808u;
    // 0x272808: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272808u;
    {
        const bool branch_taken_0x272808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x272808) {
            ctx->pc = 0x272818u;
            goto label_272818;
        }
    }
    ctx->pc = 0x272810u;
    // 0x272810: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272810) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272818u;
label_272818:
    // 0x272818: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27281c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x27281cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x272820: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x272824: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x272824u;
    {
        const bool branch_taken_0x272824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272824) {
            ctx->pc = 0x272838u;
            goto label_272838;
        }
    }
    ctx->pc = 0x27282Cu;
    // 0x27282c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x27282cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x272830: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x272830u;
    {
        const bool branch_taken_0x272830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x272830) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272838u;
label_272838:
    // 0x272838: 0xc0ed2ac  jal         func_3B4AB0
    ctx->pc = 0x272838u;
    SET_GPR_U32(ctx, 31, 0x272840u);
    ctx->pc = 0x3B4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4AB0u, 0x272838u, 0x272840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272840u;
label_272840:
    // 0x272840: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272840u;
    {
        const bool branch_taken_0x272840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272840) {
            ctx->pc = 0x272860u;
            goto label_272860;
        }
    }
    ctx->pc = 0x272848u;
    // 0x272848: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x272848u;
    {
        const bool branch_taken_0x272848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272848) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272850u;
label_272850:
    // 0x272850: 0xc0d8e60  jal         func_363980
    ctx->pc = 0x272850u;
    SET_GPR_U32(ctx, 31, 0x272858u);
    ctx->pc = 0x363980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363980u, 0x272850u, 0x272858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272858u;
label_272858:
    // 0x272858: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x272858u;
    {
        const bool branch_taken_0x272858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272858) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272860u;
label_272860:
    // 0x272860: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x272860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x272864: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x272864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x272868: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x272868u;
    {
        const bool branch_taken_0x272868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272868) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272870u;
    // 0x272870: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x272870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x272874: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x272874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x272878: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x272878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27287c: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x27287cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x272880: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x272880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x272884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x272884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x272888: 0xa643002c  sh          $v1, 0x2C($s2)
    ctx->pc = 0x272888u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x27288c: 0x0  nop
    ctx->pc = 0x27288cu;
    // NOP
label_272890:
    // 0x272890: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x272890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x272894: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x272894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x272898: 0x1600ffd7  bnez        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x272898u;
    {
        const bool branch_taken_0x272898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272898u;
        // 0x27289c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272898) {
            ctx->pc = 0x2727F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2727f8;
        }
    }
    ctx->pc = 0x2728A0u;
label_2728a0:
    // 0x2728a0: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x2728a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2728a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2728a8: 0xa243002e  sb          $v1, 0x2E($s2)
    ctx->pc = 0x2728a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x2728ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2728acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2728b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2728b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2728b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2728b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2728b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2728b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2728bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2728BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2728C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728BCu;
        // 0x2728c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2728BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2728C4u;
}
