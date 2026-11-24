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

// Function: sub_00370780
// Address: 0x370780 - 0x370a28
void sub_00370780_0x370780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370780_0x370780");
#endif

    switch (ctx->pc) {
        case 0x3707ecu: goto label_3707ec;
        case 0x37081cu: goto label_37081c;
        case 0x370860u: goto label_370860;
        case 0x370880u: goto label_370880;
        case 0x3708d8u: goto label_3708d8;
        case 0x3708e4u: goto label_3708e4;
        case 0x370904u: goto label_370904;
        case 0x370918u: goto label_370918;
        case 0x370950u: goto label_370950;
        case 0x370984u: goto label_370984;
        case 0x3709c4u: goto label_3709c4;
        case 0x3709ccu: goto label_3709cc;
        case 0x370a0cu: goto label_370a0c;
        case 0x370a14u: goto label_370a14;
        default: break;
    }

    ctx->pc = 0x370780u;

    // 0x370780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x370784: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x370784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x370788: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37078c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x37078cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x370790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370794: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x370794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x370798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37079c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x37079cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3707a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3707a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3707a4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3707A4u;
    {
        const bool branch_taken_0x3707a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707A4u;
        // 0x3707a8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707a4) {
            ctx->pc = 0x370860u;
            goto label_370860;
        }
    }
    ctx->pc = 0x3707ACu;
    // 0x3707ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3707acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3707b0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x3707b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3707b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3707b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3707b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3707b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3707bc: 0x82030330  lb          $v1, 0x330($s0)
    ctx->pc = 0x3707bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x3707c0: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x3707c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3707c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3707c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3707c8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3707c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3707cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3707ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3707d0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x3707d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x3707d4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3707d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3707d8: 0x0  nop
    ctx->pc = 0x3707d8u;
    // NOP
    // 0x3707dc: 0x0  nop
    ctx->pc = 0x3707dcu;
    // NOP
    // 0x3707e0: 0x1010  mfhi        $v0
    ctx->pc = 0x3707e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3707e4: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3707E4u;
    SET_GPR_U32(ctx, 31, 0x3707ECu);
    ctx->pc = 0x3707E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707E4u;
    // 0x3707e8: 0xa2020330  sb          $v0, 0x330($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 816), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3707E4u, 0x3707ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707ECu;
label_3707ec:
    // 0x3707ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3707ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3707f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3707f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3707f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3707f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3707f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3707f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3707fc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3707fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x370800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37080c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37080cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370810: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370810u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370814: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370814u;
    SET_GPR_U32(ctx, 31, 0x37081Cu);
    ctx->pc = 0x370818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370814u;
    // 0x370818: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370814u, 0x37081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37081Cu;
label_37081c:
    // 0x37081c: 0x82020330  lb          $v0, 0x330($s0)
    ctx->pc = 0x37081cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x370820: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x370820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x370824: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x370824u;
    {
        const bool branch_taken_0x370824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x370828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370824u;
        // 0x370828: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370824) {
            ctx->pc = 0x370860u;
            goto label_370860;
        }
    }
    ctx->pc = 0x37082Cu;
    // 0x37082c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x370830: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x370830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x370834: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x370834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x370838: 0x92020337  lbu         $v0, 0x337($s0)
    ctx->pc = 0x370838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 823)));
    // 0x37083c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370840: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x370840u;
    {
        const bool branch_taken_0x370840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x370840) {
            ctx->pc = 0x370860u;
            goto label_370860;
        }
    }
    ctx->pc = 0x370848u;
    // 0x370848: 0xa2030337  sb          $v1, 0x337($s0)
    ctx->pc = 0x370848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 823), (uint8_t)GPR_U32(ctx, 3));
    // 0x37084c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x37084cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x370850: 0x92050337  lbu         $a1, 0x337($s0)
    ctx->pc = 0x370850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 823)));
    // 0x370854: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x370854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x370858: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x370858u;
    SET_GPR_U32(ctx, 31, 0x370860u);
    ctx->pc = 0x37085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370858u;
    // 0x37085c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x370858u, 0x370860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370860u;
label_370860:
    // 0x370860: 0x82030330  lb          $v1, 0x330($s0)
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x370864: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x370864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x370868: 0x2442ac24  addiu       $v0, $v0, -0x53DC
    ctx->pc = 0x370868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945828));
    // 0x37086c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x370870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x370874: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x370874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370878: 0xc0dc804  jal         func_372010
    ctx->pc = 0x370878u;
    SET_GPR_U32(ctx, 31, 0x370880u);
    ctx->pc = 0x37087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370878u;
    // 0x37087c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x370878u, 0x370880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370880u;
label_370880:
    // 0x370880: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x370880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x370884: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x370884u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x370888: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x370888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x37088c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37088Cu;
    {
        const bool branch_taken_0x37088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x370890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37088Cu;
        // 0x370890: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37088c) {
            ctx->pc = 0x3708A0u;
            goto label_3708a0;
        }
    }
    ctx->pc = 0x370894u;
    // 0x370894: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x370894u;
    {
        const bool branch_taken_0x370894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370894) {
            ctx->pc = 0x370920u;
            goto label_370920;
        }
    }
    ctx->pc = 0x37089Cu;
    // 0x37089c: 0x0  nop
    ctx->pc = 0x37089cu;
    // NOP
label_3708a0:
    // 0x3708a0: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x3708a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x3708a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3708A4u;
    {
        const bool branch_taken_0x3708a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3708a4) {
            ctx->pc = 0x3708C8u;
            goto label_3708c8;
        }
    }
    ctx->pc = 0x3708ACu;
    // 0x3708ac: 0x82040330  lb          $a0, 0x330($s0)
    ctx->pc = 0x3708acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x3708b0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3708b4: 0x2463ac20  addiu       $v1, $v1, -0x53E0
    ctx->pc = 0x3708b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945824));
    // 0x3708b8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3708b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3708bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3708bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3708c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3708C0u;
    {
        const bool branch_taken_0x3708c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3708C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708C0u;
        // 0x3708c4: 0x94630000  lhu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708c0) {
            ctx->pc = 0x370920u;
            goto label_370920;
        }
    }
    ctx->pc = 0x3708C8u;
label_3708c8:
    // 0x3708c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3708c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3708cc: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3708d0: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x3708D0u;
    SET_GPR_U32(ctx, 31, 0x3708D8u);
    ctx->pc = 0x3708D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708D0u;
    // 0x3708d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x3708D0u, 0x3708D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708D8u;
label_3708d8:
    // 0x3708d8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3708dc: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3708DCu;
    SET_GPR_U32(ctx, 31, 0x3708E4u);
    ctx->pc = 0x3708E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708DCu;
    // 0x3708e0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3708DCu, 0x3708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708E4u;
label_3708e4:
    // 0x3708e4: 0x82030330  lb          $v1, 0x330($s0)
    ctx->pc = 0x3708e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x3708e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3708ec: 0x2442ac24  addiu       $v0, $v0, -0x53DC
    ctx->pc = 0x3708ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945828));
    // 0x3708f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3708f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3708f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3708f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3708fc: 0xc0dc804  jal         func_372010
    ctx->pc = 0x3708FCu;
    SET_GPR_U32(ctx, 31, 0x370904u);
    ctx->pc = 0x370900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708FCu;
    // 0x370900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x3708FCu, 0x370904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370904u;
label_370904:
    // 0x370904: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x370904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x370908: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x370908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37090c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x37090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x370910: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x370910u;
    SET_GPR_U32(ctx, 31, 0x370918u);
    ctx->pc = 0x370914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370910u;
    // 0x370914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x370910u, 0x370918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370918u;
label_370918:
    // 0x370918: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x370918u;
    {
        const bool branch_taken_0x370918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370918) {
            ctx->pc = 0x370A18u;
            goto label_370a18;
        }
    }
    ctx->pc = 0x370920u;
label_370920:
    // 0x370920: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x370920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x370924: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x370924u;
    {
        const bool branch_taken_0x370924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x370928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370924u;
        // 0x370928: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370924) {
            ctx->pc = 0x370A18u;
            goto label_370a18;
        }
    }
    ctx->pc = 0x37092Cu;
    // 0x37092c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37092cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x370930: 0x24841930  addiu       $a0, $a0, 0x1930
    ctx->pc = 0x370930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
    // 0x370934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x370934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x370938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x370938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37093c: 0x600008  jr          $v1
    ctx->pc = 0x37093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x370948u: goto label_370948;
            case 0x370990u: goto label_370990;
            case 0x3709D8u: goto label_3709d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37093Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x370944u;
    // 0x370944: 0x0  nop
    ctx->pc = 0x370944u;
    // NOP
label_370948:
    // 0x370948: 0xc0dc28c  jal         func_370A30
    ctx->pc = 0x370948u;
    SET_GPR_U32(ctx, 31, 0x370950u);
    ctx->pc = 0x37094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370948u;
    // 0x37094c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370A30u, 0x370948u, 0x370950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370950u;
label_370950:
    // 0x370950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370954: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x370958: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x37095c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x370960: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x370960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x370964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370968: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x370968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x37096c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37096cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x370970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x370974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37097c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37097Cu;
    SET_GPR_U32(ctx, 31, 0x370984u);
    ctx->pc = 0x370980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37097Cu;
    // 0x370980: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37097Cu, 0x370984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370984u;
label_370984:
    // 0x370984: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x370984u;
    {
        const bool branch_taken_0x370984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370984) {
            ctx->pc = 0x370A18u;
            goto label_370a18;
        }
    }
    ctx->pc = 0x37098Cu;
    // 0x37098c: 0x0  nop
    ctx->pc = 0x37098cu;
    // NOP
label_370990:
    // 0x370990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370994: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x370994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x370998: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x370998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37099c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x37099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3709a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3709a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3709a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3709a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709a8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3709a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3709ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3709acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3709b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3709b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3709b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3709BCu;
    SET_GPR_U32(ctx, 31, 0x3709C4u);
    ctx->pc = 0x3709C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709BCu;
    // 0x3709c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3709BCu, 0x3709C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709C4u;
label_3709c4:
    // 0x3709c4: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x3709C4u;
    SET_GPR_U32(ctx, 31, 0x3709CCu);
    ctx->pc = 0x3709C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709C4u;
    // 0x3709c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x3709C4u, 0x3709CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709CCu;
label_3709cc:
    // 0x3709cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3709CCu;
    {
        const bool branch_taken_0x3709cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3709cc) {
            ctx->pc = 0x370A18u;
            goto label_370a18;
        }
    }
    ctx->pc = 0x3709D4u;
    // 0x3709d4: 0x0  nop
    ctx->pc = 0x3709d4u;
    // NOP
label_3709d8:
    // 0x3709d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3709d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3709dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3709dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3709e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3709e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3709e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3709e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3709e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3709ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3709ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3709f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3709f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3709f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3709f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x370a00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a04: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x370A04u;
    SET_GPR_U32(ctx, 31, 0x370A0Cu);
    ctx->pc = 0x370A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A04u;
    // 0x370a08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x370A04u, 0x370A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A0Cu;
label_370a0c:
    // 0x370a0c: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x370A0Cu;
    SET_GPR_U32(ctx, 31, 0x370A14u);
    ctx->pc = 0x370A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A0Cu;
    // 0x370a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x370A0Cu, 0x370A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A14u;
label_370a14:
    // 0x370a14: 0x0  nop
    ctx->pc = 0x370a14u;
    // NOP
label_370a18:
    // 0x370a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x370a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x370a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370a20: 0x3e00008  jr          $ra
    ctx->pc = 0x370A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A20u;
        // 0x370a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A28u;
}
