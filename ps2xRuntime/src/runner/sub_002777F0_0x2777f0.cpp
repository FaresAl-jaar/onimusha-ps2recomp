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

// Function: sub_002777F0
// Address: 0x2777f0 - 0x27795c
void sub_002777F0_0x2777f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002777F0_0x2777f0");
#endif

    switch (ctx->pc) {
        case 0x27782cu: goto label_27782c;
        case 0x277838u: goto label_277838;
        case 0x277848u: goto label_277848;
        case 0x27785cu: goto label_27785c;
        case 0x277878u: goto label_277878;
        case 0x277890u: goto label_277890;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778f8u: goto label_2778f8;
        case 0x277910u: goto label_277910;
        case 0x277934u: goto label_277934;
        default: break;
    }

    ctx->pc = 0x2777f0u;

    // 0x2777f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2777f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2777f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2777f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2777f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2777fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2777fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277804: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x277804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27780c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27780cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277814: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x277814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27781c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27781cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277820: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x277820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277824: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x277824u;
    SET_GPR_U32(ctx, 31, 0x27782Cu);
    ctx->pc = 0x277828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277824u;
    // 0x277828: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x277824u, 0x27782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27782Cu;
label_27782c:
    // 0x27782c: 0x8f85812c  lw          $a1, -0x7ED4($gp)
    ctx->pc = 0x27782cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x277830: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x277830u;
    SET_GPR_U32(ctx, 31, 0x277838u);
    ctx->pc = 0x277834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277830u;
    // 0x277834: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x277830u, 0x277838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277838u;
label_277838:
    // 0x277838: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x277838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27783c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x277840: 0xc09d524  jal         func_275490
    ctx->pc = 0x277840u;
    SET_GPR_U32(ctx, 31, 0x277848u);
    ctx->pc = 0x277844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277840u;
    // 0x277844: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x277840u, 0x277848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277848u;
label_277848:
    // 0x277848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27784c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27784Cu;
    {
        const bool branch_taken_0x27784c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x277850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27784Cu;
        // 0x277850: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27784c) {
            ctx->pc = 0x277868u;
            goto label_277868;
        }
    }
    ctx->pc = 0x277854u;
    // 0x277854: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x277854u;
    SET_GPR_U32(ctx, 31, 0x27785Cu);
    ctx->pc = 0x277858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277854u;
    // 0x277858: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x277854u, 0x27785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27785Cu;
label_27785c:
    // 0x27785c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27785Cu;
    {
        const bool branch_taken_0x27785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27785c) {
            ctx->pc = 0x277938u;
            goto label_277938;
        }
    }
    ctx->pc = 0x277864u;
    // 0x277864: 0x0  nop
    ctx->pc = 0x277864u;
    // NOP
label_277868:
    // 0x277868: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x277868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x27786c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27786cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277870: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x277870u;
    {
        const bool branch_taken_0x277870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277870u;
        // 0x277874: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277870) {
            ctx->pc = 0x2778A8u;
            goto label_2778a8;
        }
    }
    ctx->pc = 0x277878u;
label_277878:
    // 0x277878: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27787c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277884: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277888: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277888u;
    SET_GPR_U32(ctx, 31, 0x277890u);
    ctx->pc = 0x27788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277888u;
    // 0x27788c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277888u, 0x277890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277890u;
label_277890:
    // 0x277890: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x277890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x277894: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x277898: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x277898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27789c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27789Cu;
    {
        const bool branch_taken_0x27789c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27789c) {
            ctx->pc = 0x277878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277878;
        }
    }
    ctx->pc = 0x2778A4u;
    // 0x2778a4: 0x0  nop
    ctx->pc = 0x2778a4u;
    // NOP
label_2778a8:
    // 0x2778a8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2778a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2778ac: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2778acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2778b0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2778B0u;
    {
        const bool branch_taken_0x2778b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778B0u;
        // 0x2778b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778b0) {
            ctx->pc = 0x2778E8u;
            goto label_2778e8;
        }
    }
    ctx->pc = 0x2778B8u;
label_2778b8:
    // 0x2778b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2778b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2778bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2778c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2778c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2778c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778c8: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x2778C8u;
    SET_GPR_U32(ctx, 31, 0x2778D0u);
    ctx->pc = 0x2778CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2778C8u;
    // 0x2778cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x2778C8u, 0x2778D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2778D0u;
label_2778d0:
    // 0x2778d0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2778d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2778d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2778d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2778d8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2778d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2778dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2778DCu;
    {
        const bool branch_taken_0x2778dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2778dc) {
            ctx->pc = 0x2778B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2778b8;
        }
    }
    ctx->pc = 0x2778E4u;
    // 0x2778e4: 0x0  nop
    ctx->pc = 0x2778e4u;
    // NOP
label_2778e8:
    // 0x2778e8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2778e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2778ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2778ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2778f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2778F0u;
    {
        const bool branch_taken_0x2778f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778F0u;
        // 0x2778f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778f0) {
            ctx->pc = 0x277928u;
            goto label_277928;
        }
    }
    ctx->pc = 0x2778F8u;
label_2778f8:
    // 0x2778f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2778f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2778fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277900: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x277900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x277904: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277908: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277908u;
    SET_GPR_U32(ctx, 31, 0x277910u);
    ctx->pc = 0x27790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277908u;
    // 0x27790c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277908u, 0x277910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277910u;
label_277910:
    // 0x277910: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x277910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x277914: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x277914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x277918: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x277918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27791c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27791Cu;
    {
        const bool branch_taken_0x27791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27791c) {
            ctx->pc = 0x2778F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2778f8;
        }
    }
    ctx->pc = 0x277924u;
    // 0x277924: 0x0  nop
    ctx->pc = 0x277924u;
    // NOP
label_277928:
    // 0x277928: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x277928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x27792c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x27792Cu;
    SET_GPR_U32(ctx, 31, 0x277934u);
    ctx->pc = 0x277930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27792Cu;
    // 0x277930: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x27792Cu, 0x277934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277934u;
label_277934:
    // 0x277934: 0x0  nop
    ctx->pc = 0x277934u;
    // NOP
label_277938:
    // 0x277938: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x277938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27793c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27793cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277940: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27794c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277954: 0x3e00008  jr          $ra
    ctx->pc = 0x277954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277954u;
        // 0x277958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27795Cu;
}
