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

// Function: sub_0028E760
// Address: 0x28e760 - 0x28e960
void sub_0028E760_0x28e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E760_0x28e760");
#endif

    switch (ctx->pc) {
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e820u: goto label_28e820;
        case 0x28e858u: goto label_28e858;
        case 0x28e878u: goto label_28e878;
        case 0x28e88cu: goto label_28e88c;
        default: break;
    }

    ctx->pc = 0x28e760u;

    // 0x28e760: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28e764: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28e768: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28e76c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28e770: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x28e770u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e774: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28e778: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28e778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e77c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e780: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28e780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e790: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x28e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x28e794: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28e794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28e798: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28e798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e79c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x28E79Cu;
    {
        const bool branch_taken_0x28e79c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E79Cu;
        // 0x28e7a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e79c) {
            ctx->pc = 0x28E938u;
            goto label_28e938;
        }
    }
    ctx->pc = 0x28E7A4u;
    // 0x28e7a4: 0x6863c  dsll32      $s0, $a2, 24
    ctx->pc = 0x28e7a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28e7a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e7ac: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x28e7acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_28e7b0:
    // 0x28e7b0: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x28E7B0u;
    {
        const bool branch_taken_0x28e7b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7b0) {
            ctx->pc = 0x28E7E0u;
            goto label_28e7e0;
        }
    }
    ctx->pc = 0x28E7B8u;
    // 0x28e7b8: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x28e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x28e7bc: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28e7c0: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x28e7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x28e7c4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x28e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x28e7c8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x28e7c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28e7cc: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x28E7CCu;
    {
        const bool branch_taken_0x28e7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7cc) {
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E7D4u;
    // 0x28e7d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E7D4u;
    {
        const bool branch_taken_0x28e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7d4) {
            ctx->pc = 0x28E800u;
            goto label_28e800;
        }
    }
    ctx->pc = 0x28E7DCu;
    // 0x28e7dc: 0x0  nop
    ctx->pc = 0x28e7dcu;
    // NOP
label_28e7e0:
    // 0x28e7e0: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x28e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x28e7e4: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x28e7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28e7e8: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x28e7e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x28e7ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x28e7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x28e7f0: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x28e7f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e7f4: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x28E7F4u;
    {
        const bool branch_taken_0x28e7f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7f4) {
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E7FCu;
    // 0x28e7fc: 0x0  nop
    ctx->pc = 0x28e7fcu;
    // NOP
label_28e800:
    // 0x28e800: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x28e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x28e804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28e804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e808: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x28e808u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x28e80c: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x28e80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28e810: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x28E810u;
    {
        const bool branch_taken_0x28e810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E810u;
        // 0x28e814: 0x2674818  mult        $t1, $s3, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e810) {
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E818u;
    // 0x28e818: 0x8e88007c  lw          $t0, 0x7C($s4)
    ctx->pc = 0x28e818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x28e81c: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28e820:
    // 0x28e820: 0x12a2821  addu        $a1, $t1, $t2
    ctx->pc = 0x28e820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x28e824: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x28e824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28e828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28e82c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28e830: 0x1039021  addu        $s2, $t0, $v1
    ctx->pc = 0x28e830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28e834: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x28e834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28e838: 0x14640035  bne         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28E838u;
    {
        const bool branch_taken_0x28e838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28e838) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E840u;
    // 0x28e840: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x28e840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x28e844: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x28E844u;
    {
        const bool branch_taken_0x28e844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e844) {
            ctx->pc = 0x28E910u;
            goto label_28e910;
        }
    }
    ctx->pc = 0x28E84Cu;
    // 0x28e84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e850: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x28E850u;
    SET_GPR_U32(ctx, 31, 0x28E858u);
    ctx->pc = 0x28E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E850u;
    // 0x28e854: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x28E850u, 0x28E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E858u;
label_28e858:
    // 0x28e858: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x28e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x28e85c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x28e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x28e860: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x28e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x28e864: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x28e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28e868: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x28e868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x28e86c: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x28e86cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28e870: 0xc096da0  jal         func_25B680
    ctx->pc = 0x28E870u;
    SET_GPR_U32(ctx, 31, 0x28E878u);
    ctx->pc = 0x28E874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E870u;
    // 0x28e874: 0x2449000c  addiu       $t1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x28E870u, 0x28E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E878u;
label_28e878:
    // 0x28e878: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e87c: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x28e87cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e880: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x28e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x28e884: 0xc096d80  jal         func_25B600
    ctx->pc = 0x28E884u;
    SET_GPR_U32(ctx, 31, 0x28E88Cu);
    ctx->pc = 0x28E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E884u;
    // 0x28e888: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x28E884u, 0x28E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E88Cu;
label_28e88c:
    // 0x28e88c: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x28e88cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28e890: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28e890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28e894: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x28e894u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28e898: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x28e898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x28e89c: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x28e8a0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28e8a4: 0x84a50022  lh          $a1, 0x22($a1)
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x28e8a8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28e8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28e8ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e8b0: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x28e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x28e8b4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28e8b8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28e8bc: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x28e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x28e8c0: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28e8c4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x28e8c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28e8c8: 0x84a50020  lh          $a1, 0x20($a1)
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x28e8cc: 0x0  nop
    ctx->pc = 0x28e8ccu;
    // NOP
    // 0x28e8d0: 0x1810  mfhi        $v1
    ctx->pc = 0x28e8d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28e8d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x28e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x28e8d8: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x28e8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x28e8dc: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x28e8dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x28e8e0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E8E0u;
    {
        const bool branch_taken_0x28e8e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x28E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E0u;
        // 0x28e8e4: 0x28617ff1  slti        $at, $v1, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8e0) {
            ctx->pc = 0x28E8F0u;
            goto label_28e8f0;
        }
    }
    ctx->pc = 0x28E8E8u;
    // 0x28e8e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E8E8u;
    {
        const bool branch_taken_0x28e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8E8u;
        // 0x28e8ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8e8) {
            ctx->pc = 0x28E900u;
            goto label_28e900;
        }
    }
    ctx->pc = 0x28E8F0u;
label_28e8f0:
    // 0x28e8f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E8F0u;
    {
        const bool branch_taken_0x28e8f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e8f0) {
            ctx->pc = 0x28E900u;
            goto label_28e900;
        }
    }
    ctx->pc = 0x28E8F8u;
    // 0x28e8f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28E8F8u;
    {
        const bool branch_taken_0x28e8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8F8u;
        // 0x28e8fc: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8f8) {
            ctx->pc = 0x28E900u;
            goto label_28e900;
        }
    }
    ctx->pc = 0x28E900u;
label_28e900:
    // 0x28e900: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x28e900u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x28e904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e908: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E908u;
    {
        const bool branch_taken_0x28e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E908u;
        // 0x28e90c: 0xa2430025  sb          $v1, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e908) {
            ctx->pc = 0x28E920u;
            goto label_28e920;
        }
    }
    ctx->pc = 0x28E910u;
label_28e910:
    // 0x28e910: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x28e910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x28e914: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x28e914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28e918: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x28E918u;
    {
        const bool branch_taken_0x28e918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e918) {
            ctx->pc = 0x28E820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e820;
        }
    }
    ctx->pc = 0x28E920u;
label_28e920:
    // 0x28e920: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x28e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x28e924: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28e924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28e928: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28e928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28e92c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x28e92cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e930: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x28E930u;
    {
        const bool branch_taken_0x28e930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E930u;
        // 0x28e934: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e930) {
            ctx->pc = 0x28E7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e7b0;
        }
    }
    ctx->pc = 0x28E938u;
label_28e938:
    // 0x28e938: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e93c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28e93cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e940: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e94c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e958: 0x3e00008  jr          $ra
    ctx->pc = 0x28E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E958u;
        // 0x28e95c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E960u;
}
