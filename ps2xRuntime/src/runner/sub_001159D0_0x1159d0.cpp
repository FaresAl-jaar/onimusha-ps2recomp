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

// Function: sub_001159D0
// Address: 0x1159d0 - 0x115c0c
void sub_001159D0_0x1159d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001159D0_0x1159d0");
#endif

    switch (ctx->pc) {
        case 0x115a08u: goto label_115a08;
        case 0x115a14u: goto label_115a14;
        case 0x115a40u: goto label_115a40;
        case 0x115a8cu: goto label_115a8c;
        case 0x115ab4u: goto label_115ab4;
        case 0x115af4u: goto label_115af4;
        case 0x115b30u: goto label_115b30;
        case 0x115b74u: goto label_115b74;
        case 0x115b84u: goto label_115b84;
        case 0x115b8cu: goto label_115b8c;
        case 0x115ba0u: goto label_115ba0;
        case 0x115bb0u: goto label_115bb0;
        case 0x115bc8u: goto label_115bc8;
        case 0x115bd8u: goto label_115bd8;
        case 0x115be0u: goto label_115be0;
        default: break;
    }

    ctx->pc = 0x1159d0u;

    // 0x1159d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1159d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1159d4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1159d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1159d8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1159d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1159dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1159dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159e0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1159e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1159e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1159e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159e8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1159e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1159ec: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1159f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1159f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1159f4: 0x2691ec80  addiu       $s1, $s4, -0x1380
    ctx->pc = 0x1159f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962304));
    // 0x1159f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1159f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1159fc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1159fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115a00: 0xc044a30  jal         func_1128C0
    ctx->pc = 0x115A00u;
    SET_GPR_U32(ctx, 31, 0x115A08u);
    ctx->pc = 0x115A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A00u;
    // 0x115a04: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128C0u, 0x115A00u, 0x115A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A08u;
label_115a08:
    // 0x115a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a0c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x115A0Cu;
    SET_GPR_U32(ctx, 31, 0x115A14u);
    ctx->pc = 0x115A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A0Cu;
    // 0x115a10: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x115A0Cu, 0x115A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A14u;
label_115a14:
    // 0x115a14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x115a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x115a18: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x115a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x115a1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115A1Cu;
    {
        const bool branch_taken_0x115a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115a1c) {
            ctx->pc = 0x115A38u;
            goto label_115a38;
        }
    }
    ctx->pc = 0x115A24u;
    // 0x115a24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115A24u;
    {
        const bool branch_taken_0x115a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x115a24) {
            ctx->pc = 0x115A38u;
            goto label_115a38;
        }
    }
    ctx->pc = 0x115A2Cu;
    // 0x115a2c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x115a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x115a30: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x115A30u;
    {
        const bool branch_taken_0x115a30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A30u;
        // 0x115a34: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a30) {
            ctx->pc = 0x115A48u;
            goto label_115a48;
        }
    }
    ctx->pc = 0x115A38u;
label_115a38:
    // 0x115a38: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115A38u;
    SET_GPR_U32(ctx, 31, 0x115A40u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115A38u, 0x115A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A40u;
label_115a40:
    // 0x115a40: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x115A40u;
    {
        const bool branch_taken_0x115a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A40u;
        // 0x115a44: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a40) {
            ctx->pc = 0x115BE4u;
            goto label_115be4;
        }
    }
    ctx->pc = 0x115A48u;
label_115a48:
    // 0x115a48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115a4c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x115a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x115a50: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x115a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x115a54: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x115a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115a58: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x115a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x115a5c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x115a5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x115a60: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x115a60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x115a64: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x115a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x115a68: 0x246328d0  addiu       $v1, $v1, 0x28D0
    ctx->pc = 0x115a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10448));
    // 0x115a6c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x115a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x115a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115a74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115a78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x115a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x115a7c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115a80: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x115a80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x115a84: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115A84u;
    SET_GPR_U32(ctx, 31, 0x115A8Cu);
    ctx->pc = 0x115A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A84u;
    // 0x115a88: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115A84u, 0x115A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A8Cu;
label_115a8c:
    // 0x115a8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x115a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115a90: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x115a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x115a94: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x115a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115a98: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x115a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x115a9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x115a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x115aa0: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x115AA0u;
    {
        const bool branch_taken_0x115aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AA0u;
        // 0x115aa4: 0xae93ec80  sw          $s3, -0x1380($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294962304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115aa0) {
            ctx->pc = 0x115B38u;
            goto label_115b38;
        }
    }
    ctx->pc = 0x115AA8u;
    // 0x115aa8: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x115aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x115aac: 0xc043808  jal         func_10E020
    ctx->pc = 0x115AACu;
    SET_GPR_U32(ctx, 31, 0x115AB4u);
    ctx->pc = 0x115AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115AACu;
    // 0x115ab0: 0x8ea42b4c  lw          $a0, 0x2B4C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x115AACu, 0x115AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AB4u;
label_115ab4:
    // 0x115ab4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x115ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x115ab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115abc: 0x8ce32ab8  lw          $v1, 0x2AB8($a3)
    ctx->pc = 0x115abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402AB8u));
    // 0x115ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115ac4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115AC4u;
    {
        const bool branch_taken_0x115ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AC4u;
        // 0x115ac8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ac4) {
            ctx->pc = 0x115AE8u;
            goto label_115ae8;
        }
    }
    ctx->pc = 0x115ACCu;
    // 0x115acc: 0x8e83ec80  lw          $v1, -0x1380($s4)
    ctx->pc = 0x115accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962304)));
    // 0x115ad0: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115ad4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x115ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x115ad8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x115ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x115adc: 0xace32ab8  sw          $v1, 0x2AB8($a3)
    ctx->pc = 0x115adcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10936), GPR_U32(ctx, 3));
    // 0x115ae0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115AE0u;
    {
        const bool branch_taken_0x115ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AE0u;
        // 0x115ae4: 0xae82ec80  sw          $v0, -0x1380($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294962304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ae0) {
            ctx->pc = 0x115B28u;
            goto label_115b28;
        }
    }
    ctx->pc = 0x115AE8u;
label_115ae8:
    // 0x115ae8: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115ae8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115aec: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x115aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x115af0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x115af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_115af4:
    // 0x115af4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x115af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x115af8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x115AF8u;
    {
        const bool branch_taken_0x115af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AF8u;
        // 0x115afc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115af8) {
            ctx->pc = 0x115B28u;
            goto label_115b28;
        }
    }
    ctx->pc = 0x115B00u;
    // 0x115b00: 0x24e32ab8  addiu       $v1, $a3, 0x2AB8
    ctx->pc = 0x115b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10936));
    // 0x115b04: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x115b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115b08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x115b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x115b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x115b10: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115B10u;
    {
        const bool branch_taken_0x115b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x115B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B10u;
        // 0x115b14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b10) {
            ctx->pc = 0x115AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115af4;
        }
    }
    ctx->pc = 0x115B18u;
    // 0x115b18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x115b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115b1c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x115b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x115b20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x115b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x115b24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x115b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_115b28:
    // 0x115b28: 0xc043800  jal         func_10E000
    ctx->pc = 0x115B28u;
    SET_GPR_U32(ctx, 31, 0x115B30u);
    ctx->pc = 0x115B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B28u;
    // 0x115b2c: 0x8ea42b4c  lw          $a0, 0x2B4C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x115B28u, 0x115B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B30u;
label_115b30:
    // 0x115b30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115B30u;
    {
        const bool branch_taken_0x115b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B30u;
        // 0x115b34: 0x2610f8c0  addiu       $s0, $s0, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b30) {
            ctx->pc = 0x115B48u;
            goto label_115b48;
        }
    }
    ctx->pc = 0x115B38u;
label_115b38:
    // 0x115b38: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115b38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115b3c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x115b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x115b40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x115b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b44: 0x2610f8c0  addiu       $s0, $s0, -0x740
    ctx->pc = 0x115b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965440));
label_115b48:
    // 0x115b48: 0x26c40380  addiu       $a0, $s6, 0x380
    ctx->pc = 0x115b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 896));
    // 0x115b4c: 0x2687ec80  addiu       $a3, $s4, -0x1380
    ctx->pc = 0x115b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962304));
    // 0x115b50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115b54: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x115b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x115b58: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x115b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x115b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b60: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x115b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x115b64: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x115b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b68: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115b6c: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x115B6Cu;
    SET_GPR_U32(ctx, 31, 0x115B74u);
    ctx->pc = 0x115B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B6Cu;
    // 0x115b70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x115B6Cu, 0x115B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B74u;
label_115b74:
    // 0x115b74: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115B74u;
    {
        const bool branch_taken_0x115b74 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x115B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B74u;
        // 0x115b78: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b74) {
            ctx->pc = 0x115B94u;
            goto label_115b94;
        }
    }
    ctx->pc = 0x115B7Cu;
    // 0x115b7c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115B7Cu;
    SET_GPR_U32(ctx, 31, 0x115B84u);
    ctx->pc = 0x115B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B7Cu;
    // 0x115b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115B7Cu, 0x115B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B84u;
label_115b84:
    // 0x115b84: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115B84u;
    SET_GPR_U32(ctx, 31, 0x115B8Cu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115B84u, 0x115B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B8Cu;
label_115b8c:
    // 0x115b8c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x115B8Cu;
    {
        const bool branch_taken_0x115b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B8Cu;
        // 0x115b90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b8c) {
            ctx->pc = 0x115BE4u;
            goto label_115be4;
        }
    }
    ctx->pc = 0x115B94u;
label_115b94:
    // 0x115b94: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x115b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x115b98: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115B98u;
    SET_GPR_U32(ctx, 31, 0x115BA0u);
    ctx->pc = 0x115B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B98u;
    // 0x115b9c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115B98u, 0x115BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BA0u;
label_115ba0:
    // 0x115ba0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115BA0u;
    {
        const bool branch_taken_0x115ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115ba0) {
            ctx->pc = 0x115BB8u;
            goto label_115bb8;
        }
    }
    ctx->pc = 0x115BA8u;
    // 0x115ba8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115BA8u;
    SET_GPR_U32(ctx, 31, 0x115BB0u);
    ctx->pc = 0x115BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BA8u;
    // 0x115bac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115BA8u, 0x115BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BB0u;
label_115bb0:
    // 0x115bb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115BB0u;
    {
        const bool branch_taken_0x115bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BB0u;
        // 0x115bb4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bb0) {
            ctx->pc = 0x115BE4u;
            goto label_115be4;
        }
    }
    ctx->pc = 0x115BB8u;
label_115bb8:
    // 0x115bb8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x115BB8u;
    {
        const bool branch_taken_0x115bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x115bb8) {
            ctx->pc = 0x115BD0u;
            goto label_115bd0;
        }
    }
    ctx->pc = 0x115BC0u;
    // 0x115bc0: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115BC0u;
    SET_GPR_U32(ctx, 31, 0x115BC8u);
    ctx->pc = 0x115BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BC0u;
    // 0x115bc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115BC0u, 0x115BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BC8u;
label_115bc8:
    // 0x115bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115BC8u;
    {
        const bool branch_taken_0x115bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BC8u;
        // 0x115bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bc8) {
            ctx->pc = 0x115BE4u;
            goto label_115be4;
        }
    }
    ctx->pc = 0x115BD0u;
label_115bd0:
    // 0x115bd0: 0xc043808  jal         func_10E020
    ctx->pc = 0x115BD0u;
    SET_GPR_U32(ctx, 31, 0x115BD8u);
    ctx->pc = 0x115BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BD0u;
    // 0x115bd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x115BD0u, 0x115BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BD8u;
label_115bd8:
    // 0x115bd8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115BD8u;
    SET_GPR_U32(ctx, 31, 0x115BE0u);
    ctx->pc = 0x115BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BD8u;
    // 0x115bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115BD8u, 0x115BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BE0u;
label_115be0:
    // 0x115be0: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x115be0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_115be4:
    // 0x115be4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x115be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115be8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115be8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115bec: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115bf0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115bf4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115bf8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115bfc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115c00: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115c04: 0x3e00008  jr          $ra
    ctx->pc = 0x115C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C04u;
        // 0x115c08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C0Cu;
}
