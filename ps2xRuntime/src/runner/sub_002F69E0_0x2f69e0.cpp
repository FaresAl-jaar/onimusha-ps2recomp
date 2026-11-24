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

// Function: sub_002F69E0
// Address: 0x2f69e0 - 0x2f6d9c
void sub_002F69E0_0x2f69e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F69E0_0x2f69e0");
#endif

    switch (ctx->pc) {
        case 0x2f6a4cu: goto label_2f6a4c;
        case 0x2f6a84u: goto label_2f6a84;
        case 0x2f6abcu: goto label_2f6abc;
        case 0x2f6ad8u: goto label_2f6ad8;
        case 0x2f6b00u: goto label_2f6b00;
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b2cu: goto label_2f6b2c;
        case 0x2f6b54u: goto label_2f6b54;
        case 0x2f6b6cu: goto label_2f6b6c;
        case 0x2f6b80u: goto label_2f6b80;
        case 0x2f6bb8u: goto label_2f6bb8;
        case 0x2f6bd4u: goto label_2f6bd4;
        case 0x2f6bfcu: goto label_2f6bfc;
        case 0x2f6c48u: goto label_2f6c48;
        case 0x2f6c5cu: goto label_2f6c5c;
        case 0x2f6c70u: goto label_2f6c70;
        case 0x2f6cc8u: goto label_2f6cc8;
        case 0x2f6cecu: goto label_2f6cec;
        case 0x2f6d20u: goto label_2f6d20;
        case 0x2f6d48u: goto label_2f6d48;
        case 0x2f6d5cu: goto label_2f6d5c;
        case 0x2f6d84u: goto label_2f6d84;
        default: break;
    }

    ctx->pc = 0x2f69e0u;

    // 0x2f69e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f69e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f69e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f69e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f69ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f69ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f69f0: 0x8083000c  lb          $v1, 0xC($a0)
    ctx->pc = 0x2f69f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f69f4: 0x106200ba  beq         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x2F69F4u;
    {
        const bool branch_taken_0x2f69f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69F4u;
        // 0x2f69f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69f4) {
            ctx->pc = 0x2F6CE0u;
            goto label_2f6ce0;
        }
    }
    ctx->pc = 0x2F69FCu;
    // 0x2f69fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6a00: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F6A00u;
    {
        const bool branch_taken_0x2f6a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a00) {
            ctx->pc = 0x2F6C50u;
            goto label_2f6c50;
        }
    }
    ctx->pc = 0x2F6A08u;
    // 0x2f6a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6a0c: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2F6A0Cu;
    {
        const bool branch_taken_0x2f6a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a0c) {
            ctx->pc = 0x2F6B60u;
            goto label_2f6b60;
        }
    }
    ctx->pc = 0x2F6A14u;
    // 0x2f6a14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6a18: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F6A18u;
    {
        const bool branch_taken_0x2f6a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a18) {
            ctx->pc = 0x2F6B08u;
            goto label_2f6b08;
        }
    }
    ctx->pc = 0x2F6A20u;
    // 0x2f6a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a24: 0x10650022  beq         $v1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F6A24u;
    {
        const bool branch_taken_0x2f6a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f6a24) {
            ctx->pc = 0x2F6AB0u;
            goto label_2f6ab0;
        }
    }
    ctx->pc = 0x2F6A2Cu;
    // 0x2f6a2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A2Cu;
    {
        const bool branch_taken_0x2f6a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a2c) {
            ctx->pc = 0x2F6A40u;
            goto label_2f6a40;
        }
    }
    ctx->pc = 0x2F6A34u;
    // 0x2f6a34: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2F6A34u;
    {
        const bool branch_taken_0x2f6a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a34) {
            ctx->pc = 0x2F6D68u;
            goto label_2f6d68;
        }
    }
    ctx->pc = 0x2F6A3Cu;
    // 0x2f6a3c: 0x0  nop
    ctx->pc = 0x2f6a3cu;
    // NOP
label_2f6a40:
    // 0x2f6a40: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6a44: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2F6A44u;
    SET_GPR_U32(ctx, 31, 0x2F6A4Cu);
    ctx->pc = 0x2F6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A44u;
    // 0x2f6a48: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2F6A44u, 0x2F6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A4Cu;
label_2f6a4c:
    // 0x2f6a4c: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2F6A4Cu;
    {
        const bool branch_taken_0x2f6a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a4c) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6A54u;
    // 0x2f6a54: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6a58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6a5c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f6a60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f6a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a70: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2f6a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6a78: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6a7c: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F6A7Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A84u);
    ctx->pc = 0x2F6A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A7Cu;
    // 0x2f6a80: 0xa200000d  sb          $zero, 0xD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F6A7Cu, 0x2F6A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A84u;
label_2f6a84:
    // 0x2f6a84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6a88: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2f6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f6a8c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2f6a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2f6a90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6a94: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x2f6a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2f6a98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f6a9c: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x2F6A9Cu;
    {
        const bool branch_taken_0x2f6a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a9c) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6AA4u;
    // 0x2f6aa4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6aa8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2F6AA8u;
    {
        const bool branch_taken_0x2f6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AA8u;
        // 0x2f6aac: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6aa8) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6AB0u;
label_2f6ab0:
    // 0x2f6ab0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6ab4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2F6AB4u;
    SET_GPR_U32(ctx, 31, 0x2F6ABCu);
    ctx->pc = 0x2F6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AB4u;
    // 0x2f6ab8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2F6AB4u, 0x2F6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6ABCu;
label_2f6abc:
    // 0x2f6abc: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2F6ABCu;
    {
        const bool branch_taken_0x2f6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6abc) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6AC4u;
    // 0x2f6ac4: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6ac8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f6acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6ad0: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x2F6AD0u;
    SET_GPR_U32(ctx, 31, 0x2F6AD8u);
    ctx->pc = 0x2F6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AD0u;
    // 0x2f6ad4: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x2F6AD0u, 0x2F6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AD8u;
label_2f6ad8:
    // 0x2f6ad8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6adc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2f6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2f6ae0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f6ae4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6ae8: 0x34450012  ori         $a1, $v0, 0x12
    ctx->pc = 0x2f6ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x2f6aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6af0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6af4: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f6af8: 0xc09565c  jal         func_255970
    ctx->pc = 0x2F6AF8u;
    SET_GPR_U32(ctx, 31, 0x2F6B00u);
    ctx->pc = 0x2F6AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AF8u;
    // 0x2f6afc: 0xa3a00049  sb          $zero, 0x49($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 73), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x2F6AF8u, 0x2F6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B00u;
label_2f6b00:
    // 0x2f6b00: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F6B00u;
    {
        const bool branch_taken_0x2f6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b00) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6B08u;
label_2f6b08:
    // 0x2f6b08: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6b0c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2F6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B14u);
    ctx->pc = 0x2F6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B0Cu;
    // 0x2f6b10: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2F6B0Cu, 0x2F6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B14u;
label_2f6b14:
    // 0x2f6b14: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2F6B14u;
    {
        const bool branch_taken_0x2f6b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b14) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6B1Cu;
    // 0x2f6b1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6b20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6b24: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x2F6B24u;
    SET_GPR_U32(ctx, 31, 0x2F6B2Cu);
    ctx->pc = 0x2F6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B24u;
    // 0x2f6b28: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x2F6B24u, 0x2F6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B2Cu;
label_2f6b2c:
    // 0x2f6b2c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6b30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2f6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2f6b34: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f6b38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6b3c: 0x34450013  ori         $a1, $v0, 0x13
    ctx->pc = 0x2f6b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    // 0x2f6b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6b48: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6b4c: 0xc09565c  jal         func_255970
    ctx->pc = 0x2F6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B54u);
    ctx->pc = 0x2F6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B4Cu;
    // 0x2f6b50: 0xa3a00039  sb          $zero, 0x39($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x2F6B4Cu, 0x2F6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B54u;
label_2f6b54:
    // 0x2f6b54: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2F6B54u;
    {
        const bool branch_taken_0x2f6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b54) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6B5Cu;
    // 0x2f6b5c: 0x0  nop
    ctx->pc = 0x2f6b5cu;
    // NOP
label_2f6b60:
    // 0x2f6b60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6b64: 0xc095150  jal         func_254540
    ctx->pc = 0x2F6B64u;
    SET_GPR_U32(ctx, 31, 0x2F6B6Cu);
    ctx->pc = 0x2F6B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B64u;
    // 0x2f6b68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x2F6B64u, 0x2F6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B6Cu;
label_2f6b6c:
    // 0x2f6b6c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2F6B6Cu;
    {
        const bool branch_taken_0x2f6b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b6c) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6B74u;
    // 0x2f6b74: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6b78: 0xc095154  jal         func_254550
    ctx->pc = 0x2F6B78u;
    SET_GPR_U32(ctx, 31, 0x2F6B80u);
    ctx->pc = 0x2F6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B78u;
    // 0x2f6b7c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x2F6B78u, 0x2F6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B80u;
label_2f6b80:
    // 0x2f6b80: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2f6b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f6b84: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2f6b84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2f6b88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6b8c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6B8Cu;
    {
        const bool branch_taken_0x2f6b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6b8c) {
            ctx->pc = 0x2F6BB0u;
            goto label_2f6bb0;
        }
    }
    ctx->pc = 0x2F6B94u;
    // 0x2f6b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6b98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6B98u;
    {
        const bool branch_taken_0x2f6b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6b98) {
            ctx->pc = 0x2F6BB0u;
            goto label_2f6bb0;
        }
    }
    ctx->pc = 0x2F6BA0u;
    // 0x2f6ba0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6ba4: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6ba8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F6BA8u;
    {
        const bool branch_taken_0x2f6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BA8u;
        // 0x2f6bac: 0xa200000d  sb          $zero, 0xD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ba8) {
            ctx->pc = 0x2F6C18u;
            goto label_2f6c18;
        }
    }
    ctx->pc = 0x2F6BB0u;
label_2f6bb0:
    // 0x2f6bb0: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x2F6BB0u;
    SET_GPR_U32(ctx, 31, 0x2F6BB8u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x2F6BB0u, 0x2F6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BB8u;
label_2f6bb8:
    // 0x2f6bb8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f6bbc: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F6BBCu;
    {
        const bool branch_taken_0x2f6bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6bbc) {
            ctx->pc = 0x2F6C08u;
            goto label_2f6c08;
        }
    }
    ctx->pc = 0x2F6BC4u;
    // 0x2f6bc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6bc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6bcc: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x2F6BCCu;
    SET_GPR_U32(ctx, 31, 0x2F6BD4u);
    ctx->pc = 0x2F6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BCCu;
    // 0x2f6bd0: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x2F6BCCu, 0x2F6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BD4u;
label_2f6bd4:
    // 0x2f6bd4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6bd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2f6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2f6bdc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f6be0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6be4: 0x34450013  ori         $a1, $v0, 0x13
    ctx->pc = 0x2f6be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    // 0x2f6be8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6bf0: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2f6bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6bf4: 0xc09565c  jal         func_255970
    ctx->pc = 0x2F6BF4u;
    SET_GPR_U32(ctx, 31, 0x2F6BFCu);
    ctx->pc = 0x2F6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BF4u;
    // 0x2f6bf8: 0xa3a00029  sb          $zero, 0x29($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x2F6BF4u, 0x2F6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BFCu;
label_2f6bfc:
    // 0x2f6bfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6BFCu;
    {
        const bool branch_taken_0x2f6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6bfc) {
            ctx->pc = 0x2F6C10u;
            goto label_2f6c10;
        }
    }
    ctx->pc = 0x2F6C04u;
    // 0x2f6c04: 0x0  nop
    ctx->pc = 0x2f6c04u;
    // NOP
label_2f6c08:
    // 0x2f6c08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6c0c: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_2f6c10:
    // 0x2f6c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6c14: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2f6c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2f6c18:
    // 0x2f6c18: 0x8203000c  lb          $v1, 0xC($s0)
    ctx->pc = 0x2f6c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6c1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6c20: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F6C20u;
    {
        const bool branch_taken_0x2f6c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6c20) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6C28u;
    // 0x2f6c28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6c2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6c30: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f6c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c40: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x2F6C40u;
    SET_GPR_U32(ctx, 31, 0x2F6C48u);
    ctx->pc = 0x2F6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C40u;
    // 0x2f6c44: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x2F6C40u, 0x2F6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C48u;
label_2f6c48:
    // 0x2f6c48: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2F6C48u;
    {
        const bool branch_taken_0x2f6c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c48) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6C50u;
label_2f6c50:
    // 0x2f6c50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6c54: 0xc095150  jal         func_254540
    ctx->pc = 0x2F6C54u;
    SET_GPR_U32(ctx, 31, 0x2F6C5Cu);
    ctx->pc = 0x2F6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C54u;
    // 0x2f6c58: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x2F6C54u, 0x2F6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C5Cu;
label_2f6c5c:
    // 0x2f6c5c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F6C5Cu;
    {
        const bool branch_taken_0x2f6c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c5c) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6C64u;
    // 0x2f6c64: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6c68: 0xc095154  jal         func_254550
    ctx->pc = 0x2F6C68u;
    SET_GPR_U32(ctx, 31, 0x2F6C70u);
    ctx->pc = 0x2F6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C68u;
    // 0x2f6c6c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x2F6C68u, 0x2F6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C70u;
label_2f6c70:
    // 0x2f6c70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f6c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f6c74: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2f6c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6c78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2f6c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2f6c7c: 0x10490014  beq         $v0, $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F6C7Cu;
    {
        const bool branch_taken_0x2f6c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f6c7c) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6C84u;
    // 0x2f6c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6c88: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6C88u;
    {
        const bool branch_taken_0x2f6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6c88) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6C90u;
    // 0x2f6c90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6C98u;
    // 0x2f6c98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F6C98u;
    {
        const bool branch_taken_0x2f6c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c98) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6CA0u;
label_2f6ca0:
    // 0x2f6ca0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6ca4: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6ca8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6cac: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f6cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f6cb0: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x2f6cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6cb4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6cc0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x2F6CC0u;
    SET_GPR_U32(ctx, 31, 0x2F6CC8u);
    ctx->pc = 0x2F6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CC0u;
    // 0x2f6cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x2F6CC0u, 0x2F6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CC8u;
label_2f6cc8:
    // 0x2f6cc8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F6CC8u;
    {
        const bool branch_taken_0x2f6cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cc8) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6CD0u;
label_2f6cd0:
    // 0x2f6cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6cd4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F6CD4u;
    {
        const bool branch_taken_0x2f6cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CD4u;
        // 0x2f6cd8: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cd4) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6CDCu;
    // 0x2f6cdc: 0x0  nop
    ctx->pc = 0x2f6cdcu;
    // NOP
label_2f6ce0:
    // 0x2f6ce0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6ce4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2F6CE4u;
    SET_GPR_U32(ctx, 31, 0x2F6CECu);
    ctx->pc = 0x2F6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CE4u;
    // 0x2f6ce8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2F6CE4u, 0x2F6CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CECu;
label_2f6cec:
    // 0x2f6cec: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F6CECu;
    {
        const bool branch_taken_0x2f6cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cec) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6CF4u;
    // 0x2f6cf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6cf8: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x2f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f6cfc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f6d00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f6d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f6d04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6d08: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x2f6d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2f6d0c: 0x8202000d  lb          $v0, 0xD($s0)
    ctx->pc = 0x2f6d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2f6d10: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F6D10u;
    {
        const bool branch_taken_0x2f6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d10) {
            ctx->pc = 0x2F6D50u;
            goto label_2f6d50;
        }
    }
    ctx->pc = 0x2F6D18u;
    // 0x2f6d18: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x2F6D18u;
    SET_GPR_U32(ctx, 31, 0x2F6D20u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x2F6D18u, 0x2F6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D20u;
label_2f6d20:
    // 0x2f6d20: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2f6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f6d24: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6D24u;
    {
        const bool branch_taken_0x2f6d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D24u;
        // 0x2f6d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d24) {
            ctx->pc = 0x2F6D38u;
            goto label_2f6d38;
        }
    }
    ctx->pc = 0x2F6D2Cu;
    // 0x2f6d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6D2Cu;
    {
        const bool branch_taken_0x2f6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D2Cu;
        // 0x2f6d30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d2c) {
            ctx->pc = 0x2F6D38u;
            goto label_2f6d38;
        }
    }
    ctx->pc = 0x2F6D34u;
    // 0x2f6d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6d38:
    // 0x2f6d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6d40: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6D40u;
    SET_GPR_U32(ctx, 31, 0x2F6D48u);
    ctx->pc = 0x2F6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D40u;
    // 0x2f6d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6D40u, 0x2F6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D48u;
label_2f6d48:
    // 0x2f6d48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F6D48u;
    {
        const bool branch_taken_0x2f6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d48) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6D50u;
label_2f6d50:
    // 0x2f6d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d54: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6D54u;
    SET_GPR_U32(ctx, 31, 0x2F6D5Cu);
    ctx->pc = 0x2F6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D54u;
    // 0x2f6d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6D54u, 0x2F6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D5Cu;
label_2f6d5c:
    // 0x2f6d5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F6D5Cu;
    {
        const bool branch_taken_0x2f6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d5c) {
            ctx->pc = 0x2F6D88u;
            goto label_2f6d88;
        }
    }
    ctx->pc = 0x2F6D64u;
    // 0x2f6d64: 0x0  nop
    ctx->pc = 0x2f6d64u;
    // NOP
label_2f6d68:
    // 0x2f6d68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6d6c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f6d70: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x2f6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f6d74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f6d78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f6d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f6d7c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F6D84u);
    ctx->pc = 0x2F6D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D7Cu;
    // 0x2f6d80: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6D7Cu, 0x2F6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D84u;
label_2f6d84:
    // 0x2f6d84: 0x0  nop
    ctx->pc = 0x2f6d84u;
    // NOP
label_2f6d88:
    // 0x2f6d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D94u;
        // 0x2f6d98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D9Cu;
}
