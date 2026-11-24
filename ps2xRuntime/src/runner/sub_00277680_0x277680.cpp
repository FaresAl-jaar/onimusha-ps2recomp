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

// Function: sub_00277680
// Address: 0x277680 - 0x2777ec
void sub_00277680_0x277680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277680_0x277680");
#endif

    switch (ctx->pc) {
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776ecu: goto label_2776ec;
        case 0x277708u: goto label_277708;
        case 0x277720u: goto label_277720;
        case 0x277748u: goto label_277748;
        case 0x277760u: goto label_277760;
        case 0x277788u: goto label_277788;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777c4u: goto label_2777c4;
        default: break;
    }

    ctx->pc = 0x277680u;

    // 0x277680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x277680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x277684: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x277684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x277688: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x277688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27768c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277690: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277694: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x277694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27769c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27769cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2776a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2776a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2776a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2776a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2776ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2776acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776b0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2776b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776b4: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2776B4u;
    SET_GPR_U32(ctx, 31, 0x2776BCu);
    ctx->pc = 0x2776B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776B4u;
    // 0x2776b8: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2776B4u, 0x2776BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776BCu;
label_2776bc:
    // 0x2776bc: 0x8f85812c  lw          $a1, -0x7ED4($gp)
    ctx->pc = 0x2776bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x2776c0: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2776C0u;
    SET_GPR_U32(ctx, 31, 0x2776C8u);
    ctx->pc = 0x2776C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776C0u;
    // 0x2776c4: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2776C0u, 0x2776C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776C8u;
label_2776c8:
    // 0x2776c8: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2776c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2776cc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2776d0: 0xc09d524  jal         func_275490
    ctx->pc = 0x2776D0u;
    SET_GPR_U32(ctx, 31, 0x2776D8u);
    ctx->pc = 0x2776D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776D0u;
    // 0x2776d4: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2776D0u, 0x2776D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776D8u;
label_2776d8:
    // 0x2776d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2776d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2776DCu;
    {
        const bool branch_taken_0x2776dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2776E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776DCu;
        // 0x2776e0: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776dc) {
            ctx->pc = 0x2776F8u;
            goto label_2776f8;
        }
    }
    ctx->pc = 0x2776E4u;
    // 0x2776e4: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2776E4u;
    SET_GPR_U32(ctx, 31, 0x2776ECu);
    ctx->pc = 0x2776E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776E4u;
    // 0x2776e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2776E4u, 0x2776ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776ECu;
label_2776ec:
    // 0x2776ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2776ECu;
    {
        const bool branch_taken_0x2776ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2776ec) {
            ctx->pc = 0x2777C8u;
            goto label_2777c8;
        }
    }
    ctx->pc = 0x2776F4u;
    // 0x2776f4: 0x0  nop
    ctx->pc = 0x2776f4u;
    // NOP
label_2776f8:
    // 0x2776f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2776f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2776fc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2776fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277700: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x277700u;
    {
        const bool branch_taken_0x277700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277700u;
        // 0x277704: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277700) {
            ctx->pc = 0x277738u;
            goto label_277738;
        }
    }
    ctx->pc = 0x277708u;
label_277708:
    // 0x277708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27770c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27770cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x277710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277714: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277718: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277718u;
    SET_GPR_U32(ctx, 31, 0x277720u);
    ctx->pc = 0x27771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277718u;
    // 0x27771c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277718u, 0x277720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277720u;
label_277720:
    // 0x277720: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x277720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x277724: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x277724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x277728: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x277728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27772c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27772Cu;
    {
        const bool branch_taken_0x27772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27772c) {
            ctx->pc = 0x277708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277708;
        }
    }
    ctx->pc = 0x277734u;
    // 0x277734: 0x0  nop
    ctx->pc = 0x277734u;
    // NOP
label_277738:
    // 0x277738: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x277738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27773c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27773cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277740: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x277740u;
    {
        const bool branch_taken_0x277740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277740u;
        // 0x277744: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277740) {
            ctx->pc = 0x277778u;
            goto label_277778;
        }
    }
    ctx->pc = 0x277748u;
label_277748:
    // 0x277748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27774c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27774cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277750: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277754: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277758: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277758u;
    SET_GPR_U32(ctx, 31, 0x277760u);
    ctx->pc = 0x27775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277758u;
    // 0x27775c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277758u, 0x277760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277760u;
label_277760:
    // 0x277760: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x277760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x277764: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x277764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x277768: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x277768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27776c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27776Cu;
    {
        const bool branch_taken_0x27776c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27776c) {
            ctx->pc = 0x277748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277748;
        }
    }
    ctx->pc = 0x277774u;
    // 0x277774: 0x0  nop
    ctx->pc = 0x277774u;
    // NOP
label_277778:
    // 0x277778: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x277778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x27777c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27777cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277780: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x277780u;
    {
        const bool branch_taken_0x277780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277780u;
        // 0x277784: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277780) {
            ctx->pc = 0x2777B8u;
            goto label_2777b8;
        }
    }
    ctx->pc = 0x277788u;
label_277788:
    // 0x277788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27778c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277790: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x277790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x277794: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277798: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277798u;
    SET_GPR_U32(ctx, 31, 0x2777A0u);
    ctx->pc = 0x27779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277798u;
    // 0x27779c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277798u, 0x2777A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777A0u;
label_2777a0:
    // 0x2777a0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2777a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2777a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2777a8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2777a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2777ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2777ACu;
    {
        const bool branch_taken_0x2777ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2777ac) {
            ctx->pc = 0x277788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277788;
        }
    }
    ctx->pc = 0x2777B4u;
    // 0x2777b4: 0x0  nop
    ctx->pc = 0x2777b4u;
    // NOP
label_2777b8:
    // 0x2777b8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2777bc: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2777BCu;
    SET_GPR_U32(ctx, 31, 0x2777C4u);
    ctx->pc = 0x2777C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2777BCu;
    // 0x2777c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2777BCu, 0x2777C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777C4u;
label_2777c4:
    // 0x2777c4: 0x0  nop
    ctx->pc = 0x2777c4u;
    // NOP
label_2777c8:
    // 0x2777c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2777c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2777cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2777ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2777d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2777d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2777d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2777d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2777d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2777d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2777dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2777dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2777e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2777e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2777e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2777E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777E4u;
        // 0x2777e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2777E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2777ECu;
}
