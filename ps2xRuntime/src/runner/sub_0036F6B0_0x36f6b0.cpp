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

// Function: sub_0036F6B0
// Address: 0x36f6b0 - 0x36f958
void sub_0036F6B0_0x36f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F6B0_0x36f6b0");
#endif

    switch (ctx->pc) {
        case 0x36f70cu: goto label_36f70c;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f780u: goto label_36f780;
        case 0x36f7a0u: goto label_36f7a0;
        case 0x36f7f8u: goto label_36f7f8;
        case 0x36f804u: goto label_36f804;
        case 0x36f824u: goto label_36f824;
        case 0x36f838u: goto label_36f838;
        case 0x36f880u: goto label_36f880;
        case 0x36f8b4u: goto label_36f8b4;
        case 0x36f8f4u: goto label_36f8f4;
        case 0x36f8fcu: goto label_36f8fc;
        case 0x36f93cu: goto label_36f93c;
        case 0x36f944u: goto label_36f944;
        default: break;
    }

    ctx->pc = 0x36f6b0u;

    // 0x36f6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f6b4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x36f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x36f6b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36f6bc: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36f6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36f6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36f6c4: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x36f6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x36f6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f6cc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x36f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x36f6d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x36f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x36f6d4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x36F6D4u;
    {
        const bool branch_taken_0x36f6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6D4u;
        // 0x36f6d8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6d4) {
            ctx->pc = 0x36F780u;
            goto label_36f780;
        }
    }
    ctx->pc = 0x36F6DCu;
    // 0x36f6dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36f6e0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x36f6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x36f6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f6e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x36f6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x36f6ec: 0x82020331  lb          $v0, 0x331($s0)
    ctx->pc = 0x36f6ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36f6f0: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x36f6f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x36f6f4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f6f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36f6fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36f700: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x36f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36f704: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F704u;
    SET_GPR_U32(ctx, 31, 0x36F70Cu);
    ctx->pc = 0x36F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F704u;
    // 0x36f708: 0xa2020331  sb          $v0, 0x331($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F704u, 0x36F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F70Cu;
label_36f70c:
    // 0x36f70c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f710: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f714: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f718: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f71c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36f720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f728: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f72c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f72cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f730: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f730u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f734: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F734u;
    SET_GPR_U32(ctx, 31, 0x36F73Cu);
    ctx->pc = 0x36F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F734u;
    // 0x36f738: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F734u, 0x36F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F73Cu;
label_36f73c:
    // 0x36f73c: 0x82020331  lb          $v0, 0x331($s0)
    ctx->pc = 0x36f73cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36f740: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x36f740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36f744: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x36F744u;
    {
        const bool branch_taken_0x36f744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F744u;
        // 0x36f748: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f744) {
            ctx->pc = 0x36F780u;
            goto label_36f780;
        }
    }
    ctx->pc = 0x36F74Cu;
    // 0x36f74c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36f750: 0x2442abd0  addiu       $v0, $v0, -0x5430
    ctx->pc = 0x36f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
    // 0x36f754: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f758: 0x92020338  lbu         $v0, 0x338($s0)
    ctx->pc = 0x36f758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x36f75c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f760: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F760u;
    {
        const bool branch_taken_0x36f760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f760) {
            ctx->pc = 0x36F780u;
            goto label_36f780;
        }
    }
    ctx->pc = 0x36F768u;
    // 0x36f768: 0xa2030338  sb          $v1, 0x338($s0)
    ctx->pc = 0x36f768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 824), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f76c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f770: 0x92050338  lbu         $a1, 0x338($s0)
    ctx->pc = 0x36f770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x36f774: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36f778: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x36F778u;
    SET_GPR_U32(ctx, 31, 0x36F780u);
    ctx->pc = 0x36F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F778u;
    // 0x36f77c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x36F778u, 0x36F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F780u;
label_36f780:
    // 0x36f780: 0x82030331  lb          $v1, 0x331($s0)
    ctx->pc = 0x36f780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36f784: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36f788: 0x2442abb4  addiu       $v0, $v0, -0x544C
    ctx->pc = 0x36f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945716));
    // 0x36f78c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36f790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f794: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36f794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f798: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36F798u;
    SET_GPR_U32(ctx, 31, 0x36F7A0u);
    ctx->pc = 0x36F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F798u;
    // 0x36f79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36F798u, 0x36F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7A0u;
label_36f7a0:
    // 0x36f7a0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36f7a4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x36f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x36f7a8: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x36f7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x36f7ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F7ACu;
    {
        const bool branch_taken_0x36f7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f7ac) {
            ctx->pc = 0x36F7C0u;
            goto label_36f7c0;
        }
    }
    ctx->pc = 0x36F7B4u;
    // 0x36f7b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x36F7B4u;
    {
        const bool branch_taken_0x36f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7B4u;
        // 0x36f7b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f7b4) {
            ctx->pc = 0x36F840u;
            goto label_36f840;
        }
    }
    ctx->pc = 0x36F7BCu;
    // 0x36f7bc: 0x0  nop
    ctx->pc = 0x36f7bcu;
    // NOP
label_36f7c0:
    // 0x36f7c0: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x36f7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x36f7c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F7C4u;
    {
        const bool branch_taken_0x36f7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f7c4) {
            ctx->pc = 0x36F7E8u;
            goto label_36f7e8;
        }
    }
    ctx->pc = 0x36F7CCu;
    // 0x36f7cc: 0x82040331  lb          $a0, 0x331($s0)
    ctx->pc = 0x36f7ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36f7d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36f7d4: 0x2463abb0  addiu       $v1, $v1, -0x5450
    ctx->pc = 0x36f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945712));
    // 0x36f7d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x36f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x36f7dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36f7e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36F7E0u;
    {
        const bool branch_taken_0x36f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7E0u;
        // 0x36f7e4: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f7e0) {
            ctx->pc = 0x36F840u;
            goto label_36f840;
        }
    }
    ctx->pc = 0x36F7E8u;
label_36f7e8:
    // 0x36f7e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f7ec: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36f7f0: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x36F7F0u;
    SET_GPR_U32(ctx, 31, 0x36F7F8u);
    ctx->pc = 0x36F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7F0u;
    // 0x36f7f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x36F7F0u, 0x36F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7F8u;
label_36f7f8:
    // 0x36f7f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36f7fc: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x36F7FCu;
    SET_GPR_U32(ctx, 31, 0x36F804u);
    ctx->pc = 0x36F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7FCu;
    // 0x36f800: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x36F7FCu, 0x36F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F804u;
label_36f804:
    // 0x36f804: 0x82030331  lb          $v1, 0x331($s0)
    ctx->pc = 0x36f804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36f808: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36f808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36f80c: 0x2442abb4  addiu       $v0, $v0, -0x544C
    ctx->pc = 0x36f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945716));
    // 0x36f810: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36f810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36f814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f818: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36f818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f81c: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36F81Cu;
    SET_GPR_U32(ctx, 31, 0x36F824u);
    ctx->pc = 0x36F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F81Cu;
    // 0x36f820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36F81Cu, 0x36F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F824u;
label_36f824:
    // 0x36f824: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f828: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f82c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f830: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x36F830u;
    SET_GPR_U32(ctx, 31, 0x36F838u);
    ctx->pc = 0x36F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F830u;
    // 0x36f834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x36F830u, 0x36F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F838u;
label_36f838:
    // 0x36f838: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x36F838u;
    {
        const bool branch_taken_0x36f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f838) {
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F840u;
label_36f840:
    // 0x36f840: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f844: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x36F844u;
    {
        const bool branch_taken_0x36f844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F844u;
        // 0x36f848: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f844) {
            ctx->pc = 0x36F908u;
            goto label_36f908;
        }
    }
    ctx->pc = 0x36F84Cu;
    // 0x36f84c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x36F84Cu;
    {
        const bool branch_taken_0x36f84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f84c) {
            ctx->pc = 0x36F8C0u;
            goto label_36f8c0;
        }
    }
    ctx->pc = 0x36F854u;
    // 0x36f854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f858: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36F858u;
    {
        const bool branch_taken_0x36f858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F858u;
        // 0x36f85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f858) {
            ctx->pc = 0x36F878u;
            goto label_36f878;
        }
    }
    ctx->pc = 0x36F860u;
    // 0x36f860: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F860u;
    {
        const bool branch_taken_0x36f860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f860) {
            ctx->pc = 0x36F878u;
            goto label_36f878;
        }
    }
    ctx->pc = 0x36F868u;
    // 0x36f868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36F868u;
    {
        const bool branch_taken_0x36f868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f868) {
            ctx->pc = 0x36F878u;
            goto label_36f878;
        }
    }
    ctx->pc = 0x36F870u;
    // 0x36f870: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x36F870u;
    {
        const bool branch_taken_0x36f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f870) {
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F878u;
label_36f878:
    // 0x36f878: 0xc0dbe58  jal         func_36F960
    ctx->pc = 0x36F878u;
    SET_GPR_U32(ctx, 31, 0x36F880u);
    ctx->pc = 0x36F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F878u;
    // 0x36f87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F960u, 0x36F878u, 0x36F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F880u;
label_36f880:
    // 0x36f880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f884: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f888: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f88c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f890: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f898: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f89c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f8a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f8a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F8ACu;
    SET_GPR_U32(ctx, 31, 0x36F8B4u);
    ctx->pc = 0x36F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8ACu;
    // 0x36f8b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F8ACu, 0x36F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8B4u;
label_36f8b4:
    // 0x36f8b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x36F8B4u;
    {
        const bool branch_taken_0x36f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f8b4) {
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F8BCu;
    // 0x36f8bc: 0x0  nop
    ctx->pc = 0x36f8bcu;
    // NOP
label_36f8c0:
    // 0x36f8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f8c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f8c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f8cc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f8d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8d8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f8dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f8e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f8e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f8e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F8ECu;
    SET_GPR_U32(ctx, 31, 0x36F8F4u);
    ctx->pc = 0x36F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8ECu;
    // 0x36f8f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F8ECu, 0x36F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8F4u;
label_36f8f4:
    // 0x36f8f4: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x36F8F4u;
    SET_GPR_U32(ctx, 31, 0x36F8FCu);
    ctx->pc = 0x36F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8F4u;
    // 0x36f8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x36F8F4u, 0x36F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8FCu;
label_36f8fc:
    // 0x36f8fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36F8FCu;
    {
        const bool branch_taken_0x36f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f8fc) {
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F904u;
    // 0x36f904: 0x0  nop
    ctx->pc = 0x36f904u;
    // NOP
label_36f908:
    // 0x36f908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f90c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f910: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f914: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36f918: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f920: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f92c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f92cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f930: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f934: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F934u;
    SET_GPR_U32(ctx, 31, 0x36F93Cu);
    ctx->pc = 0x36F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F934u;
    // 0x36f938: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F934u, 0x36F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F93Cu;
label_36f93c:
    // 0x36f93c: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x36F93Cu;
    SET_GPR_U32(ctx, 31, 0x36F944u);
    ctx->pc = 0x36F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F93Cu;
    // 0x36f940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x36F93Cu, 0x36F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F944u;
label_36f944:
    // 0x36f944: 0x0  nop
    ctx->pc = 0x36f944u;
    // NOP
label_36f948:
    // 0x36f948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36f948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f94c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36f94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f950: 0x3e00008  jr          $ra
    ctx->pc = 0x36F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F950u;
        // 0x36f954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F958u;
}
