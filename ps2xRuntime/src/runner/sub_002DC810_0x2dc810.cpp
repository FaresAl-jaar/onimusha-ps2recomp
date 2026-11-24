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

// Function: sub_002DC810
// Address: 0x2dc810 - 0x2dca10
void sub_002DC810_0x2dc810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC810_0x2dc810");
#endif

    switch (ctx->pc) {
        case 0x2dc860u: goto label_2dc860;
        case 0x2dc8d0u: goto label_2dc8d0;
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc928u: goto label_2dc928;
        case 0x2dc93cu: goto label_2dc93c;
        default: break;
    }

    ctx->pc = 0x2dc810u;

    // 0x2dc810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dc814: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dc814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dc818: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dc818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dc81c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dc820: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2dc820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc824: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dc828: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2dc828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dc830: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dc830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dc838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc840: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2dc840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2dc844: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2dc844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dc848: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2dc848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc84c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2DC84Cu;
    {
        const bool branch_taken_0x2dc84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC84Cu;
        // 0x2dc850: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc84c) {
            ctx->pc = 0x2DC9E8u;
            goto label_2dc9e8;
        }
    }
    ctx->pc = 0x2DC854u;
    // 0x2dc854: 0x6863c  dsll32      $s0, $a2, 24
    ctx->pc = 0x2dc854u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2dc858: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dc858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc85c: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2dc85cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2dc860:
    // 0x2dc860: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC860u;
    {
        const bool branch_taken_0x2dc860 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc860) {
            ctx->pc = 0x2DC890u;
            goto label_2dc890;
        }
    }
    ctx->pc = 0x2DC868u;
    // 0x2dc868: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2dc868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2dc86c: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x2dc86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2dc870: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x2dc870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x2dc874: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2dc874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2dc878: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2dc878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dc87c: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2DC87Cu;
    {
        const bool branch_taken_0x2dc87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc87c) {
            ctx->pc = 0x2DC9D0u;
            goto label_2dc9d0;
        }
    }
    ctx->pc = 0x2DC884u;
    // 0x2dc884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DC884u;
    {
        const bool branch_taken_0x2dc884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc884) {
            ctx->pc = 0x2DC8B0u;
            goto label_2dc8b0;
        }
    }
    ctx->pc = 0x2DC88Cu;
    // 0x2dc88c: 0x0  nop
    ctx->pc = 0x2dc88cu;
    // NOP
label_2dc890:
    // 0x2dc890: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x2dc890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x2dc894: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x2dc894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2dc898: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x2dc898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x2dc89c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2dc89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2dc8a0: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x2dc8a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc8a4: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x2DC8A4u;
    {
        const bool branch_taken_0x2dc8a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8a4) {
            ctx->pc = 0x2DC9D0u;
            goto label_2dc9d0;
        }
    }
    ctx->pc = 0x2DC8ACu;
    // 0x2dc8ac: 0x0  nop
    ctx->pc = 0x2dc8acu;
    // NOP
label_2dc8b0:
    // 0x2dc8b0: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2dc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dc8b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dc8b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8b8: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x2dc8b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dc8bc: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x2dc8bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2dc8c0: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DC8C0u;
    {
        const bool branch_taken_0x2dc8c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8C0u;
        // 0x2dc8c4: 0x2674818  mult        $t1, $s3, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8c0) {
            ctx->pc = 0x2DC9D0u;
            goto label_2dc9d0;
        }
    }
    ctx->pc = 0x2DC8C8u;
    // 0x2dc8c8: 0x8e88007c  lw          $t0, 0x7C($s4)
    ctx->pc = 0x2dc8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2dc8cc: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x2dc8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_2dc8d0:
    // 0x2dc8d0: 0x12a2821  addu        $a1, $t1, $t2
    ctx->pc = 0x2dc8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2dc8d4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2dc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc8d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dc8dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dc8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dc8e0: 0x1039021  addu        $s2, $t0, $v1
    ctx->pc = 0x2dc8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2dc8e4: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x2dc8e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2dc8e8: 0x14640035  bne         $v1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DC8E8u;
    {
        const bool branch_taken_0x2dc8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2dc8e8) {
            ctx->pc = 0x2DC9C0u;
            goto label_2dc9c0;
        }
    }
    ctx->pc = 0x2DC8F0u;
    // 0x2dc8f0: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x2dc8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
    // 0x2dc8f4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DC8F4u;
    {
        const bool branch_taken_0x2dc8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8f4) {
            ctx->pc = 0x2DC9C0u;
            goto label_2dc9c0;
        }
    }
    ctx->pc = 0x2DC8FCu;
    // 0x2dc8fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc900: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x2DC900u;
    SET_GPR_U32(ctx, 31, 0x2DC908u);
    ctx->pc = 0x2DC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC900u;
    // 0x2dc904: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x2DC900u, 0x2DC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC908u;
label_2dc908:
    // 0x2dc908: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2dc908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dc90c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2dc90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2dc910: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2dc910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2dc914: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x2dc914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2dc918: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x2dc918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2dc91c: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x2dc91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2dc920: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DC920u;
    SET_GPR_U32(ctx, 31, 0x2DC928u);
    ctx->pc = 0x2DC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC920u;
    // 0x2dc924: 0x2449000c  addiu       $t1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DC920u, 0x2DC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC928u;
label_2dc928:
    // 0x2dc928: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2dc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc92c: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x2dc92cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dc930: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x2dc930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dc934: 0xc096d80  jal         func_25B600
    ctx->pc = 0x2DC934u;
    SET_GPR_U32(ctx, 31, 0x2DC93Cu);
    ctx->pc = 0x2DC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC934u;
    // 0x2dc938: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x2DC934u, 0x2DC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC93Cu;
label_2dc93c:
    // 0x2dc93c: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x2dc93cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc940: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dc940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dc944: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x2dc944u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc948: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dc948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dc94c: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2dc94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dc950: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dc950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dc954: 0x84a50022  lh          $a1, 0x22($a1)
    ctx->pc = 0x2dc954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x2dc958: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2dc958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dc95c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dc960: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dc960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dc964: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dc964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dc968: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2dc968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dc96c: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x2dc96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dc970: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x2dc970u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2dc974: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2dc974u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2dc978: 0x84a50020  lh          $a1, 0x20($a1)
    ctx->pc = 0x2dc978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2dc97c: 0x0  nop
    ctx->pc = 0x2dc97cu;
    // NOP
    // 0x2dc980: 0x1810  mfhi        $v1
    ctx->pc = 0x2dc980u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2dc984: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2dc984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2dc988: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x2dc988u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc98c: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2dc98cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x2dc990: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC990u;
    {
        const bool branch_taken_0x2dc990 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC990u;
        // 0x2dc994: 0x28617ff1  slti        $at, $v1, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc990) {
            ctx->pc = 0x2DC9A0u;
            goto label_2dc9a0;
        }
    }
    ctx->pc = 0x2DC998u;
    // 0x2dc998: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC998u;
    {
        const bool branch_taken_0x2dc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC998u;
        // 0x2dc99c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc998) {
            ctx->pc = 0x2DC9B0u;
            goto label_2dc9b0;
        }
    }
    ctx->pc = 0x2DC9A0u;
label_2dc9a0:
    // 0x2dc9a0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC9A0u;
    {
        const bool branch_taken_0x2dc9a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9a0) {
            ctx->pc = 0x2DC9B0u;
            goto label_2dc9b0;
        }
    }
    ctx->pc = 0x2DC9A8u;
    // 0x2dc9a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DC9A8u;
    {
        const bool branch_taken_0x2dc9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9A8u;
        // 0x2dc9ac: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9a8) {
            ctx->pc = 0x2DC9B0u;
            goto label_2dc9b0;
        }
    }
    ctx->pc = 0x2DC9B0u;
label_2dc9b0:
    // 0x2dc9b0: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x2dc9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc9b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC9B8u;
    {
        const bool branch_taken_0x2dc9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9B8u;
        // 0x2dc9bc: 0xa2430025  sb          $v1, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9b8) {
            ctx->pc = 0x2DC9D0u;
            goto label_2dc9d0;
        }
    }
    ctx->pc = 0x2DC9C0u;
label_2dc9c0:
    // 0x2dc9c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2dc9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2dc9c4: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x2dc9c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2dc9c8: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2DC9C8u;
    {
        const bool branch_taken_0x2dc9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9c8) {
            ctx->pc = 0x2DC8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc8d0;
        }
    }
    ctx->pc = 0x2DC9D0u;
label_2dc9d0:
    // 0x2dc9d0: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x2dc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2dc9d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dc9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2dc9d8: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2dc9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dc9dc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2dc9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dc9e0: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2DC9E0u;
    {
        const bool branch_taken_0x2dc9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9E0u;
        // 0x2dc9e4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9e0) {
            ctx->pc = 0x2DC860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc860;
        }
    }
    ctx->pc = 0x2DC9E8u;
label_2dc9e8:
    // 0x2dc9e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dc9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dc9ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dc9ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc9f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dc9f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc9f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc9f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc9fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dca00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dca00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dca04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dca04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dca08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA08u;
        // 0x2dca0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCA10u;
}
