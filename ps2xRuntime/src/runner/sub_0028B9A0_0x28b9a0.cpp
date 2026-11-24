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

// Function: sub_0028B9A0
// Address: 0x28b9a0 - 0x28bd1c
void sub_0028B9A0_0x28b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B9A0_0x28b9a0");
#endif

    switch (ctx->pc) {
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba3cu: goto label_28ba3c;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba80u: goto label_28ba80;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baccu: goto label_28bacc;
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb90u: goto label_28bb90;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bc1cu: goto label_28bc1c;
        case 0x28bcbcu: goto label_28bcbc;
        case 0x28bce0u: goto label_28bce0;
        default: break;
    }

    ctx->pc = 0x28b9a0u;

    // 0x28b9a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x28b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x28b9a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28b9a8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28b9ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28b9b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28b9b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28b9b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28b9bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b9c0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28b9c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b9c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28b9c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28b9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b9dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28b9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28b9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9e4: 0x92a80002  lbu         $t0, 0x2($s5)
    ctx->pc = 0x28b9e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x28b9e8: 0x90c50008  lbu         $a1, 0x8($a2)
    ctx->pc = 0x28b9e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x28b9ec: 0x90c60009  lbu         $a2, 0x9($a2)
    ctx->pc = 0x28b9ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x28b9f0: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28B9F0u;
    SET_GPR_U32(ctx, 31, 0x28B9F8u);
    ctx->pc = 0x28B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9F0u;
    // 0x28b9f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28B9F0u, 0x28B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9F8u;
label_28b9f8:
    // 0x28b9f8: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x28b9f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x28b9fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28ba00: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28ba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28ba0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ba10: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28ba10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ba14: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28BA14u;
    SET_GPR_U32(ctx, 31, 0x28BA1Cu);
    ctx->pc = 0x28BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA14u;
    // 0x28ba18: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28BA14u, 0x28BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x28ba1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28ba20: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28BA20u;
    SET_GPR_U32(ctx, 31, 0x28BA28u);
    ctx->pc = 0x28BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA20u;
    // 0x28ba24: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28BA20u, 0x28BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA28u;
label_28ba28:
    // 0x28ba28: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x28ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28ba2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ba30: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x28ba34: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28BA34u;
    SET_GPR_U32(ctx, 31, 0x28BA3Cu);
    ctx->pc = 0x28BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA34u;
    // 0x28ba38: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28BA34u, 0x28BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA3Cu;
label_28ba3c:
    // 0x28ba3c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x28ba3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28ba40: 0x96a20036  lhu         $v0, 0x36($s5)
    ctx->pc = 0x28ba40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x28ba44: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x28BA44u;
    {
        const bool branch_taken_0x28ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba44) {
            ctx->pc = 0x28BB98u;
            goto label_28bb98;
        }
    }
    ctx->pc = 0x28BA4Cu;
    // 0x28ba4c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28ba50: 0xc0755cc  jal         func_1D5730
    ctx->pc = 0x28BA50u;
    SET_GPR_U32(ctx, 31, 0x28BA58u);
    ctx->pc = 0x28BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA50u;
    // 0x28ba54: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5730u, 0x28BA50u, 0x28BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA58u;
label_28ba58:
    // 0x28ba58: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x28ba58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x28ba5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28ba5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ba60: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x28BA60u;
    {
        const bool branch_taken_0x28ba60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA60u;
        // 0x28ba64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba60) {
            ctx->pc = 0x28BB88u;
            goto label_28bb88;
        }
    }
    ctx->pc = 0x28BA68u;
    // 0x28ba68: 0x11843c  dsll32      $s0, $s1, 16
    ctx->pc = 0x28ba68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 16));
    // 0x28ba6c: 0x27b60110  addiu       $s6, $sp, 0x110
    ctx->pc = 0x28ba6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28ba70: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x28ba70u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x28ba74: 0x27b100e4  addiu       $s1, $sp, 0xE4
    ctx->pc = 0x28ba74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x28ba78: 0x27b70114  addiu       $s7, $sp, 0x114
    ctx->pc = 0x28ba78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x28ba7c: 0x27be013c  addiu       $fp, $sp, 0x13C
    ctx->pc = 0x28ba7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_28ba80:
    // 0x28ba80: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x28ba80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x28ba84: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28ba88: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28BA88u;
    {
        const bool branch_taken_0x28ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ba88) {
            ctx->pc = 0x28BB70u;
            goto label_28bb70;
        }
    }
    ctx->pc = 0x28BA90u;
    // 0x28ba90: 0x92860024  lbu         $a2, 0x24($s4)
    ctx->pc = 0x28ba90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x28ba94: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x28BA94u;
    {
        const bool branch_taken_0x28ba94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA94u;
        // 0x28ba98: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba94) {
            ctx->pc = 0x28BAC0u;
            goto label_28bac0;
        }
    }
    ctx->pc = 0x28BA9Cu;
    // 0x28ba9c: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28BA9Cu;
    SET_GPR_U32(ctx, 31, 0x28BAA4u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28BA9Cu, 0x28BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAA4u;
label_28baa4:
    // 0x28baa4: 0x94460004  lhu         $a2, 0x4($v0)
    ctx->pc = 0x28baa4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28baa8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x28baa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28baac: 0x94470006  lhu         $a3, 0x6($v0)
    ctx->pc = 0x28baacu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28bab0: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x28bab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28bab4: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x28bab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x28bab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28BAB8u;
    {
        const bool branch_taken_0x28bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAB8u;
        // 0x28babc: 0xe34821  addu        $t1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bab8) {
            ctx->pc = 0x28BAE0u;
            goto label_28bae0;
        }
    }
    ctx->pc = 0x28BAC0u;
label_28bac0:
    // 0x28bac0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x28bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28bac4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28BAC4u;
    SET_GPR_U32(ctx, 31, 0x28BACCu);
    ctx->pc = 0x28BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAC4u;
    // 0x28bac8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28BAC4u, 0x28BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BACCu;
label_28bacc:
    // 0x28bacc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x28baccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28bad0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x28bad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28bad4: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28bad8: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x28bad8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28badc: 0x0  nop
    ctx->pc = 0x28badcu;
    // NOP
label_28bae0:
    // 0x28bae0: 0x7aa50060  lq          $a1, 0x60($s5)
    ctx->pc = 0x28bae0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x28bae4: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x28bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x28bae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28baec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28baecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28baf0: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x28baf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x28baf4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x28baf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x28baf8: 0x27ab0120  addiu       $t3, $sp, 0x120
    ctx->pc = 0x28baf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28bafc: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x28bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
    // 0x28bb00: 0x86850022  lh          $a1, 0x22($s4)
    ctx->pc = 0x28bb00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x28bb04: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x28bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x28bb08: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x28bb08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x28bb0c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x28bb0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x28bb10: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x28bb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x28bb14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x28bb14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x28bb18: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x28bb18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28bb1c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x28bb1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x28bb20: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x28bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x28bb24: 0x844d0008  lh          $t5, 0x8($v0)
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bb28: 0xc6910028  lwc1        $f17, 0x28($s4)
    ctx->pc = 0x28bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28bb2c: 0x844c000a  lh          $t4, 0xA($v0)
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28bb30: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28bb34: 0x9685002c  lhu         $a1, 0x2C($s4)
    ctx->pc = 0x28bb34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x28bb38: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x28bb38u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28bb3c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x28bb3cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bb40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28bb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28bb44: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x28bb44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x28bb48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28bb4c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x28bb4cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28bb50: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x28bb50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28bb54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bb54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bb5c: 0x0  nop
    ctx->pc = 0x28bb5cu;
    // NOP
    // 0x28bb60: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x28bb60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x28bb64: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x28bb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x28bb68: 0xc075604  jal         func_1D5810
    ctx->pc = 0x28BB68u;
    SET_GPR_U32(ctx, 31, 0x28BB70u);
    ctx->pc = 0x28BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB68u;
    // 0x28bb6c: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5810u, 0x28BB68u, 0x28BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB70u;
label_28bb70:
    // 0x28bb70: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x28bb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x28bb74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28bb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28bb78: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28bb7c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x28BB7Cu;
    {
        const bool branch_taken_0x28bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB7Cu;
        // 0x28bb80: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb7c) {
            ctx->pc = 0x28BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ba80;
        }
    }
    ctx->pc = 0x28BB84u;
    // 0x28bb84: 0x0  nop
    ctx->pc = 0x28bb84u;
    // NOP
label_28bb88:
    // 0x28bb88: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x28BB88u;
    SET_GPR_U32(ctx, 31, 0x28BB90u);
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x28BB88u, 0x28BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB90u;
label_28bb90:
    // 0x28bb90: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x28BB90u;
    {
        const bool branch_taken_0x28bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BB90u;
        // 0x28bb94: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb90) {
            ctx->pc = 0x28BCE8u;
            goto label_28bce8;
        }
    }
    ctx->pc = 0x28BB98u;
label_28bb98:
    // 0x28bb98: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x28bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28bb9c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28BB9Cu;
    SET_GPR_U32(ctx, 31, 0x28BBA4u);
    ctx->pc = 0x28BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB9Cu;
    // 0x28bba0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28BB9Cu, 0x28BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBA4u;
label_28bba4:
    // 0x28bba4: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x28bba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x28bba8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28bba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28bbac: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x28BBACu;
    {
        const bool branch_taken_0x28bbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBACu;
        // 0x28bbb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbac) {
            ctx->pc = 0x28BCD8u;
            goto label_28bcd8;
        }
    }
    ctx->pc = 0x28BBB4u;
    // 0x28bbb4: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x28bbb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x28bbb8: 0x27b200a4  addiu       $s2, $sp, 0xA4
    ctx->pc = 0x28bbb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28bbbc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x28bbbcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x28bbc0: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x28bbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28bbc4: 0x27b700d4  addiu       $s7, $sp, 0xD4
    ctx->pc = 0x28bbc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x28bbc8: 0x27be013c  addiu       $fp, $sp, 0x13C
    ctx->pc = 0x28bbc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x28bbcc: 0x0  nop
    ctx->pc = 0x28bbccu;
    // NOP
label_28bbd0:
    // 0x28bbd0: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x28bbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x28bbd4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28bbd8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28BBD8u;
    {
        const bool branch_taken_0x28bbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28bbd8) {
            ctx->pc = 0x28BCC0u;
            goto label_28bcc0;
        }
    }
    ctx->pc = 0x28BBE0u;
    // 0x28bbe0: 0x92860024  lbu         $a2, 0x24($s4)
    ctx->pc = 0x28bbe0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x28bbe4: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x28BBE4u;
    {
        const bool branch_taken_0x28bbe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBE4u;
        // 0x28bbe8: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbe4) {
            ctx->pc = 0x28BC10u;
            goto label_28bc10;
        }
    }
    ctx->pc = 0x28BBECu;
    // 0x28bbec: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28BBECu;
    SET_GPR_U32(ctx, 31, 0x28BBF4u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28BBECu, 0x28BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBF4u;
label_28bbf4:
    // 0x28bbf4: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x28bbf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bbf8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x28bbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bbfc: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x28bbfcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28bc00: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x28bc00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28bc04: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x28bc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28bc08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28BC08u;
    {
        const bool branch_taken_0x28bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC08u;
        // 0x28bc0c: 0xc34021  addu        $t0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc08) {
            ctx->pc = 0x28BC30u;
            goto label_28bc30;
        }
    }
    ctx->pc = 0x28BC10u;
label_28bc10:
    // 0x28bc10: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x28bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28bc14: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28BC14u;
    SET_GPR_U32(ctx, 31, 0x28BC1Cu);
    ctx->pc = 0x28BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC14u;
    // 0x28bc18: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28BC14u, 0x28BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC1Cu;
label_28bc1c:
    // 0x28bc1c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28bc20: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x28bc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28bc24: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x28bc24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28bc28: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x28bc28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28bc2c: 0x0  nop
    ctx->pc = 0x28bc2cu;
    // NOP
label_28bc30:
    // 0x28bc30: 0x7aab0060  lq          $t3, 0x60($s5)
    ctx->pc = 0x28bc30u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x28bc34: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x28bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x28bc38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28bc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bc3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bc40: 0x27a90130  addiu       $t1, $sp, 0x130
    ctx->pc = 0x28bc40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x28bc44: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x28bc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x28bc48: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x28bc48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28bc4c: 0x7fab0130  sq          $t3, 0x130($sp)
    ctx->pc = 0x28bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 11));
    // 0x28bc50: 0x868b0022  lh          $t3, 0x22($s4)
    ctx->pc = 0x28bc50u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x28bc54: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x28bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x28bc58: 0x1715818  mult        $t3, $t3, $s1
    ctx->pc = 0x28bc58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x28bc5c: 0xb5a03  sra         $t3, $t3, 8
    ctx->pc = 0x28bc5cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 8));
    // 0x28bc60: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x28bc60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x28bc64: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x28bc64u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x28bc68: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x28bc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28bc6c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x28bc6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x28bc70: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x28bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x28bc74: 0x844c0008  lh          $t4, 0x8($v0)
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bc78: 0xc6910028  lwc1        $f17, 0x28($s4)
    ctx->pc = 0x28bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28bc7c: 0x844b000a  lh          $t3, 0xA($v0)
    ctx->pc = 0x28bc7cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28bc80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x28bc80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28bc84: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28bc84u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28bc88: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x28bc88u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bc8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28bc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28bc90: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x28bc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x28bc94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28bc94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28bc98: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x28bc98u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28bc9c: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x28bc9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28bca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28bca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bca8: 0x0  nop
    ctx->pc = 0x28bca8u;
    // NOP
    // 0x28bcac: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x28bcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x28bcb0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x28bcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x28bcb4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28BCB4u;
    SET_GPR_U32(ctx, 31, 0x28BCBCu);
    ctx->pc = 0x28BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCB4u;
    // 0x28bcb8: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28BCB4u, 0x28BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCBCu;
label_28bcbc:
    // 0x28bcbc: 0x0  nop
    ctx->pc = 0x28bcbcu;
    // NOP
label_28bcc0:
    // 0x28bcc0: 0x92a20024  lbu         $v0, 0x24($s5)
    ctx->pc = 0x28bcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x28bcc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28bcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28bcc8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28bcc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28bccc: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x28BCCCu;
    {
        const bool branch_taken_0x28bccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCCCu;
        // 0x28bcd0: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bccc) {
            ctx->pc = 0x28BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bbd0;
        }
    }
    ctx->pc = 0x28BCD4u;
    // 0x28bcd4: 0x0  nop
    ctx->pc = 0x28bcd4u;
    // NOP
label_28bcd8:
    // 0x28bcd8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28BCD8u;
    SET_GPR_U32(ctx, 31, 0x28BCE0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28BCD8u, 0x28BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCE0u;
label_28bce0:
    // 0x28bce0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x28bce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28bce4: 0x0  nop
    ctx->pc = 0x28bce4u;
    // NOP
label_28bce8:
    // 0x28bce8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28bcf0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28bcf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28bcf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28bcf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28bcf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28bcf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28bcfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28bcfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bd00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28bd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bd04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28bd04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bd08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bd0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bd14: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD14u;
        // 0x28bd18: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BD1Cu;
}
