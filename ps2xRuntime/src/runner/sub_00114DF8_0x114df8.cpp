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

// Function: sub_00114DF8
// Address: 0x114df8 - 0x114f4c
void sub_00114DF8_0x114df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114DF8_0x114df8");
#endif

    switch (ctx->pc) {
        case 0x114e20u: goto label_114e20;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e58u: goto label_114e58;
        case 0x114e88u: goto label_114e88;
        case 0x114ed8u: goto label_114ed8;
        case 0x114ee8u: goto label_114ee8;
        case 0x114ef0u: goto label_114ef0;
        case 0x114f04u: goto label_114f04;
        case 0x114f14u: goto label_114f14;
        case 0x114f24u: goto label_114f24;
        case 0x114f2cu: goto label_114f2c;
        default: break;
    }

    ctx->pc = 0x114df8u;

    // 0x114df8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x114dfc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114e00: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e08: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114e0c: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x114e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x114e10: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x114e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x114e18: 0xc044a30  jal         func_1128C0
    ctx->pc = 0x114E18u;
    SET_GPR_U32(ctx, 31, 0x114E20u);
    ctx->pc = 0x114E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E18u;
    // 0x114e1c: 0x2672ec80  addiu       $s2, $s3, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128C0u, 0x114E18u, 0x114E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E20u;
label_114e20:
    // 0x114e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e24: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114E24u;
    SET_GPR_U32(ctx, 31, 0x114E2Cu);
    ctx->pc = 0x114E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E24u;
    // 0x114e28: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114E24u, 0x114E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E2Cu;
label_114e2c:
    // 0x114e2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114e30: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114e34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114E34u;
    {
        const bool branch_taken_0x114e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e34) {
            ctx->pc = 0x114E50u;
            goto label_114e50;
        }
    }
    ctx->pc = 0x114E3Cu;
    // 0x114e3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114E3Cu;
    {
        const bool branch_taken_0x114e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e3c) {
            ctx->pc = 0x114E50u;
            goto label_114e50;
        }
    }
    ctx->pc = 0x114E44u;
    // 0x114e44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x114e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114e48: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114E48u;
    {
        const bool branch_taken_0x114e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114e48) {
            ctx->pc = 0x114E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114E48u;
            // 0x114e4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E60u;
            goto label_114e60;
        }
    }
    ctx->pc = 0x114E50u;
label_114e50:
    // 0x114e50: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114E50u;
    SET_GPR_U32(ctx, 31, 0x114E58u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114E50u, 0x114E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E58u;
label_114e58:
    // 0x114e58: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x114E58u;
    {
        const bool branch_taken_0x114e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E58u;
        // 0x114e5c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e58) {
            ctx->pc = 0x114F30u;
            goto label_114f30;
        }
    }
    ctx->pc = 0x114E60u;
label_114e60:
    // 0x114e60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x114e64: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x114e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x114e68: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x114e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x114e6c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x114e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x114e70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114e74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114e78: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x114e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x114e7c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x114e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114e80: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x114E80u;
    SET_GPR_U32(ctx, 31, 0x114E88u);
    ctx->pc = 0x114E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E80u;
    // 0x114e84: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x114E80u, 0x114E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E88u;
label_114e88:
    // 0x114e88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e8c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x114e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114e90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114e94: 0xae71ec80  sw          $s1, -0x1380($s3)
    ctx->pc = 0x114e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962304), GPR_U32(ctx, 17));
    // 0x114e98: 0x2450f8c0  addiu       $s0, $v0, -0x740
    ctx->pc = 0x114e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x114e9c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x114e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x114ea0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114ea4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x114ea8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x114eac: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x114eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x114eb0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x114eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114eb4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x114eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x114eb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ec0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114ec4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x114ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x114ec8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x114ec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ecc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114ed0: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x114ED0u;
    SET_GPR_U32(ctx, 31, 0x114ED8u);
    ctx->pc = 0x114ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ED0u;
    // 0x114ed4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x114ED0u, 0x114ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114ED8u;
label_114ed8:
    // 0x114ed8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114ED8u;
    {
        const bool branch_taken_0x114ed8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x114EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ED8u;
        // 0x114edc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ed8) {
            ctx->pc = 0x114EF8u;
            goto label_114ef8;
        }
    }
    ctx->pc = 0x114EE0u;
    // 0x114ee0: 0xc043808  jal         func_10E020
    ctx->pc = 0x114EE0u;
    SET_GPR_U32(ctx, 31, 0x114EE8u);
    ctx->pc = 0x114EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EE0u;
    // 0x114ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114EE0u, 0x114EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EE8u;
label_114ee8:
    // 0x114ee8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114EE8u;
    SET_GPR_U32(ctx, 31, 0x114EF0u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114EE8u, 0x114EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EF0u;
label_114ef0:
    // 0x114ef0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114EF0u;
    {
        const bool branch_taken_0x114ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EF0u;
        // 0x114ef4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ef0) {
            ctx->pc = 0x114F30u;
            goto label_114f30;
        }
    }
    ctx->pc = 0x114EF8u;
label_114ef8:
    // 0x114ef8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x114ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x114efc: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114EFCu;
    SET_GPR_U32(ctx, 31, 0x114F04u);
    ctx->pc = 0x114F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EFCu;
    // 0x114f00: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114EFCu, 0x114F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F04u;
label_114f04:
    // 0x114f04: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114F04u;
    {
        const bool branch_taken_0x114f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f04) {
            ctx->pc = 0x114F1Cu;
            goto label_114f1c;
        }
    }
    ctx->pc = 0x114F0Cu;
    // 0x114f0c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114F0Cu;
    SET_GPR_U32(ctx, 31, 0x114F14u);
    ctx->pc = 0x114F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F0Cu;
    // 0x114f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114F0Cu, 0x114F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F14u;
label_114f14:
    // 0x114f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114F14u;
    {
        const bool branch_taken_0x114f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F14u;
        // 0x114f18: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f14) {
            ctx->pc = 0x114F30u;
            goto label_114f30;
        }
    }
    ctx->pc = 0x114F1Cu;
label_114f1c:
    // 0x114f1c: 0xc043808  jal         func_10E020
    ctx->pc = 0x114F1Cu;
    SET_GPR_U32(ctx, 31, 0x114F24u);
    ctx->pc = 0x114F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F1Cu;
    // 0x114f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114F1Cu, 0x114F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F24u;
label_114f24:
    // 0x114f24: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114F24u;
    SET_GPR_U32(ctx, 31, 0x114F2Cu);
    ctx->pc = 0x114F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F24u;
    // 0x114f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114F24u, 0x114F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F2Cu;
label_114f2c:
    // 0x114f2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114f30:
    // 0x114f30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x114f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114f34: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114f38: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114f3c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114f40: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114f44: 0x3e00008  jr          $ra
    ctx->pc = 0x114F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F44u;
        // 0x114f48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114F4Cu;
}
