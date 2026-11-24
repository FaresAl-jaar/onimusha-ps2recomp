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

// Function: sub_0030ADE0
// Address: 0x30ade0 - 0x30b560
void sub_0030ADE0_0x30ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ADE0_0x30ade0");
#endif

    switch (ctx->pc) {
        case 0x30ae04u: goto label_30ae04;
        case 0x30ae14u: goto label_30ae14;
        case 0x30ae2cu: goto label_30ae2c;
        case 0x30ae44u: goto label_30ae44;
        case 0x30af28u: goto label_30af28;
        case 0x30af5cu: goto label_30af5c;
        case 0x30af78u: goto label_30af78;
        case 0x30afa0u: goto label_30afa0;
        case 0x30afbcu: goto label_30afbc;
        case 0x30afd8u: goto label_30afd8;
        case 0x30b070u: goto label_30b070;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0d8u: goto label_30b0d8;
        case 0x30b114u: goto label_30b114;
        case 0x30b12cu: goto label_30b12c;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b1b4u: goto label_30b1b4;
        case 0x30b1c4u: goto label_30b1c4;
        case 0x30b204u: goto label_30b204;
        case 0x30b22cu: goto label_30b22c;
        case 0x30b23cu: goto label_30b23c;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b2a4u: goto label_30b2a4;
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b300u: goto label_30b300;
        case 0x30b35cu: goto label_30b35c;
        case 0x30b370u: goto label_30b370;
        case 0x30b378u: goto label_30b378;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b3a4u: goto label_30b3a4;
        case 0x30b468u: goto label_30b468;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b500u: goto label_30b500;
        default: break;
    }

    ctx->pc = 0x30ade0u;

    // 0x30ade0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30ade4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30ade8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30adec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30adf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30adf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30adf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30adf8: 0x94850014  lhu         $a1, 0x14($a0)
    ctx->pc = 0x30adf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30adfc: 0xc0bd200  jal         func_2F4800
    ctx->pc = 0x30ADFCu;
    SET_GPR_U32(ctx, 31, 0x30AE04u);
    ctx->pc = 0x30AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADFCu;
    // 0x30ae00: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4800u, 0x30ADFCu, 0x30AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE04u;
label_30ae04:
    // 0x30ae04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30AE04u;
    {
        const bool branch_taken_0x30ae04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae04) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30AE0Cu;
    // 0x30ae0c: 0xc09c84c  jal         func_272130
    ctx->pc = 0x30AE0Cu;
    SET_GPR_U32(ctx, 31, 0x30AE14u);
    ctx->pc = 0x30AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE0Cu;
    // 0x30ae10: 0x96240004  lhu         $a0, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272130u, 0x30AE0Cu, 0x30AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE14u;
label_30ae14:
    // 0x30ae14: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x30ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x30ae18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30ae18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae1c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x30ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x30ae20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ae24: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x30AE24u;
    SET_GPR_U32(ctx, 31, 0x30AE2Cu);
    ctx->pc = 0x30AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE24u;
    // 0x30ae28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x30AE24u, 0x30AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE2Cu;
label_30ae2c:
    // 0x30ae2c: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x30ae2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ae30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae34: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x30ae34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30ae38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30ae38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ae3c: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x30AE3Cu;
    SET_GPR_U32(ctx, 31, 0x30AE44u);
    ctx->pc = 0x30AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE3Cu;
    // 0x30ae40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x30AE3Cu, 0x30AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE44u;
label_30ae44:
    // 0x30ae44: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x30AE44u;
    {
        const bool branch_taken_0x30ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE44u;
        // 0x30ae48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae44) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30AE4Cu;
    // 0x30ae4c: 0x0  nop
    ctx->pc = 0x30ae4cu;
    // NOP
label_30ae50:
    // 0x30ae50: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x30ae50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30ae54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x30ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x30ae58: 0x1082018d  beq         $a0, $v0, . + 4 + (0x18D << 2)
    ctx->pc = 0x30AE58u;
    {
        const bool branch_taken_0x30ae58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE58u;
        // 0x30ae5c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae58) {
            ctx->pc = 0x30B490u;
            goto label_30b490;
        }
    }
    ctx->pc = 0x30AE60u;
    // 0x30ae60: 0x10820155  beq         $a0, $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x30AE60u;
    {
        const bool branch_taken_0x30ae60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ae60) {
            ctx->pc = 0x30B3B8u;
            goto label_30b3b8;
        }
    }
    ctx->pc = 0x30AE68u;
    // 0x30ae68: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x30ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x30ae6c: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x30AE6Cu;
    {
        const bool branch_taken_0x30ae6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE6Cu;
        // 0x30ae70: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae6c) {
            ctx->pc = 0x30B350u;
            goto label_30b350;
        }
    }
    ctx->pc = 0x30AE74u;
    // 0x30ae74: 0x10820122  beq         $a0, $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x30AE74u;
    {
        const bool branch_taken_0x30ae74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ae74) {
            ctx->pc = 0x30B300u;
            goto label_30b300;
        }
    }
    ctx->pc = 0x30AE7Cu;
    // 0x30ae7c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30ae80: 0x1082010d  beq         $a0, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x30AE80u;
    {
        const bool branch_taken_0x30ae80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE80u;
        // 0x30ae84: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae80) {
            ctx->pc = 0x30B2B8u;
            goto label_30b2b8;
        }
    }
    ctx->pc = 0x30AE88u;
    // 0x30ae88: 0x10820103  beq         $a0, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x30AE88u;
    {
        const bool branch_taken_0x30ae88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30ae88) {
            ctx->pc = 0x30B298u;
            goto label_30b298;
        }
    }
    ctx->pc = 0x30AE90u;
    // 0x30ae90: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x30ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30ae94: 0x108200e2  beq         $a0, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x30AE94u;
    {
        const bool branch_taken_0x30ae94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE94u;
        // 0x30ae98: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae94) {
            ctx->pc = 0x30B220u;
            goto label_30b220;
        }
    }
    ctx->pc = 0x30AE9Cu;
    // 0x30ae9c: 0x108300c2  beq         $a0, $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x30AE9Cu;
    {
        const bool branch_taken_0x30ae9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE9Cu;
        // 0x30aea0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae9c) {
            ctx->pc = 0x30B1A8u;
            goto label_30b1a8;
        }
    }
    ctx->pc = 0x30AEA4u;
    // 0x30aea4: 0x108200b4  beq         $a0, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x30AEA4u;
    {
        const bool branch_taken_0x30aea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30aea4) {
            ctx->pc = 0x30B178u;
            goto label_30b178;
        }
    }
    ctx->pc = 0x30AEACu;
    // 0x30aeac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30aeb0: 0x1082009b  beq         $a0, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x30AEB0u;
    {
        const bool branch_taken_0x30aeb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEB0u;
        // 0x30aeb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aeb0) {
            ctx->pc = 0x30B120u;
            goto label_30b120;
        }
    }
    ctx->pc = 0x30AEB8u;
    // 0x30aeb8: 0x10820067  beq         $a0, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x30AEB8u;
    {
        const bool branch_taken_0x30aeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30aeb8) {
            ctx->pc = 0x30B058u;
            goto label_30b058;
        }
    }
    ctx->pc = 0x30AEC0u;
    // 0x30aec0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30aec4: 0x10820056  beq         $a0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x30AEC4u;
    {
        const bool branch_taken_0x30aec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEC4u;
        // 0x30aec8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aec4) {
            ctx->pc = 0x30B020u;
            goto label_30b020;
        }
    }
    ctx->pc = 0x30AECCu;
    // 0x30aecc: 0x10820040  beq         $a0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x30AECCu;
    {
        const bool branch_taken_0x30aecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30aecc) {
            ctx->pc = 0x30AFD0u;
            goto label_30afd0;
        }
    }
    ctx->pc = 0x30AED4u;
    // 0x30aed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30aed8: 0x10820035  beq         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30AED8u;
    {
        const bool branch_taken_0x30aed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x30aed8) {
            ctx->pc = 0x30AFB0u;
            goto label_30afb0;
        }
    }
    ctx->pc = 0x30AEE0u;
    // 0x30aee0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AEE0u;
    {
        const bool branch_taken_0x30aee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30aee0) {
            ctx->pc = 0x30AEF0u;
            goto label_30aef0;
        }
    }
    ctx->pc = 0x30AEE8u;
    // 0x30aee8: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x30AEE8u;
    {
        const bool branch_taken_0x30aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30aee8) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30AEF0u;
label_30aef0:
    // 0x30aef0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30aef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30aef4: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x30aef8: 0x3c058ff2  lui         $a1, 0x8FF2
    ctx->pc = 0x30aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36850 << 16));
    // 0x30aefc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x30aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x30af00: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x30af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x30af04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30af08: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30af0c: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x30af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x30af10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30af10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30af14: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30af18: 0xac23cedc  sw          $v1, -0x3124($at)
    ctx->pc = 0x30af18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x30af1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30af1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30af20: 0xc0ceaf0  jal         func_33ABC0
    ctx->pc = 0x30AF20u;
    SET_GPR_U32(ctx, 31, 0x30AF28u);
    ctx->pc = 0x30AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF20u;
    // 0x30af24: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABC0u, 0x30AF20u, 0x30AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF28u;
label_30af28:
    // 0x30af28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30af2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30af30: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x30af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30af34: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30af38: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30af38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30af3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30af3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af40: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30af40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30af44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30af44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30af48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30af4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30af50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30AF54u;
    SET_GPR_U32(ctx, 31, 0x30AF5Cu);
    ctx->pc = 0x30AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF54u;
    // 0x30af58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30AF54u, 0x30AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF5Cu;
label_30af5c:
    // 0x30af5c: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x30af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x30af60: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x30af60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30af64: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x30af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x30af68: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30af68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30af6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30af70: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x30AF70u;
    SET_GPR_U32(ctx, 31, 0x30AF78u);
    ctx->pc = 0x30AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF70u;
    // 0x30af74: 0xa7808ae4  sh          $zero, -0x751C($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937316), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x30AF70u, 0x30AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF78u;
label_30af78:
    // 0x30af78: 0xaf828aec  sw          $v0, -0x7514($gp)
    ctx->pc = 0x30af78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 2));
    // 0x30af7c: 0x8f828aec  lw          $v0, -0x7514($gp)
    ctx->pc = 0x30af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x30af80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AF80u;
    {
        const bool branch_taken_0x30af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af80) {
            ctx->pc = 0x30AF98u;
            goto label_30af98;
        }
    }
    ctx->pc = 0x30AF88u;
    // 0x30af88: 0xa0400068  sb          $zero, 0x68($v0)
    ctx->pc = 0x30af88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x30af8c: 0x8f828aec  lw          $v0, -0x7514($gp)
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x30af90: 0xa0400069  sb          $zero, 0x69($v0)
    ctx->pc = 0x30af90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x30af94: 0x0  nop
    ctx->pc = 0x30af94u;
    // NOP
label_30af98:
    // 0x30af98: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x30AF98u;
    SET_GPR_U32(ctx, 31, 0x30AFA0u);
    ctx->pc = 0x30AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF98u;
    // 0x30af9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x30AF98u, 0x30AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFA0u;
label_30afa0:
    // 0x30afa0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30afa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30afa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30afa8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x30AFA8u;
    {
        const bool branch_taken_0x30afa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFA8u;
        // 0x30afac: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afa8) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30AFB0u;
label_30afb0:
    // 0x30afb0: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x30afb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30afb4: 0xc0c2e98  jal         func_30BA60
    ctx->pc = 0x30AFB4u;
    SET_GPR_U32(ctx, 31, 0x30AFBCu);
    ctx->pc = 0x30AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFB4u;
    // 0x30afb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA60u, 0x30AFB4u, 0x30AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFBCu;
label_30afbc:
    // 0x30afbc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30afbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30afc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30afc4: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x30AFC4u;
    {
        const bool branch_taken_0x30afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFC4u;
        // 0x30afc8: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afc4) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30AFCCu;
    // 0x30afcc: 0x0  nop
    ctx->pc = 0x30afccu;
    // NOP
label_30afd0:
    // 0x30afd0: 0xc0c2ea4  jal         func_30BA90
    ctx->pc = 0x30AFD0u;
    SET_GPR_U32(ctx, 31, 0x30AFD8u);
    ctx->pc = 0x30AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AFD0u;
    // 0x30afd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA90u, 0x30AFD0u, 0x30AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFD8u;
label_30afd8:
    // 0x30afd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AFD8u;
    {
        const bool branch_taken_0x30afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30afd8) {
            ctx->pc = 0x30AFF8u;
            goto label_30aff8;
        }
    }
    ctx->pc = 0x30AFE0u;
    // 0x30afe0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x30afe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30afe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30afe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30afec: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x30afecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30aff0: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x30aff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x30aff4: 0xa7808ae8  sh          $zero, -0x7518($gp)
    ctx->pc = 0x30aff4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937320), (uint16_t)GPR_U32(ctx, 0));
label_30aff8:
    // 0x30aff8: 0x87838ae4  lh          $v1, -0x751C($gp)
    ctx->pc = 0x30aff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937316)));
    // 0x30affc: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x30affcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30b000: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B000u;
    {
        const bool branch_taken_0x30b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B000u;
        // 0x30b004: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b000) {
            ctx->pc = 0x30B010u;
            goto label_30b010;
        }
    }
    ctx->pc = 0x30B008u;
    // 0x30b008: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x30B008u;
    {
        const bool branch_taken_0x30b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B008u;
        // 0x30b00c: 0xa7828ae4  sh          $v0, -0x751C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937316), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b008) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B010u;
label_30b010:
    // 0x30b010: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x30b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30b014: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x30B014u;
    {
        const bool branch_taken_0x30b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B014u;
        // 0x30b018: 0xa7828ae4  sh          $v0, -0x751C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937316), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b014) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B01Cu;
    // 0x30b01c: 0x0  nop
    ctx->pc = 0x30b01cu;
    // NOP
label_30b020:
    // 0x30b020: 0x87838ae8  lh          $v1, -0x7518($gp)
    ctx->pc = 0x30b020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x30b024: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x30b024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30b028: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B028u;
    {
        const bool branch_taken_0x30b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B028u;
        // 0x30b02c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b028) {
            ctx->pc = 0x30B048u;
            goto label_30b048;
        }
    }
    ctx->pc = 0x30B030u;
    // 0x30b030: 0xa7828ae8  sh          $v0, -0x7518($gp)
    ctx->pc = 0x30b030u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b034: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30b034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b03c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x30B03Cu;
    {
        const bool branch_taken_0x30b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B03Cu;
        // 0x30b040: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b03c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B044u;
    // 0x30b044: 0x0  nop
    ctx->pc = 0x30b044u;
    // NOP
label_30b048:
    // 0x30b048: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x30b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30b04c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x30B04Cu;
    {
        const bool branch_taken_0x30b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B04Cu;
        // 0x30b050: 0xa7828ae8  sh          $v0, -0x7518($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b04c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B054u;
    // 0x30b054: 0x0  nop
    ctx->pc = 0x30b054u;
    // NOP
label_30b058:
    // 0x30b058: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x30b058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b05c: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x30b05cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30b060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b064: 0x92270007  lbu         $a3, 0x7($s1)
    ctx->pc = 0x30b064u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x30b068: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x30B068u;
    SET_GPR_U32(ctx, 31, 0x30B070u);
    ctx->pc = 0x30B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B068u;
    // 0x30b06c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x30B068u, 0x30B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B070u;
label_30b070:
    // 0x30b070: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x30b070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x30b074: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30b078: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B078u;
    {
        const bool branch_taken_0x30b078 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x30b078) {
            ctx->pc = 0x30B090u;
            goto label_30b090;
        }
    }
    ctx->pc = 0x30B080u;
    // 0x30b080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b084: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x30b084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x30b088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30B088u;
    {
        const bool branch_taken_0x30b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B088u;
        // 0x30b08c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b088) {
            ctx->pc = 0x30B0A0u;
            goto label_30b0a0;
        }
    }
    ctx->pc = 0x30B090u;
label_30b090:
    // 0x30b090: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b094: 0x24100022  addiu       $s0, $zero, 0x22
    ctx->pc = 0x30b094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x30b098: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x30b098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b09c: 0x0  nop
    ctx->pc = 0x30b09cu;
    // NOP
label_30b0a0:
    // 0x30b0a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b0a8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b0ac: 0xc095130  jal         func_2544C0
    ctx->pc = 0x30B0ACu;
    SET_GPR_U32(ctx, 31, 0x30B0B4u);
    ctx->pc = 0x30B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0ACu;
    // 0x30b0b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x30B0ACu, 0x30B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0B4u;
label_30b0b4:
    // 0x30b0b4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x30b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30b0b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30b0bc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b0c0: 0x2022825  or          $a1, $s0, $v0
    ctx->pc = 0x30b0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x30b0c4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b0c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0d0: 0xc09565c  jal         func_255970
    ctx->pc = 0x30B0D0u;
    SET_GPR_U32(ctx, 31, 0x30B0D8u);
    ctx->pc = 0x30B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B0D0u;
    // 0x30b0d4: 0x26490030  addiu       $t1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x30B0D0u, 0x30B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0D8u;
label_30b0d8:
    // 0x30b0d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30b0dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30b0e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b0e4: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x30b0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30b0e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x30b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30b0ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30b0f0: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x30b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x30b0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b0f8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30b0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30b0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b100: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b108: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30b108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b10c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30B10Cu;
    SET_GPR_U32(ctx, 31, 0x30B114u);
    ctx->pc = 0x30B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B10Cu;
    // 0x30b110: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30B10Cu, 0x30B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B114u;
label_30b114:
    // 0x30b114: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x30B114u;
    {
        const bool branch_taken_0x30b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b114) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B11Cu;
    // 0x30b11c: 0x0  nop
    ctx->pc = 0x30b11cu;
    // NOP
label_30b120:
    // 0x30b120: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b124: 0xc095150  jal         func_254540
    ctx->pc = 0x30B124u;
    SET_GPR_U32(ctx, 31, 0x30B12Cu);
    ctx->pc = 0x30B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B124u;
    // 0x30b128: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x30B124u, 0x30B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B12Cu;
label_30b12c:
    // 0x30b12c: 0x144000e2  bnez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x30B12Cu;
    {
        const bool branch_taken_0x30b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b12c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B134u;
    // 0x30b134: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x30b134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30B138u;
    {
        const bool branch_taken_0x30b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b138) {
            ctx->pc = 0x30B168u;
            goto label_30b168;
        }
    }
    ctx->pc = 0x30B140u;
    // 0x30b140: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x30b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30b144: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x30b148: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B148u;
    {
        const bool branch_taken_0x30b148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b148) {
            ctx->pc = 0x30B160u;
            goto label_30b160;
        }
    }
    ctx->pc = 0x30B150u;
    // 0x30b150: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30b150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b158: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x30B158u;
    {
        const bool branch_taken_0x30b158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B158u;
        // 0x30b15c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b158) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B160u;
label_30b160:
    // 0x30b160: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x30b160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b164: 0x0  nop
    ctx->pc = 0x30b164u;
    // NOP
label_30b168:
    // 0x30b168: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b16c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x30B16Cu;
    {
        const bool branch_taken_0x30b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B16Cu;
        // 0x30b170: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b16c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B174u;
    // 0x30b174: 0x0  nop
    ctx->pc = 0x30b174u;
    // NOP
label_30b178:
    // 0x30b178: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x30b178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30b17c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x30b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30b180: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b184: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30b188: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b18c: 0x34450023  ori         $a1, $v0, 0x23
    ctx->pc = 0x30b18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
    // 0x30b190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b194: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b198: 0xc09565c  jal         func_255970
    ctx->pc = 0x30B198u;
    SET_GPR_U32(ctx, 31, 0x30B1A0u);
    ctx->pc = 0x30B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B198u;
    // 0x30b19c: 0x26490030  addiu       $t1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x30B198u, 0x30B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1A0u;
label_30b1a0:
    // 0x30b1a0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x30B1A0u;
    {
        const bool branch_taken_0x30b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b1a0) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B1A8u;
label_30b1a8:
    // 0x30b1a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b1ac: 0xc095150  jal         func_254540
    ctx->pc = 0x30B1ACu;
    SET_GPR_U32(ctx, 31, 0x30B1B4u);
    ctx->pc = 0x30B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1ACu;
    // 0x30b1b0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x30B1ACu, 0x30B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1B4u;
label_30b1b4:
    // 0x30b1b4: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x30B1B4u;
    {
        const bool branch_taken_0x30b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1B4u;
        // 0x30b1b8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1b4) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B1BCu;
    // 0x30b1bc: 0xc095154  jal         func_254550
    ctx->pc = 0x30B1BCu;
    SET_GPR_U32(ctx, 31, 0x30B1C4u);
    ctx->pc = 0x30B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1BCu;
    // 0x30b1c0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x30B1BCu, 0x30B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1C4u;
label_30b1c4:
    // 0x30b1c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x30b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x30b1c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x30b1c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x30b1cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30B1CCu;
    {
        const bool branch_taken_0x30b1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b1cc) {
            ctx->pc = 0x30B210u;
            goto label_30b210;
        }
    }
    ctx->pc = 0x30B1D4u;
    // 0x30b1d4: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x30b1d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b1d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30b1dc: 0x34450024  ori         $a1, $v0, 0x24
    ctx->pc = 0x30b1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
    // 0x30b1e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b1e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b1e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b1ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30b1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b1f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b1f4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x30b1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b1f8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x30b1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30b1fc: 0xc09565c  jal         func_255970
    ctx->pc = 0x30B1FCu;
    SET_GPR_U32(ctx, 31, 0x30B204u);
    ctx->pc = 0x30B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1FCu;
    // 0x30b200: 0x26490030  addiu       $t1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x30B1FCu, 0x30B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B204u;
label_30b204:
    // 0x30b204: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x30B204u;
    {
        const bool branch_taken_0x30b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b204) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B20Cu;
    // 0x30b20c: 0x0  nop
    ctx->pc = 0x30b20cu;
    // NOP
label_30b210:
    // 0x30b210: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b214: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x30B214u;
    {
        const bool branch_taken_0x30b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B214u;
        // 0x30b218: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b214) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B21Cu;
    // 0x30b21c: 0x0  nop
    ctx->pc = 0x30b21cu;
    // NOP
label_30b220:
    // 0x30b220: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b224: 0xc095150  jal         func_254540
    ctx->pc = 0x30B224u;
    SET_GPR_U32(ctx, 31, 0x30B22Cu);
    ctx->pc = 0x30B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B224u;
    // 0x30b228: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x30B224u, 0x30B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B22Cu;
label_30b22c:
    // 0x30b22c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x30B22Cu;
    {
        const bool branch_taken_0x30b22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B22Cu;
        // 0x30b230: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b22c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B234u;
    // 0x30b234: 0xc095154  jal         func_254550
    ctx->pc = 0x30B234u;
    SET_GPR_U32(ctx, 31, 0x30B23Cu);
    ctx->pc = 0x30B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B234u;
    // 0x30b238: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x30B234u, 0x30B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B23Cu;
label_30b23c:
    // 0x30b23c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x30b23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x30b240: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x30b240u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x30b244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B244u;
    {
        const bool branch_taken_0x30b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b244) {
            ctx->pc = 0x30B258u;
            goto label_30b258;
        }
    }
    ctx->pc = 0x30B24Cu;
    // 0x30b24c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30b250: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x30B250u;
    {
        const bool branch_taken_0x30b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B250u;
        // 0x30b254: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b250) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B258u;
label_30b258:
    // 0x30b258: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x30b258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b25c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30b260: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b264: 0x34450025  ori         $a1, $v0, 0x25
    ctx->pc = 0x30b264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
    // 0x30b268: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b26c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b274: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b278: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x30b278u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b27c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x30b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b280: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x30b280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30b284: 0xc09565c  jal         func_255970
    ctx->pc = 0x30B284u;
    SET_GPR_U32(ctx, 31, 0x30B28Cu);
    ctx->pc = 0x30B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B284u;
    // 0x30b288: 0x26490030  addiu       $t1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x30B284u, 0x30B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B28Cu;
label_30b28c:
    // 0x30b28c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x30B28Cu;
    {
        const bool branch_taken_0x30b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b28c) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B294u;
    // 0x30b294: 0x0  nop
    ctx->pc = 0x30b294u;
    // NOP
label_30b298:
    // 0x30b298: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b29c: 0xc095150  jal         func_254540
    ctx->pc = 0x30B29Cu;
    SET_GPR_U32(ctx, 31, 0x30B2A4u);
    ctx->pc = 0x30B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B29Cu;
    // 0x30b2a0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x30B29Cu, 0x30B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2A4u;
label_30b2a4:
    // 0x30b2a4: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x30B2A4u;
    {
        const bool branch_taken_0x30b2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b2a4) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B2ACu;
    // 0x30b2ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x30b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b2b0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x30B2B0u;
    {
        const bool branch_taken_0x30b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2B0u;
        // 0x30b2b4: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2b0) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B2B8u;
label_30b2b8:
    // 0x30b2b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x30b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b2bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x30b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x30b2c0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x30b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b2c4: 0xc0ceafc  jal         func_33ABF0
    ctx->pc = 0x30B2C4u;
    SET_GPR_U32(ctx, 31, 0x30B2CCu);
    ctx->pc = 0x30B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2C4u;
    // 0x30b2c8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABF0u, 0x30B2C4u, 0x30B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B2CCu;
label_30b2cc:
    // 0x30b2cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b2d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30b2d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x30b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30b2d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30b2dc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x30b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x30b2e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2e4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30b2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30b2e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b2f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30b2f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b2f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30B2F8u;
    SET_GPR_U32(ctx, 31, 0x30B300u);
    ctx->pc = 0x30B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B2F8u;
    // 0x30b2fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30B2F8u, 0x30B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B300u;
label_30b300:
    // 0x30b300: 0x87828ae4  lh          $v0, -0x751C($gp)
    ctx->pc = 0x30b300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937316)));
    // 0x30b304: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B304u;
    {
        const bool branch_taken_0x30b304 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x30b304) {
            ctx->pc = 0x30B318u;
            goto label_30b318;
        }
    }
    ctx->pc = 0x30B30Cu;
    // 0x30b30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30B30Cu;
    {
        const bool branch_taken_0x30b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B30Cu;
        // 0x30b310: 0xa7808ae4  sh          $zero, -0x751C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937316), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b30c) {
            ctx->pc = 0x30B320u;
            goto label_30b320;
        }
    }
    ctx->pc = 0x30B314u;
    // 0x30b314: 0x0  nop
    ctx->pc = 0x30b314u;
    // NOP
label_30b318:
    // 0x30b318: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x30b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x30b31c: 0xa7828ae4  sh          $v0, -0x751C($gp)
    ctx->pc = 0x30b31cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937316), (uint16_t)GPR_U32(ctx, 2));
label_30b320:
    // 0x30b320: 0x87828ae8  lh          $v0, -0x7518($gp)
    ctx->pc = 0x30b320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x30b324: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B324u;
    {
        const bool branch_taken_0x30b324 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x30b324) {
            ctx->pc = 0x30B340u;
            goto label_30b340;
        }
    }
    ctx->pc = 0x30B32Cu;
    // 0x30b32c: 0xa7808ae8  sh          $zero, -0x7518($gp)
    ctx->pc = 0x30b32cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937320), (uint16_t)GPR_U32(ctx, 0));
    // 0x30b330: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30b330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b338: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x30B338u;
    {
        const bool branch_taken_0x30b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B338u;
        // 0x30b33c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b338) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B340u;
label_30b340:
    // 0x30b340: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x30b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x30b344: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x30B344u;
    {
        const bool branch_taken_0x30b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B344u;
        // 0x30b348: 0xa7828ae8  sh          $v0, -0x7518($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937320), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b344) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B34Cu;
    // 0x30b34c: 0x0  nop
    ctx->pc = 0x30b34cu;
    // NOP
label_30b350:
    // 0x30b350: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b354: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x30B354u;
    SET_GPR_U32(ctx, 31, 0x30B35Cu);
    ctx->pc = 0x30B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B354u;
    // 0x30b358: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x30B354u, 0x30B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B35Cu;
label_30b35c:
    // 0x30b35c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b364: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x30b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x30b368: 0xc095130  jal         func_2544C0
    ctx->pc = 0x30B368u;
    SET_GPR_U32(ctx, 31, 0x30B370u);
    ctx->pc = 0x30B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B368u;
    // 0x30b36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x30B368u, 0x30B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B370u;
label_30b370:
    // 0x30b370: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x30B370u;
    SET_GPR_U32(ctx, 31, 0x30B378u);
    ctx->pc = 0x30B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B370u;
    // 0x30b374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x30B370u, 0x30B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B378u;
label_30b378:
    // 0x30b378: 0x8f858aec  lw          $a1, -0x7514($gp)
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x30b37c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B37Cu;
    {
        const bool branch_taken_0x30b37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B37Cu;
        // 0x30b380: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b37c) {
            ctx->pc = 0x30B390u;
            goto label_30b390;
        }
    }
    ctx->pc = 0x30B384u;
    // 0x30b384: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x30B384u;
    SET_GPR_U32(ctx, 31, 0x30B38Cu);
    ctx->pc = 0x30B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B384u;
    // 0x30b388: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x30B384u, 0x30B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0x0  nop
    ctx->pc = 0x30b38cu;
    // NOP
label_30b390:
    // 0x30b390: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x30b390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x30b394: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x30b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x30b398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b39c: 0xc061de4  jal         func_187790
    ctx->pc = 0x30B39Cu;
    SET_GPR_U32(ctx, 31, 0x30B3A4u);
    ctx->pc = 0x30B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B39Cu;
    // 0x30b3a0: 0xaf808aec  sw          $zero, -0x7514($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187790u, 0x30B39Cu, 0x30B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B3A4u;
label_30b3a4:
    // 0x30b3a4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30b3a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30b3a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b3ac: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x30b3acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b3b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x30B3B0u;
    {
        const bool branch_taken_0x30b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B0u;
        // 0x30b3b4: 0xa2200003  sb          $zero, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3b0) {
            ctx->pc = 0x30B4B8u;
            goto label_30b4b8;
        }
    }
    ctx->pc = 0x30B3B8u;
label_30b3b8:
    // 0x30b3b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3bc: 0x8c28cedc  lw          $t0, -0x3124($at)
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x30b3c0: 0x3c02700d  lui         $v0, 0x700D
    ctx->pc = 0x30b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28685 << 16));
    // 0x30b3c4: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x30b3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30b3c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3cc: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x30b3ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x30b3d0: 0x8c26cec4  lw          $a2, -0x313C($at)
    ctx->pc = 0x30b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x30b3d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3d8: 0x8c22cec8  lw          $v0, -0x3138($at)
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x30b3dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3e0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30b3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30b3e4: 0x8c25cecc  lw          $a1, -0x3134($at)
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CECCu));
    // 0x30b3e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3ec: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x30b3ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x30b3f0: 0x8c24ced0  lw          $a0, -0x3130($at)
    ctx->pc = 0x30b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED0u));
    // 0x30b3f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b3f8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30b3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30b3fc: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x30b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x30b400: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b404: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30b404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30b408: 0xac27cedc  sw          $a3, -0x3124($at)
    ctx->pc = 0x30b408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x30b40c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b410: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x30b410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x30b414: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30b418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30b418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30b41c: 0xac22cec0  sw          $v0, -0x3140($at)
    ctx->pc = 0x30b41cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x30b420: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x30b420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30b424: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30B424u;
    {
        const bool branch_taken_0x30b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b424) {
            ctx->pc = 0x30B480u;
            goto label_30b480;
        }
    }
    ctx->pc = 0x30B42Cu;
    // 0x30b42c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x30b42cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30b430: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x30b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x30b434: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x30b434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x30b438: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30b43c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x30b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x30b440: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30b440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b448: 0xa4221408  sh          $v0, 0x1408($at)
    ctx->pc = 0x30b448u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x921408u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x921408u, _value); } while (0);
    // 0x30b44c: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x30b44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x30b450: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x30b450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x30b454: 0xa022140a  sb          $v0, 0x140A($at)
    ctx->pc = 0x30b454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92140Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92140Au, _value); } while (0);
    // 0x30b458: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x30b458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x30b45c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x30b45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x30b460: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x30B460u;
    SET_GPR_U32(ctx, 31, 0x30B468u);
    ctx->pc = 0x30B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B460u;
    // 0x30b464: 0xa022140b  sb          $v0, 0x140B($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 5131), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x30B460u, 0x30B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B468u;
label_30b468:
    // 0x30b468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B468u;
    {
        const bool branch_taken_0x30b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B468u;
        // 0x30b46c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b468) {
            ctx->pc = 0x30B480u;
            goto label_30b480;
        }
    }
    ctx->pc = 0x30B470u;
    // 0x30b470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b474: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x30B474u;
    {
        const bool branch_taken_0x30b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B474u;
        // 0x30b478: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b474) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B47Cu;
    // 0x30b47c: 0x0  nop
    ctx->pc = 0x30b47cu;
    // NOP
label_30b480:
    // 0x30b480: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x30b480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b484: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30B484u;
    {
        const bool branch_taken_0x30b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B484u;
        // 0x30b488: 0x82220002  lb          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b484) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B48Cu;
    // 0x30b48c: 0x0  nop
    ctx->pc = 0x30b48cu;
    // NOP
label_30b490:
    // 0x30b490: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x30b490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x30b494: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x30B494u;
    SET_GPR_U32(ctx, 31, 0x30B49Cu);
    ctx->pc = 0x30B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B494u;
    // 0x30b498: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x30B494u, 0x30B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B49Cu;
label_30b49c:
    // 0x30b49c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B49Cu;
    {
        const bool branch_taken_0x30b49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b49c) {
            ctx->pc = 0x30B4B0u;
            goto label_30b4b0;
        }
    }
    ctx->pc = 0x30B4A4u;
    // 0x30b4a4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x30b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b4a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30B4A8u;
    {
        const bool branch_taken_0x30b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4A8u;
        // 0x30b4ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4a8) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B4B0u;
label_30b4b0:
    // 0x30b4b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x30B4B0u;
    {
        const bool branch_taken_0x30b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4B0u;
        // 0x30b4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b4b0) {
            ctx->pc = 0x30B548u;
            goto label_30b548;
        }
    }
    ctx->pc = 0x30B4B8u;
label_30b4b8:
    // 0x30b4b8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x30b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x30b4bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B4BCu;
    {
        const bool branch_taken_0x30b4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b4bc) {
            ctx->pc = 0x30B4F0u;
            goto label_30b4f0;
        }
    }
    ctx->pc = 0x30B4C4u;
    // 0x30b4c4: 0x87838ae8  lh          $v1, -0x7518($gp)
    ctx->pc = 0x30b4c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x30b4c8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30b4cc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x30b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x30b4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b4d4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x30b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30b4d8: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x30b4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x30b4dc: 0x3407fff6  ori         $a3, $zero, 0xFFF6
    ctx->pc = 0x30b4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x30b4e0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x30b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30b4e4: 0xc0c2f14  jal         func_30BC50
    ctx->pc = 0x30B4E4u;
    SET_GPR_U32(ctx, 31, 0x30B4ECu);
    ctx->pc = 0x30B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4E4u;
    // 0x30b4e8: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC50u, 0x30B4E4u, 0x30B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B4ECu;
label_30b4ec:
    // 0x30b4ec: 0x0  nop
    ctx->pc = 0x30b4ecu;
    // NOP
label_30b4f0:
    // 0x30b4f0: 0x93858ae4  lbu         $a1, -0x751C($gp)
    ctx->pc = 0x30b4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937316)));
    // 0x30b4f4: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x30b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x30b4f8: 0xc061de4  jal         func_187790
    ctx->pc = 0x30B4F8u;
    SET_GPR_U32(ctx, 31, 0x30B500u);
    ctx->pc = 0x30B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B4F8u;
    // 0x30b4fc: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187790u, 0x30B4F8u, 0x30B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B500u;
label_30b500:
    // 0x30b500: 0x8f848aec  lw          $a0, -0x7514($gp)
    ctx->pc = 0x30b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x30b504: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30B504u;
    {
        const bool branch_taken_0x30b504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b504) {
            ctx->pc = 0x30B540u;
            goto label_30b540;
        }
    }
    ctx->pc = 0x30B50Cu;
    // 0x30b50c: 0x87838ae4  lh          $v1, -0x751C($gp)
    ctx->pc = 0x30b50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937316)));
    // 0x30b510: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B510u;
    {
        const bool branch_taken_0x30b510 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x30B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B510u;
        // 0x30b514: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b510) {
            ctx->pc = 0x30B520u;
            goto label_30b520;
        }
    }
    ctx->pc = 0x30B518u;
    // 0x30b518: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b51c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30b51cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30b520:
    // 0x30b520: 0xa0820068  sb          $v0, 0x68($a0)
    ctx->pc = 0x30b520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b524: 0x87828ae4  lh          $v0, -0x751C($gp)
    ctx->pc = 0x30b524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937316)));
    // 0x30b528: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B528u;
    {
        const bool branch_taken_0x30b528 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x30B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B528u;
        // 0x30b52c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b528) {
            ctx->pc = 0x30B538u;
            goto label_30b538;
        }
    }
    ctx->pc = 0x30B530u;
    // 0x30b530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b534: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x30b534u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_30b538:
    // 0x30b538: 0x8f828aec  lw          $v0, -0x7514($gp)
    ctx->pc = 0x30b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937324)));
    // 0x30b53c: 0xa0430069  sb          $v1, 0x69($v0)
    ctx->pc = 0x30b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 3));
label_30b540:
    // 0x30b540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b544: 0x0  nop
    ctx->pc = 0x30b544u;
    // NOP
label_30b548:
    // 0x30b548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b54c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30b54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b550: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30b550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30b554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b558: 0x3e00008  jr          $ra
    ctx->pc = 0x30B558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B558u;
        // 0x30b55c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B560u;
}
