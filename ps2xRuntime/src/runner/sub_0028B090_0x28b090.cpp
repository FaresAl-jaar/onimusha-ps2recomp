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

// Function: sub_0028B090
// Address: 0x28b090 - 0x28b2b8
void sub_0028B090_0x28b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B090_0x28b090");
#endif

    switch (ctx->pc) {
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b118u: goto label_28b118;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b168u: goto label_28b168;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b260u: goto label_28b260;
        case 0x28b280u: goto label_28b280;
        default: break;
    }

    ctx->pc = 0x28b090u;

    // 0x28b090: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x28b094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28b098: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b09c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28b0a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28b0a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28b0a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28b0ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b0b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28b0b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b0b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28b0b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b0c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28b0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b0cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28b0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0d0: 0x90c50004  lbu         $a1, 0x4($a2)
    ctx->pc = 0x28b0d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28b0d4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28b0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0d8: 0x92a80010  lbu         $t0, 0x10($s5)
    ctx->pc = 0x28b0d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x28b0dc: 0x90c60005  lbu         $a2, 0x5($a2)
    ctx->pc = 0x28b0dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x28b0e0: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x28B0E0u;
    SET_GPR_U32(ctx, 31, 0x28B0E8u);
    ctx->pc = 0x28B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0E0u;
    // 0x28b0e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x28B0E0u, 0x28B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0E8u;
label_28b0e8:
    // 0x28b0e8: 0x92a30011  lbu         $v1, 0x11($s5)
    ctx->pc = 0x28b0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
    // 0x28b0ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x28b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x28b0f0: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x28b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x28b0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28b0fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28b100: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28b100u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b104: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28B104u;
    SET_GPR_U32(ctx, 31, 0x28B10Cu);
    ctx->pc = 0x28B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B104u;
    // 0x28b108: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28B104u, 0x28B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B10Cu;
label_28b10c:
    // 0x28b10c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28b10cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28b110: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x28B110u;
    SET_GPR_U32(ctx, 31, 0x28B118u);
    ctx->pc = 0x28B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B110u;
    // 0x28b114: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x28B110u, 0x28B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B118u;
label_28b118:
    // 0x28b118: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x28b11c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x28b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28b120: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x28b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x28b124: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28B124u;
    SET_GPR_U32(ctx, 31, 0x28B12Cu);
    ctx->pc = 0x28B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B124u;
    // 0x28b128: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28B124u, 0x28B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B12Cu;
label_28b12c:
    // 0x28b12c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28b12cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28b130: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x28b134: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28B134u;
    SET_GPR_U32(ctx, 31, 0x28B13Cu);
    ctx->pc = 0x28B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B134u;
    // 0x28b138: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28B134u, 0x28B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B13Cu;
label_28b13c:
    // 0x28b13c: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x28b13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x28b140: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28b140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b144: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x28B144u;
    {
        const bool branch_taken_0x28b144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B144u;
        // 0x28b148: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b144) {
            ctx->pc = 0x28B278u;
            goto label_28b278;
        }
    }
    ctx->pc = 0x28B14Cu;
    // 0x28b14c: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x28b14cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28b150: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x28b150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28b154: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x28b154u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x28b158: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28b15c: 0x27b700d4  addiu       $s7, $sp, 0xD4
    ctx->pc = 0x28b15cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x28b160: 0x27be00fc  addiu       $fp, $sp, 0xFC
    ctx->pc = 0x28b160u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x28b164: 0x0  nop
    ctx->pc = 0x28b164u;
    // NOP
label_28b168:
    // 0x28b168: 0x86830020  lh          $v1, 0x20($s4)
    ctx->pc = 0x28b168u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x28b16c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28b170: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28B170u;
    {
        const bool branch_taken_0x28b170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b170) {
            ctx->pc = 0x28B260u;
            goto label_28b260;
        }
    }
    ctx->pc = 0x28B178u;
    // 0x28b178: 0x92860024  lbu         $a2, 0x24($s4)
    ctx->pc = 0x28b178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x28b17c: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x28B17Cu;
    {
        const bool branch_taken_0x28b17c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B17Cu;
        // 0x28b180: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b17c) {
            ctx->pc = 0x28B1A8u;
            goto label_28b1a8;
        }
    }
    ctx->pc = 0x28B184u;
    // 0x28b184: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28B184u;
    SET_GPR_U32(ctx, 31, 0x28B18Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28B184u, 0x28B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B18Cu;
label_28b18c:
    // 0x28b18c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x28b18cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28b190: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28b194: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x28b194u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x28b198: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28b19c: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28b1a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28B1A0u;
    {
        const bool branch_taken_0x28b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1A0u;
        // 0x28b1a4: 0xc34021  addu        $t0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1a0) {
            ctx->pc = 0x28B1C8u;
            goto label_28b1c8;
        }
    }
    ctx->pc = 0x28B1A8u;
label_28b1a8:
    // 0x28b1a8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x28b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28b1ac: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28B1ACu;
    SET_GPR_U32(ctx, 31, 0x28B1B4u);
    ctx->pc = 0x28B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1ACu;
    // 0x28b1b0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28B1ACu, 0x28B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B4u;
label_28b1b4:
    // 0x28b1b4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b1b8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b1bc: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28b1c0: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28b1c4: 0x0  nop
    ctx->pc = 0x28b1c4u;
    // NOP
label_28b1c8:
    // 0x28b1c8: 0x7aab0030  lq          $t3, 0x30($s5)
    ctx->pc = 0x28b1c8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x28b1cc: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x28b1d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b1d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b1d8: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x28b1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28b1dc: 0x27aa00e0  addiu       $t2, $sp, 0xE0
    ctx->pc = 0x28b1dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b1e0: 0x7fab00f0  sq          $t3, 0xF0($sp)
    ctx->pc = 0x28b1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 11));
    // 0x28b1e4: 0x868b0022  lh          $t3, 0x22($s4)
    ctx->pc = 0x28b1e4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x28b1e8: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x28b1ec: 0x1705818  mult        $t3, $t3, $s0
    ctx->pc = 0x28b1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x28b1f0: 0xb5a03  sra         $t3, $t3, 8
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 8));
    // 0x28b1f4: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x28b1f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x28b1f8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x28b1f8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x28b1fc: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x28b1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28b200: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x28b200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x28b204: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x28b204u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x28b208: 0x844c000a  lh          $t4, 0xA($v0)
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28b20c: 0xc6910028  lwc1        $f17, 0x28($s4)
    ctx->pc = 0x28b20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x28b210: 0x844d0008  lh          $t5, 0x8($v0)
    ctx->pc = 0x28b210u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28b214: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x28b214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x28b218: 0x844b0000  lh          $t3, 0x0($v0)
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b21c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x28b21cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b220: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x28b220u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28b224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28b224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28b228: 0x86a20014  lh          $v0, 0x14($s5)
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x28b22c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x28b22cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28b230: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28b230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28b234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b238: 0x0  nop
    ctx->pc = 0x28b238u;
    // NOP
    // 0x28b23c: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x28b23cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28b240: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x28b240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x28b244: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x28b244u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28b248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b24c: 0x0  nop
    ctx->pc = 0x28b24cu;
    // NOP
    // 0x28b250: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x28b250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x28b254: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x28b254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x28b258: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x28B258u;
    SET_GPR_U32(ctx, 31, 0x28B260u);
    ctx->pc = 0x28B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B258u;
    // 0x28b25c: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x28B258u, 0x28B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B260u;
label_28b260:
    // 0x28b260: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x28b260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x28b264: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28b264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28b268: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x28b268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b26c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x28B26Cu;
    {
        const bool branch_taken_0x28b26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B26Cu;
        // 0x28b270: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b26c) {
            ctx->pc = 0x28B168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b168;
        }
    }
    ctx->pc = 0x28B274u;
    // 0x28b274: 0x0  nop
    ctx->pc = 0x28b274u;
    // NOP
label_28b278:
    // 0x28b278: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x28B278u;
    SET_GPR_U32(ctx, 31, 0x28B280u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x28B278u, 0x28B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B280u;
label_28b280:
    // 0x28b280: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28b284: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28b284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b288: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28b288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b28c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28b28cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b290: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28b290u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b294: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28b294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28b298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b29c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b29cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b2a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2B0u;
        // 0x28b2b4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B2B8u;
}
