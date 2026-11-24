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

// Function: sub_003977F0
// Address: 0x3977f0 - 0x397acc
void sub_003977F0_0x3977f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003977F0_0x3977f0");
#endif

    switch (ctx->pc) {
        case 0x397820u: goto label_397820;
        case 0x39786cu: goto label_39786c;
        case 0x39789cu: goto label_39789c;
        case 0x397908u: goto label_397908;
        case 0x397918u: goto label_397918;
        case 0x39798cu: goto label_39798c;
        case 0x397994u: goto label_397994;
        case 0x3979d4u: goto label_3979d4;
        case 0x3979dcu: goto label_3979dc;
        case 0x397a1cu: goto label_397a1c;
        case 0x397a24u: goto label_397a24;
        case 0x397a64u: goto label_397a64;
        case 0x397a6cu: goto label_397a6c;
        case 0x397aacu: goto label_397aac;
        case 0x397ab4u: goto label_397ab4;
        default: break;
    }

    ctx->pc = 0x3977f0u;

    // 0x3977f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3977f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3977f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3977f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3977f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3977f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3977fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3977fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x397800: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x397800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x397804: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x397804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x397808: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397808u;
    {
        const bool branch_taken_0x397808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397808u;
        // 0x39780c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397808) {
            ctx->pc = 0x397820u;
            goto label_397820;
        }
    }
    ctx->pc = 0x397810u;
    // 0x397810: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x397810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x397814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x397814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397818: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x397818u;
    SET_GPR_U32(ctx, 31, 0x397820u);
    ctx->pc = 0x39781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397818u;
    // 0x39781c: 0xa2220023  sb          $v0, 0x23($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x397818u, 0x397820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397820u;
label_397820:
    // 0x397820: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x397820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x397824: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x397824u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x397828: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x397828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x39782c: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x39782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x397830: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x397830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x397834: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x397834u;
    {
        const bool branch_taken_0x397834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397834u;
        // 0x397838: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397834) {
            ctx->pc = 0x3978A0u;
            goto label_3978a0;
        }
    }
    ctx->pc = 0x39783Cu;
    // 0x39783c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x39783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397840: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x397840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x397844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397848: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x397848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x39784c: 0x82220335  lb          $v0, 0x335($s1)
    ctx->pc = 0x39784cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 821)));
    // 0x397850: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x397850u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x397854: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x397854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x397858: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x397858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39785c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x39785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x397860: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x397860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x397864: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x397864u;
    SET_GPR_U32(ctx, 31, 0x39786Cu);
    ctx->pc = 0x397868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397864u;
    // 0x397868: 0xa2220335  sb          $v0, 0x335($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 821), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x397864u, 0x39786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39786Cu;
label_39786c:
    // 0x39786c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397870: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397874: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397878: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x39787c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x39787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x397880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39788c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39788cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397890: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397894: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397894u;
    SET_GPR_U32(ctx, 31, 0x39789Cu);
    ctx->pc = 0x397898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397894u;
    // 0x397898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397894u, 0x39789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39789Cu;
label_39789c:
    // 0x39789c: 0x0  nop
    ctx->pc = 0x39789cu;
    // NOP
label_3978a0:
    // 0x3978a0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3978a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3978a4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3978a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3978a8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3978a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3978ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3978ACu;
    {
        const bool branch_taken_0x3978ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978ACu;
        // 0x3978b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978ac) {
            ctx->pc = 0x3978C0u;
            goto label_3978c0;
        }
    }
    ctx->pc = 0x3978B4u;
    // 0x3978b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3978B4u;
    {
        const bool branch_taken_0x3978b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978b4) {
            ctx->pc = 0x397910u;
            goto label_397910;
        }
    }
    ctx->pc = 0x3978BCu;
    // 0x3978bc: 0x0  nop
    ctx->pc = 0x3978bcu;
    // NOP
label_3978c0:
    // 0x3978c0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3978c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3978c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3978C4u;
    {
        const bool branch_taken_0x3978c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978c4) {
            ctx->pc = 0x3978E8u;
            goto label_3978e8;
        }
    }
    ctx->pc = 0x3978CCu;
    // 0x3978cc: 0x82230335  lb          $v1, 0x335($s1)
    ctx->pc = 0x3978ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 821)));
    // 0x3978d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3978d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3978d4: 0x2442c830  addiu       $v0, $v0, -0x37D0
    ctx->pc = 0x3978d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953008));
    // 0x3978d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3978d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3978dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3978dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3978e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3978E0u;
    {
        const bool branch_taken_0x3978e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978E0u;
        // 0x3978e4: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978e0) {
            ctx->pc = 0x397910u;
            goto label_397910;
        }
    }
    ctx->pc = 0x3978E8u;
label_3978e8:
    // 0x3978e8: 0x82230335  lb          $v1, 0x335($s1)
    ctx->pc = 0x3978e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 821)));
    // 0x3978ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3978ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3978f0: 0x2442c834  addiu       $v0, $v0, -0x37CC
    ctx->pc = 0x3978f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953012));
    // 0x3978f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3978f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3978f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3978f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3978fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3978fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x397900: 0xc0dc804  jal         func_372010
    ctx->pc = 0x397900u;
    SET_GPR_U32(ctx, 31, 0x397908u);
    ctx->pc = 0x397904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397900u;
    // 0x397904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x397900u, 0x397908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397908u;
label_397908:
    // 0x397908: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x397908u;
    {
        const bool branch_taken_0x397908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397908) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x397910u;
label_397910:
    // 0x397910: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x397910u;
    SET_GPR_U32(ctx, 31, 0x397918u);
    ctx->pc = 0x397914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397910u;
    // 0x397914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x397910u, 0x397918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397918u;
label_397918:
    // 0x397918: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x397918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x39791c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397920: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x397920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x397924: 0x12030054  beq         $s0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x397924u;
    {
        const bool branch_taken_0x397924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x397928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397924u;
        // 0x397928: 0xa2240023  sb          $a0, 0x23($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397924) {
            ctx->pc = 0x397A78u;
            goto label_397a78;
        }
    }
    ctx->pc = 0x39792Cu;
    // 0x39792c: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x39792Cu;
    {
        const bool branch_taken_0x39792c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x397930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39792Cu;
        // 0x397930: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39792c) {
            ctx->pc = 0x397A30u;
            goto label_397a30;
        }
    }
    ctx->pc = 0x397934u;
    // 0x397934: 0x1203002c  beq         $s0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x397934u;
    {
        const bool branch_taken_0x397934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x397934) {
            ctx->pc = 0x3979E8u;
            goto label_3979e8;
        }
    }
    ctx->pc = 0x39793Cu;
    // 0x39793c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x39793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x397940: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x397940u;
    {
        const bool branch_taken_0x397940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x397944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397940u;
        // 0x397944: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397940) {
            ctx->pc = 0x3979A0u;
            goto label_3979a0;
        }
    }
    ctx->pc = 0x397948u;
    // 0x397948: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397948u;
    {
        const bool branch_taken_0x397948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x397948) {
            ctx->pc = 0x397958u;
            goto label_397958;
        }
    }
    ctx->pc = 0x397950u;
    // 0x397950: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x397950u;
    {
        const bool branch_taken_0x397950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397950) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x397958u;
label_397958:
    // 0x397958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39795c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x39795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397960: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397964: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x397964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x397968: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39796c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39796cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397970: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39797c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39797cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397980: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397980u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397984: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397984u;
    SET_GPR_U32(ctx, 31, 0x39798Cu);
    ctx->pc = 0x397988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397984u;
    // 0x397988: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397984u, 0x39798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39798Cu;
label_39798c:
    // 0x39798c: 0xc0e5eec  jal         func_397BB0
    ctx->pc = 0x39798Cu;
    SET_GPR_U32(ctx, 31, 0x397994u);
    ctx->pc = 0x397990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39798Cu;
    // 0x397990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BB0u, 0x39798Cu, 0x397994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397994u;
label_397994:
    // 0x397994: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x397994u;
    {
        const bool branch_taken_0x397994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397994) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x39799Cu;
    // 0x39799c: 0x0  nop
    ctx->pc = 0x39799cu;
    // NOP
label_3979a0:
    // 0x3979a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3979a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3979a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3979a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3979a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3979a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3979ac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3979acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3979b0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3979b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3979b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3979b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979b8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3979b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3979bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3979bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3979c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3979c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3979c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3979cc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3979CCu;
    SET_GPR_U32(ctx, 31, 0x3979D4u);
    ctx->pc = 0x3979D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979CCu;
    // 0x3979d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3979CCu, 0x3979D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979D4u;
label_3979d4:
    // 0x3979d4: 0xc0e60a0  jal         func_398280
    ctx->pc = 0x3979D4u;
    SET_GPR_U32(ctx, 31, 0x3979DCu);
    ctx->pc = 0x3979D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979D4u;
    // 0x3979d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398280u, 0x3979D4u, 0x3979DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979DCu;
label_3979dc:
    // 0x3979dc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3979DCu;
    {
        const bool branch_taken_0x3979dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3979dc) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x3979E4u;
    // 0x3979e4: 0x0  nop
    ctx->pc = 0x3979e4u;
    // NOP
label_3979e8:
    // 0x3979e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3979e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3979ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3979ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3979f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3979f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3979f4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3979f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3979f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3979fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3979fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a00: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397A14u;
    SET_GPR_U32(ctx, 31, 0x397A1Cu);
    ctx->pc = 0x397A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A14u;
    // 0x397a18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397A14u, 0x397A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A1Cu;
label_397a1c:
    // 0x397a1c: 0xc0e61e8  jal         func_3987A0
    ctx->pc = 0x397A1Cu;
    SET_GPR_U32(ctx, 31, 0x397A24u);
    ctx->pc = 0x397A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A1Cu;
    // 0x397a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987A0u, 0x397A1Cu, 0x397A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A24u;
label_397a24:
    // 0x397a24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x397A24u;
    {
        const bool branch_taken_0x397a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397a24) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x397A2Cu;
    // 0x397a2c: 0x0  nop
    ctx->pc = 0x397a2cu;
    // NOP
label_397a30:
    // 0x397a30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397a34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397a38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397a3c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x397a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x397a40: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397a44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a48: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397A5Cu;
    SET_GPR_U32(ctx, 31, 0x397A64u);
    ctx->pc = 0x397A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A5Cu;
    // 0x397a60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397A5Cu, 0x397A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A64u;
label_397a64:
    // 0x397a64: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x397A64u;
    SET_GPR_U32(ctx, 31, 0x397A6Cu);
    ctx->pc = 0x397A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397A64u;
    // 0x397a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x397A64u, 0x397A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397A6Cu;
label_397a6c:
    // 0x397a6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x397A6Cu;
    {
        const bool branch_taken_0x397a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397a6c) {
            ctx->pc = 0x397AB8u;
            goto label_397ab8;
        }
    }
    ctx->pc = 0x397A74u;
    // 0x397a74: 0x0  nop
    ctx->pc = 0x397a74u;
    // NOP
label_397a78:
    // 0x397a78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397a7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397a80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397a84: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x397a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x397a88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a90: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397aa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397aa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397aa4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397AA4u;
    SET_GPR_U32(ctx, 31, 0x397AACu);
    ctx->pc = 0x397AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397AA4u;
    // 0x397aa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397AA4u, 0x397AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AACu;
label_397aac:
    // 0x397aac: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x397AACu;
    SET_GPR_U32(ctx, 31, 0x397AB4u);
    ctx->pc = 0x397AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397AACu;
    // 0x397ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x397AACu, 0x397AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AB4u;
label_397ab4:
    // 0x397ab4: 0x0  nop
    ctx->pc = 0x397ab4u;
    // NOP
label_397ab8:
    // 0x397ab8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x397ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397abc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397ac0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x397ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x397AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AC4u;
        // 0x397ac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397ACCu;
}
