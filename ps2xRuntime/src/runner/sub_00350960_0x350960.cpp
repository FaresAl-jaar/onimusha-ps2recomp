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

// Function: sub_00350960
// Address: 0x350960 - 0x350a84
void sub_00350960_0x350960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350960_0x350960");
#endif

    switch (ctx->pc) {
        case 0x3509a0u: goto label_3509a0;
        case 0x3509b4u: goto label_3509b4;
        case 0x3509f8u: goto label_3509f8;
        case 0x350a0cu: goto label_350a0c;
        case 0x350a38u: goto label_350a38;
        case 0x350a4cu: goto label_350a4c;
        default: break;
    }

    ctx->pc = 0x350960u;

    // 0x350960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x350960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x350964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x350964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x350968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x350968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35096c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x350970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350978: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x350978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35097c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x35097Cu;
    {
        const bool branch_taken_0x35097c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35097Cu;
        // 0x350980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35097c) {
            ctx->pc = 0x350A68u;
            goto label_350a68;
        }
    }
    ctx->pc = 0x350984u;
    // 0x350984: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x350984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x350988: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x350988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35098c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35098Cu;
    {
        const bool branch_taken_0x35098c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35098Cu;
        // 0x350990: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35098c) {
            ctx->pc = 0x3509E0u;
            goto label_3509e0;
        }
    }
    ctx->pc = 0x350994u;
    // 0x350994: 0x24120912  addiu       $s2, $zero, 0x912
    ctx->pc = 0x350994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2322));
    // 0x350998: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x350998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35099c: 0x0  nop
    ctx->pc = 0x35099cu;
    // NOP
label_3509a0:
    // 0x3509a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3509a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3509a4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3509a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3509a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3509a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3509ac: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3509ACu;
    SET_GPR_U32(ctx, 31, 0x3509B4u);
    ctx->pc = 0x3509B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3509ACu;
    // 0x3509b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3509ACu, 0x3509B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509B4u;
label_3509b4:
    // 0x3509b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3509b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3509b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3509b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x3509bc: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x3509bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3509c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3509c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3509c4: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x3509c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3509c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3509C8u;
    {
        const bool branch_taken_0x3509c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3509CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509C8u;
        // 0x3509cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509c8) {
            ctx->pc = 0x3509A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3509a0;
        }
    }
    ctx->pc = 0x3509D0u;
    // 0x3509d0: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x3509d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x3509d4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3509d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3509d8: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x3509d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x3509dc: 0x0  nop
    ctx->pc = 0x3509dcu;
    // NOP
label_3509e0:
    // 0x3509e0: 0x92040026  lbu         $a0, 0x26($s0)
    ctx->pc = 0x3509e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x3509e4: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3509e8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x3509e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3509ec: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3509ECu;
    {
        const bool branch_taken_0x3509ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3509F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509ECu;
        // 0x3509f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509ec) {
            ctx->pc = 0x350A28u;
            goto label_350a28;
        }
    }
    ctx->pc = 0x3509F4u;
    // 0x3509f4: 0x0  nop
    ctx->pc = 0x3509f4u;
    // NOP
label_3509f8:
    // 0x3509f8: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x3509f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3509fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3509FCu;
    {
        const bool branch_taken_0x3509fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3509FCu;
        // 0x350a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3509fc) {
            ctx->pc = 0x350A10u;
            goto label_350a10;
        }
    }
    ctx->pc = 0x350A04u;
    // 0x350a04: 0xc0d46d0  jal         func_351B40
    ctx->pc = 0x350A04u;
    SET_GPR_U32(ctx, 31, 0x350A0Cu);
    ctx->pc = 0x351B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B40u, 0x350A04u, 0x350A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A0Cu;
label_350a0c:
    // 0x350a0c: 0x0  nop
    ctx->pc = 0x350a0cu;
    // NOP
label_350a10:
    // 0x350a10: 0x92040026  lbu         $a0, 0x26($s0)
    ctx->pc = 0x350a10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x350a14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x350a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x350a18: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x350a18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x350a1c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x350A1Cu;
    {
        const bool branch_taken_0x350a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A1Cu;
        // 0x350a20: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a1c) {
            ctx->pc = 0x3509F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3509f8;
        }
    }
    ctx->pc = 0x350A24u;
    // 0x350a24: 0x0  nop
    ctx->pc = 0x350a24u;
    // NOP
label_350a28:
    // 0x350a28: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x350a28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x350a2c: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x350a2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x350a30: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x350A30u;
    {
        const bool branch_taken_0x350a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A30u;
        // 0x350a34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a30) {
            ctx->pc = 0x350A68u;
            goto label_350a68;
        }
    }
    ctx->pc = 0x350A38u;
label_350a38:
    // 0x350a38: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x350a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x350a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350A3Cu;
    {
        const bool branch_taken_0x350a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A3Cu;
        // 0x350a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a3c) {
            ctx->pc = 0x350A50u;
            goto label_350a50;
        }
    }
    ctx->pc = 0x350A44u;
    // 0x350a44: 0xc0d4990  jal         func_352640
    ctx->pc = 0x350A44u;
    SET_GPR_U32(ctx, 31, 0x350A4Cu);
    ctx->pc = 0x352640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352640u, 0x350A44u, 0x350A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A4Cu;
label_350a4c:
    // 0x350a4c: 0x0  nop
    ctx->pc = 0x350a4cu;
    // NOP
label_350a50:
    // 0x350a50: 0x92030026  lbu         $v1, 0x26($s0)
    ctx->pc = 0x350a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x350a54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x350a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x350a58: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x350a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x350a5c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x350A5Cu;
    {
        const bool branch_taken_0x350a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A5Cu;
        // 0x350a60: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a5c) {
            ctx->pc = 0x350A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350a38;
        }
    }
    ctx->pc = 0x350A64u;
    // 0x350a64: 0x0  nop
    ctx->pc = 0x350a64u;
    // NOP
label_350a68:
    // 0x350a68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x350a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x350A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A7Cu;
        // 0x350a80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350A84u;
}
