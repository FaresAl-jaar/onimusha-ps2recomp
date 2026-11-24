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

// Function: sub_0036AC40
// Address: 0x36ac40 - 0x36b0d0
void sub_0036AC40_0x36ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AC40_0x36ac40");
#endif

    switch (ctx->pc) {
        case 0x36acacu: goto label_36acac;
        case 0x36ace0u: goto label_36ace0;
        case 0x36ad08u: goto label_36ad08;
        case 0x36ad48u: goto label_36ad48;
        case 0x36ad50u: goto label_36ad50;
        case 0x36adb4u: goto label_36adb4;
        case 0x36adc8u: goto label_36adc8;
        case 0x36ae08u: goto label_36ae08;
        case 0x36ae18u: goto label_36ae18;
        case 0x36ae48u: goto label_36ae48;
        case 0x36ae6cu: goto label_36ae6c;
        case 0x36ae94u: goto label_36ae94;
        case 0x36aea0u: goto label_36aea0;
        case 0x36aec4u: goto label_36aec4;
        case 0x36aee0u: goto label_36aee0;
        case 0x36af04u: goto label_36af04;
        case 0x36af24u: goto label_36af24;
        case 0x36af34u: goto label_36af34;
        case 0x36af48u: goto label_36af48;
        case 0x36af5cu: goto label_36af5c;
        case 0x36af6cu: goto label_36af6c;
        case 0x36af7cu: goto label_36af7c;
        case 0x36af9cu: goto label_36af9c;
        case 0x36afb0u: goto label_36afb0;
        case 0x36afccu: goto label_36afcc;
        case 0x36aff4u: goto label_36aff4;
        case 0x36b004u: goto label_36b004;
        case 0x36b00cu: goto label_36b00c;
        case 0x36b020u: goto label_36b020;
        case 0x36b040u: goto label_36b040;
        case 0x36b054u: goto label_36b054;
        case 0x36b064u: goto label_36b064;
        case 0x36b074u: goto label_36b074;
        case 0x36b0a8u: goto label_36b0a8;
        case 0x36b0b8u: goto label_36b0b8;
        default: break;
    }

    ctx->pc = 0x36ac40u;

    // 0x36ac40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36ac44: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x36ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36ac48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36ac4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36ac50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36ac54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36ac58: 0x90850021  lbu         $a1, 0x21($a0)
    ctx->pc = 0x36ac58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x36ac5c: 0x10a30114  beq         $a1, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x36AC5Cu;
    {
        const bool branch_taken_0x36ac5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC5Cu;
        // 0x36ac60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac5c) {
            ctx->pc = 0x36B0B0u;
            goto label_36b0b0;
        }
    }
    ctx->pc = 0x36AC64u;
    // 0x36ac64: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x36ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36ac68: 0x10a300f7  beq         $a1, $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x36AC68u;
    {
        const bool branch_taken_0x36ac68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC68u;
        // 0x36ac6c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac68) {
            ctx->pc = 0x36B048u;
            goto label_36b048;
        }
    }
    ctx->pc = 0x36AC70u;
    // 0x36ac70: 0x10a300b7  beq         $a1, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x36AC70u;
    {
        const bool branch_taken_0x36ac70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ac70) {
            ctx->pc = 0x36AF50u;
            goto label_36af50;
        }
    }
    ctx->pc = 0x36AC78u;
    // 0x36ac78: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x36ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36ac7c: 0x10a300b0  beq         $a1, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x36AC7Cu;
    {
        const bool branch_taken_0x36ac7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC7Cu;
        // 0x36ac80: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac7c) {
            ctx->pc = 0x36AF40u;
            goto label_36af40;
        }
    }
    ctx->pc = 0x36AC84u;
    // 0x36ac84: 0x10a3007c  beq         $a1, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x36AC84u;
    {
        const bool branch_taken_0x36ac84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ac84) {
            ctx->pc = 0x36AE78u;
            goto label_36ae78;
        }
    }
    ctx->pc = 0x36AC8Cu;
    // 0x36ac8c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36AC8Cu;
    {
        const bool branch_taken_0x36ac8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ac8c) {
            ctx->pc = 0x36ACA0u;
            goto label_36aca0;
        }
    }
    ctx->pc = 0x36AC94u;
    // 0x36ac94: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x36AC94u;
    {
        const bool branch_taken_0x36ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ac94) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AC9Cu;
    // 0x36ac9c: 0x0  nop
    ctx->pc = 0x36ac9cu;
    // NOP
label_36aca0:
    // 0x36aca0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36aca4: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x36ACA4u;
    SET_GPR_U32(ctx, 31, 0x36ACACu);
    ctx->pc = 0x36ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACA4u;
    // 0x36aca8: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x36ACA4u, 0x36ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACACu;
label_36acac:
    // 0x36acac: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36acacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36acb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36acb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acb4: 0x8c301284  lw          $s0, 0x1284($at)
    ctx->pc = 0x36acb4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x911284u));
    // 0x36acb8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36acbc: 0x84221294  lh          $v0, 0x1294($at)
    ctx->pc = 0x36acbcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x911294u));
    // 0x36acc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36ACC0u;
    {
        const bool branch_taken_0x36acc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36acc0) {
            ctx->pc = 0x36ACE8u;
            goto label_36ace8;
        }
    }
    ctx->pc = 0x36ACC8u;
    // 0x36acc8: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36acc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36accc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36acccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36acd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36acd8: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36ACD8u;
    SET_GPR_U32(ctx, 31, 0x36ACE0u);
    ctx->pc = 0x36ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ACD8u;
    // 0x36acdc: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36ACD8u, 0x36ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ACE0u;
label_36ace0:
    // 0x36ace0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36ACE0u;
    {
        const bool branch_taken_0x36ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ace0) {
            ctx->pc = 0x36AD08u;
            goto label_36ad08;
        }
    }
    ctx->pc = 0x36ACE8u;
label_36ace8:
    // 0x36ace8: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36ace8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36acec: 0x8e4601a4  lw          $a2, 0x1A4($s2)
    ctx->pc = 0x36acecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x36acf0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36acf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36acf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36acfc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x36acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36ad00: 0xc0dc810  jal         func_372040
    ctx->pc = 0x36AD00u;
    SET_GPR_U32(ctx, 31, 0x36AD08u);
    ctx->pc = 0x36AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD00u;
    // 0x36ad04: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x36AD00u, 0x36AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD08u;
label_36ad08:
    // 0x36ad08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ad0c: 0x16240012  bne         $s1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36AD0Cu;
    {
        const bool branch_taken_0x36ad0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x36ad0c) {
            ctx->pc = 0x36AD58u;
            goto label_36ad58;
        }
    }
    ctx->pc = 0x36AD14u;
    // 0x36ad14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ad18: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ad1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ad20: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ad24: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36ad28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad2c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ad2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ad30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ad30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ad34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ad38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ad3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad40: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36AD40u;
    SET_GPR_U32(ctx, 31, 0x36AD48u);
    ctx->pc = 0x36AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD40u;
    // 0x36ad44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36AD40u, 0x36AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD48u;
label_36ad48:
    // 0x36ad48: 0xc0daa60  jal         func_36A980
    ctx->pc = 0x36AD48u;
    SET_GPR_U32(ctx, 31, 0x36AD50u);
    ctx->pc = 0x36AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD48u;
    // 0x36ad4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A980u, 0x36AD48u, 0x36AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD50u;
label_36ad50:
    // 0x36ad50: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x36AD50u;
    {
        const bool branch_taken_0x36ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ad50) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AD58u;
label_36ad58:
    // 0x36ad58: 0x120000d7  beqz        $s0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x36AD58u;
    {
        const bool branch_taken_0x36ad58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD58u;
        // 0x36ad5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad58) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AD60u;
    // 0x36ad60: 0x162300d5  bne         $s1, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x36AD60u;
    {
        const bool branch_taken_0x36ad60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x36ad60) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AD68u;
    // 0x36ad68: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x36ad68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36ad6c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x36ad6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x36ad70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36AD70u;
    {
        const bool branch_taken_0x36ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ad70) {
            ctx->pc = 0x36AD80u;
            goto label_36ad80;
        }
    }
    ctx->pc = 0x36AD78u;
    // 0x36ad78: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36AD78u;
    {
        const bool branch_taken_0x36ad78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x36ad78) {
            ctx->pc = 0x36ADD8u;
            goto label_36add8;
        }
    }
    ctx->pc = 0x36AD80u;
label_36ad80:
    // 0x36ad80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ad84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ad88: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ad8c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ad90: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ad94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad98: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ad98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ad9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ad9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ada0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ada0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ada4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ada4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ada8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ada8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36ADACu;
    SET_GPR_U32(ctx, 31, 0x36ADB4u);
    ctx->pc = 0x36ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADACu;
    // 0x36adb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36ADACu, 0x36ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADB4u;
label_36adb4:
    // 0x36adb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36adb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36adb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36adbc: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36adc0: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x36ADC0u;
    SET_GPR_U32(ctx, 31, 0x36ADC8u);
    ctx->pc = 0x36ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ADC0u;
    // 0x36adc4: 0xae42019c  sw          $v0, 0x19C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x36ADC0u, 0x36ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ADC8u;
label_36adc8:
    // 0x36adc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x36adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36adcc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x36ADCCu;
    {
        const bool branch_taken_0x36adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADCCu;
        // 0x36add0: 0xa2430021  sb          $v1, 0x21($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36adcc) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36ADD4u;
    // 0x36add4: 0x0  nop
    ctx->pc = 0x36add4u;
    // NOP
label_36add8:
    // 0x36add8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36add8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36addc: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x36addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x36ade0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36ade4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ade8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ade8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36adec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36adecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36adf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36adf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36adf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36adfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36adfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae00: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36AE00u;
    SET_GPR_U32(ctx, 31, 0x36AE08u);
    ctx->pc = 0x36AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE00u;
    // 0x36ae04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36AE00u, 0x36AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE08u;
label_36ae08:
    // 0x36ae08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36ae0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae10: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x36AE10u;
    SET_GPR_U32(ctx, 31, 0x36AE18u);
    ctx->pc = 0x36AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE10u;
    // 0x36ae14: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x36AE10u, 0x36AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE18u;
label_36ae18:
    // 0x36ae18: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x36ae18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36ae1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36ae20: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x36ae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x36ae24: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36AE24u;
    {
        const bool branch_taken_0x36ae24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36ae24) {
            ctx->pc = 0x36AE50u;
            goto label_36ae50;
        }
    }
    ctx->pc = 0x36AE2Cu;
    // 0x36ae2c: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36ae2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36ae30: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36ae34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ae3c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x36ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x36ae40: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36AE40u;
    SET_GPR_U32(ctx, 31, 0x36AE48u);
    ctx->pc = 0x36AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE40u;
    // 0x36ae44: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36AE40u, 0x36AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE48u;
label_36ae48:
    // 0x36ae48: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x36AE48u;
    {
        const bool branch_taken_0x36ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ae48) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AE50u;
label_36ae50:
    // 0x36ae50: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36ae50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36ae54: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36ae58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ae60: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x36ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x36ae64: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36AE64u;
    SET_GPR_U32(ctx, 31, 0x36AE6Cu);
    ctx->pc = 0x36AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE64u;
    // 0x36ae68: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36AE64u, 0x36AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE6Cu;
label_36ae6c:
    // 0x36ae6c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x36AE6Cu;
    {
        const bool branch_taken_0x36ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ae6c) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AE74u;
    // 0x36ae74: 0x0  nop
    ctx->pc = 0x36ae74u;
    // NOP
label_36ae78:
    // 0x36ae78: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36ae7c: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x36ae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ae80: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x36ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x36ae84: 0x8e42019c  lw          $v0, 0x19C($s2)
    ctx->pc = 0x36ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    // 0x36ae88: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x36ae88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36ae8c: 0xc0da9a0  jal         func_36A680
    ctx->pc = 0x36AE8Cu;
    SET_GPR_U32(ctx, 31, 0x36AE94u);
    ctx->pc = 0x36AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE8Cu;
    // 0x36ae90: 0x94640004  lhu         $a0, 0x4($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A680u, 0x36AE8Cu, 0x36AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE94u;
label_36ae94:
    // 0x36ae94: 0xa64201a0  sh          $v0, 0x1A0($s2)
    ctx->pc = 0x36ae94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 416), (uint16_t)GPR_U32(ctx, 2));
    // 0x36ae98: 0xc0dac34  jal         func_36B0D0
    ctx->pc = 0x36AE98u;
    SET_GPR_U32(ctx, 31, 0x36AEA0u);
    ctx->pc = 0x36AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE98u;
    // 0x36ae9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B0D0u, 0x36AE98u, 0x36AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEA0u;
label_36aea0:
    // 0x36aea0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x36AEA0u;
    {
        const bool branch_taken_0x36aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36aea0) {
            ctx->pc = 0x36AEE8u;
            goto label_36aee8;
        }
    }
    ctx->pc = 0x36AEA8u;
    // 0x36aea8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x36aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36aeac: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36aeb0: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x36aeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36aeb4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36aeb8: 0x964501a0  lhu         $a1, 0x1A0($s2)
    ctx->pc = 0x36aeb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x36aebc: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x36AEBCu;
    SET_GPR_U32(ctx, 31, 0x36AEC4u);
    ctx->pc = 0x36AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEBCu;
    // 0x36aec0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x36AEBCu, 0x36AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEC4u;
label_36aec4:
    // 0x36aec4: 0x92450194  lbu         $a1, 0x194($s2)
    ctx->pc = 0x36aec4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36aec8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36aec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aecc: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x36aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x36aed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aed4: 0x24a2000b  addiu       $v0, $a1, 0xB
    ctx->pc = 0x36aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x36aed8: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36AED8u;
    SET_GPR_U32(ctx, 31, 0x36AEE0u);
    ctx->pc = 0x36AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AED8u;
    // 0x36aedc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36AED8u, 0x36AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEE0u;
label_36aee0:
    // 0x36aee0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x36AEE0u;
    {
        const bool branch_taken_0x36aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aee0) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AEE8u;
label_36aee8:
    // 0x36aee8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x36aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36aeec: 0xa2420021  sb          $v0, 0x21($s2)
    ctx->pc = 0x36aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x36aef0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36aef4: 0x964501a0  lhu         $a1, 0x1A0($s2)
    ctx->pc = 0x36aef4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x36aef8: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36aefc: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x36AEFCu;
    SET_GPR_U32(ctx, 31, 0x36AF04u);
    ctx->pc = 0x36AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEFCu;
    // 0x36af00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x36AEFCu, 0x36AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF04u;
label_36af04:
    // 0x36af04: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36af04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36af08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36af08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af0c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36af10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36af14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af18: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x36af1c: 0xc0dc810  jal         func_372040
    ctx->pc = 0x36AF1Cu;
    SET_GPR_U32(ctx, 31, 0x36AF24u);
    ctx->pc = 0x36AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF1Cu;
    // 0x36af20: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x36AF1Cu, 0x36AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF24u;
label_36af24:
    // 0x36af24: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36af24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36af28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36af28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36af2c: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x36AF2Cu;
    SET_GPR_U32(ctx, 31, 0x36AF34u);
    ctx->pc = 0x36AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF2Cu;
    // 0x36af30: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x36AF2Cu, 0x36AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF34u;
label_36af34:
    // 0x36af34: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x36AF34u;
    {
        const bool branch_taken_0x36af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af34) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AF3Cu;
    // 0x36af3c: 0x0  nop
    ctx->pc = 0x36af3cu;
    // NOP
label_36af40:
    // 0x36af40: 0xc0daafc  jal         func_36ABF0
    ctx->pc = 0x36AF40u;
    SET_GPR_U32(ctx, 31, 0x36AF48u);
    ctx->pc = 0x36ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABF0u, 0x36AF40u, 0x36AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF48u;
label_36af48:
    // 0x36af48: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x36AF48u;
    {
        const bool branch_taken_0x36af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af48) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AF50u;
label_36af50:
    // 0x36af50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36af54: 0xc095150  jal         func_254540
    ctx->pc = 0x36AF54u;
    SET_GPR_U32(ctx, 31, 0x36AF5Cu);
    ctx->pc = 0x36AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF54u;
    // 0x36af58: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36AF54u, 0x36AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF5Cu;
label_36af5c:
    // 0x36af5c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x36AF5Cu;
    {
        const bool branch_taken_0x36af5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF5Cu;
        // 0x36af60: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af5c) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AF64u;
    // 0x36af64: 0xc095154  jal         func_254550
    ctx->pc = 0x36AF64u;
    SET_GPR_U32(ctx, 31, 0x36AF6Cu);
    ctx->pc = 0x36AF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF64u;
    // 0x36af68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36AF64u, 0x36AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF6Cu;
label_36af6c:
    // 0x36af6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36AF6Cu;
    {
        const bool branch_taken_0x36af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF6Cu;
        // 0x36af70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af6c) {
            ctx->pc = 0x36AF88u;
            goto label_36af88;
        }
    }
    ctx->pc = 0x36AF74u;
    // 0x36af74: 0xc0daafc  jal         func_36ABF0
    ctx->pc = 0x36AF74u;
    SET_GPR_U32(ctx, 31, 0x36AF7Cu);
    ctx->pc = 0x36ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABF0u, 0x36AF74u, 0x36AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF7Cu;
label_36af7c:
    // 0x36af7c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x36AF7Cu;
    {
        const bool branch_taken_0x36af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af7c) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36AF84u;
    // 0x36af84: 0x0  nop
    ctx->pc = 0x36af84u;
    // NOP
label_36af88:
    // 0x36af88: 0x8e450198  lw          $a1, 0x198($s2)
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x36af8c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36af90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36af90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36af94: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x36AF94u;
    SET_GPR_U32(ctx, 31, 0x36AF9Cu);
    ctx->pc = 0x36AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF94u;
    // 0x36af98: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x36AF94u, 0x36AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF9Cu;
label_36af9c:
    // 0x36af9c: 0x8e45019c  lw          $a1, 0x19C($s2)
    ctx->pc = 0x36af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    // 0x36afa0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36afa4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36afa8: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x36AFA8u;
    SET_GPR_U32(ctx, 31, 0x36AFB0u);
    ctx->pc = 0x36AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFA8u;
    // 0x36afac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x36AFA8u, 0x36AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFB0u;
label_36afb0:
    // 0x36afb0: 0x964501a0  lhu         $a1, 0x1A0($s2)
    ctx->pc = 0x36afb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x36afb4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36afb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36afbc: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36afc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36afc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afc4: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x36AFC4u;
    SET_GPR_U32(ctx, 31, 0x36AFCCu);
    ctx->pc = 0x36AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFC4u;
    // 0x36afc8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x36AFC4u, 0x36AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFCCu;
label_36afcc:
    // 0x36afcc: 0x92430021  lbu         $v1, 0x21($s2)
    ctx->pc = 0x36afccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x36afd0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36afd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36afd8: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x36afdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36afe0: 0xa2430021  sb          $v1, 0x21($s2)
    ctx->pc = 0x36afe0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x36afe4: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x36afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    // 0x36afe8: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x36afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
    // 0x36afec: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x36AFECu;
    SET_GPR_U32(ctx, 31, 0x36AFF4u);
    ctx->pc = 0x36AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFECu;
    // 0x36aff0: 0xae4201a4  sw          $v0, 0x1A4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x36AFECu, 0x36AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFF4u;
label_36aff4:
    // 0x36aff4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36aff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36affc: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x36AFFCu;
    SET_GPR_U32(ctx, 31, 0x36B004u);
    ctx->pc = 0x36B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFFCu;
    // 0x36b000: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x36AFFCu, 0x36B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B004u;
label_36b004:
    // 0x36b004: 0xc0da9ec  jal         func_36A7B0
    ctx->pc = 0x36B004u;
    SET_GPR_U32(ctx, 31, 0x36B00Cu);
    ctx->pc = 0x36B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B004u;
    // 0x36b008: 0x924401bd  lbu         $a0, 0x1BD($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 445)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A7B0u, 0x36B004u, 0x36B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B00Cu;
label_36b00c:
    // 0x36b00c: 0x964501a0  lhu         $a1, 0x1A0($s2)
    ctx->pc = 0x36b00cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x36b010: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36b010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36b014: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36b018: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x36B018u;
    SET_GPR_U32(ctx, 31, 0x36B020u);
    ctx->pc = 0x36B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B018u;
    // 0x36b01c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x36B018u, 0x36B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B020u;
label_36b020:
    // 0x36b020: 0x92450194  lbu         $a1, 0x194($s2)
    ctx->pc = 0x36b020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36b024: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36b024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b028: 0x3c030103  lui         $v1, 0x103
    ctx->pc = 0x36b028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)259 << 16));
    // 0x36b02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36b030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b034: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x36b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x36b038: 0xc0dc810  jal         func_372040
    ctx->pc = 0x36B038u;
    SET_GPR_U32(ctx, 31, 0x36B040u);
    ctx->pc = 0x36B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B038u;
    // 0x36b03c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x36B038u, 0x36B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B040u;
label_36b040:
    // 0x36b040: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x36B040u;
    {
        const bool branch_taken_0x36b040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b040) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36B048u;
label_36b048:
    // 0x36b048: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36b048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36b04c: 0xc095150  jal         func_254540
    ctx->pc = 0x36B04Cu;
    SET_GPR_U32(ctx, 31, 0x36B054u);
    ctx->pc = 0x36B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B04Cu;
    // 0x36b050: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36B04Cu, 0x36B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B054u;
label_36b054:
    // 0x36b054: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36B054u;
    {
        const bool branch_taken_0x36b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b054) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36B05Cu;
    // 0x36b05c: 0xc0da9fc  jal         func_36A7F0
    ctx->pc = 0x36B05Cu;
    SET_GPR_U32(ctx, 31, 0x36B064u);
    ctx->pc = 0x36B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B05Cu;
    // 0x36b060: 0x924401bd  lbu         $a0, 0x1BD($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 445)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A7F0u, 0x36B05Cu, 0x36B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B064u;
label_36b064:
    // 0x36b064: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B064u;
    {
        const bool branch_taken_0x36b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B064u;
        // 0x36b068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b064) {
            ctx->pc = 0x36B080u;
            goto label_36b080;
        }
    }
    ctx->pc = 0x36B06Cu;
    // 0x36b06c: 0xc0daa60  jal         func_36A980
    ctx->pc = 0x36B06Cu;
    SET_GPR_U32(ctx, 31, 0x36B074u);
    ctx->pc = 0x36A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A980u, 0x36B06Cu, 0x36B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B074u;
label_36b074:
    // 0x36b074: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36B074u;
    {
        const bool branch_taken_0x36b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b074) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36B07Cu;
    // 0x36b07c: 0x0  nop
    ctx->pc = 0x36b07cu;
    // NOP
label_36b080:
    // 0x36b080: 0x92430021  lbu         $v1, 0x21($s2)
    ctx->pc = 0x36b080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
    // 0x36b084: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36b088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b08c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36b090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36b094: 0xa2430021  sb          $v1, 0x21($s2)
    ctx->pc = 0x36b094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x36b098: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36b098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36b09c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36b0a0: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36B0A0u;
    SET_GPR_U32(ctx, 31, 0x36B0A8u);
    ctx->pc = 0x36B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B0A0u;
    // 0x36b0a4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36B0A0u, 0x36B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0A8u;
label_36b0a8:
    // 0x36b0a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36B0A8u;
    {
        const bool branch_taken_0x36b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b0a8) {
            ctx->pc = 0x36B0B8u;
            goto label_36b0b8;
        }
    }
    ctx->pc = 0x36B0B0u;
label_36b0b0:
    // 0x36b0b0: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36B0B0u;
    SET_GPR_U32(ctx, 31, 0x36B0B8u);
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36B0B0u, 0x36B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B0B8u;
label_36b0b8:
    // 0x36b0b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36b0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b0bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36b0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b0c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36b0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b0c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36b0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36B0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0C8u;
        // 0x36b0cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B0D0u;
}
