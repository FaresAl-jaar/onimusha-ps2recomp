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

// Function: sub_001EDEA0
// Address: 0x1edea0 - 0x1ee158
void sub_001EDEA0_0x1edea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDEA0_0x1edea0");
#endif

    switch (ctx->pc) {
        case 0x1edf08u: goto label_1edf08;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf3cu: goto label_1edf3c;
        case 0x1edf6cu: goto label_1edf6c;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edfa4u: goto label_1edfa4;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee124u: goto label_1ee124;
        default: break;
    }

    ctx->pc = 0x1edea0u;

    // 0x1edea0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1edea4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1edea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1edea8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1edea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1edeac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1edeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1edeb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1edeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1edeb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1edeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1edeb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1edeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1edebc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1edebcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edec0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1edec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1edec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1edec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1edec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1edecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eded0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eded4: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1eded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1eded8: 0xa7a800aa  sh          $t0, 0xAA($sp)
    ctx->pc = 0x1eded8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ededc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edee0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDEE0u;
    {
        const bool branch_taken_0x1edee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEE0u;
        // 0x1edee4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edee0) {
            ctx->pc = 0x1EDEF0u;
            goto label_1edef0;
        }
    }
    ctx->pc = 0x1EDEE8u;
    // 0x1edee8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1EDEE8u;
    {
        const bool branch_taken_0x1edee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEE8u;
        // 0x1edeec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edee8) {
            ctx->pc = 0x1EE128u;
            goto label_1ee128;
        }
    }
    ctx->pc = 0x1EDEF0u;
label_1edef0:
    // 0x1edef0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDEF0u;
    {
        const bool branch_taken_0x1edef0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEF0u;
        // 0x1edef4: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edef0) {
            ctx->pc = 0x1EDF00u;
            goto label_1edf00;
        }
    }
    ctx->pc = 0x1EDEF8u;
    // 0x1edef8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDEF8u;
    {
        const bool branch_taken_0x1edef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEF8u;
        // 0x1edefc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edef8) {
            ctx->pc = 0x1EDF10u;
            goto label_1edf10;
        }
    }
    ctx->pc = 0x1EDF00u;
label_1edf00:
    // 0x1edf00: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EDF00u;
    SET_GPR_U32(ctx, 31, 0x1EDF08u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EDF00u, 0x1EDF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF08u;
label_1edf08:
    // 0x1edf08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1edf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edf10:
    // 0x1edf10: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1edf10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1edf14: 0x92a60035  lbu         $a2, 0x35($s5)
    ctx->pc = 0x1edf14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1edf18: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1edf1c: 0x92a80043  lbu         $t0, 0x43($s5)
    ctx->pc = 0x1edf1cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 67)));
    // 0x1edf20: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EDF20u;
    SET_GPR_U32(ctx, 31, 0x1EDF28u);
    ctx->pc = 0x1EDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF20u;
    // 0x1edf24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EDF20u, 0x1EDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF28u;
label_1edf28:
    // 0x1edf28: 0x92a60042  lbu         $a2, 0x42($s5)
    ctx->pc = 0x1edf28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x1edf2c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EDF2Cu;
    {
        const bool branch_taken_0x1edf2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF2Cu;
        // 0x1edf30: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf2c) {
            ctx->pc = 0x1EDF60u;
            goto label_1edf60;
        }
    }
    ctx->pc = 0x1EDF34u;
    // 0x1edf34: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1EDF34u;
    SET_GPR_U32(ctx, 31, 0x1EDF3Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EDF34u, 0x1EDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF3Cu;
label_1edf3c:
    // 0x1edf3c: 0x94540004  lhu         $s4, 0x4($v0)
    ctx->pc = 0x1edf3cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1edf40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1edf40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf44: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1edf44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1edf48: 0x94530006  lhu         $s3, 0x6($v0)
    ctx->pc = 0x1edf48u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1edf4c: 0x283b821  addu        $s7, $s4, $v1
    ctx->pc = 0x1edf4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1edf50: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1edf54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EDF54u;
    {
        const bool branch_taken_0x1edf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF54u;
        // 0x1edf58: 0x262f021  addu        $fp, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf54) {
            ctx->pc = 0x1EDF80u;
            goto label_1edf80;
        }
    }
    ctx->pc = 0x1EDF5Cu;
    // 0x1edf5c: 0x0  nop
    ctx->pc = 0x1edf5cu;
    // NOP
label_1edf60:
    // 0x1edf60: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1edf64: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1EDF64u;
    SET_GPR_U32(ctx, 31, 0x1EDF6Cu);
    ctx->pc = 0x1EDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF64u;
    // 0x1edf68: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1EDF64u, 0x1EDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF6Cu;
label_1edf6c:
    // 0x1edf6c: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1edf70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1edf70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf74: 0x8fb300b4  lw          $s3, 0xB4($sp)
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1edf78: 0x8fb700e0  lw          $s7, 0xE0($sp)
    ctx->pc = 0x1edf78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1edf7c: 0x8fbe00e4  lw          $fp, 0xE4($sp)
    ctx->pc = 0x1edf7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1edf80:
    // 0x1edf80: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1edf84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1edf88: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EDF88u;
    SET_GPR_U32(ctx, 31, 0x1EDF90u);
    ctx->pc = 0x1EDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF88u;
    // 0x1edf8c: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EDF88u, 0x1EDF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF90u;
label_1edf90:
    // 0x1edf90: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1edf90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1edf94: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1edf98: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1edf9c: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDFA4u);
    ctx->pc = 0x1EDFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF9Cu;
    // 0x1edfa0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EDF9Cu, 0x1EDFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFA4u;
label_1edfa4:
    // 0x1edfa4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1edfa8: 0x7aa50050  lq          $a1, 0x50($s5)
    ctx->pc = 0x1edfa8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1edfac: 0x87a200aa  lh          $v0, 0xAA($sp)
    ctx->pc = 0x1edfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x1edfb0: 0x27a6010c  addiu       $a2, $sp, 0x10C
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1edfb4: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x1edfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x1edfb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1edfb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfbc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1edfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1edfc0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1edfc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1edfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1edfc8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1edfc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1edfcc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1edfd0: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x1EDFD0u;
    SET_GPR_U32(ctx, 31, 0x1EDFD8u);
    ctx->pc = 0x1EDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFD0u;
    // 0x1edfd4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x1EDFD0u, 0x1EDFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFD8u;
label_1edfd8:
    // 0x1edfd8: 0x92a20044  lbu         $v0, 0x44($s5)
    ctx->pc = 0x1edfd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1edfdc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EDFDCu;
    {
        const bool branch_taken_0x1edfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edfdc) {
            ctx->pc = 0x1EE068u;
            goto label_1ee068;
        }
    }
    ctx->pc = 0x1EDFE4u;
    // 0x1edfe4: 0x864c000a  lh          $t4, 0xA($s2)
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1edfe8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1edfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1edfec: 0x864d0008  lh          $t5, 0x8($s2)
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1edff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1edff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1edff4: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1edff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1edff8: 0xc6b10038  lwc1        $f17, 0x38($s5)
    ctx->pc = 0x1edff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1edffc: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x1edffcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee000: 0xc6b2003c  lwc1        $f18, 0x3C($s5)
    ctx->pc = 0x1ee000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1ee004: 0x86a20040  lh          $v0, 0x40($s5)
    ctx->pc = 0x1ee004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1ee008: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee00c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ee00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee010: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ee010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee014: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1ee014u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee018: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ee018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee01c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1ee01cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee020: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ee024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ee028: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x1ee028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ee02c: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ee030: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1ee030u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee034: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ee034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ee038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee03c: 0x0  nop
    ctx->pc = 0x1ee03cu;
    // NOP
    // 0x1ee040: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1ee040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ee044: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1ee044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1ee048: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ee048u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee050: 0x0  nop
    ctx->pc = 0x1ee050u;
    // NOP
    // 0x1ee054: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1ee054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1ee058: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x1EE058u;
    SET_GPR_U32(ctx, 31, 0x1EE060u);
    ctx->pc = 0x1EE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE058u;
    // 0x1ee05c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x1EE058u, 0x1EE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE060u;
label_1ee060:
    // 0x1ee060: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1EE060u;
    {
        const bool branch_taken_0x1ee060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee060) {
            ctx->pc = 0x1EE0E8u;
            goto label_1ee0e8;
        }
    }
    ctx->pc = 0x1EE068u;
label_1ee068:
    // 0x1ee068: 0x864c000a  lh          $t4, 0xA($s2)
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1ee06c: 0x864d0008  lh          $t5, 0x8($s2)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ee070: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1ee074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee078: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1ee078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ee07c: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x1ee07cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee080: 0xc6b10038  lwc1        $f17, 0x38($s5)
    ctx->pc = 0x1ee080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1ee084: 0x86a20040  lh          $v0, 0x40($s5)
    ctx->pc = 0x1ee084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1ee088: 0xc6b2003c  lwc1        $f18, 0x3C($s5)
    ctx->pc = 0x1ee088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1ee08c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee090: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ee090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee094: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1ee094u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee098: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ee098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee09c: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x1ee09cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ee0a0: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ee0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ee0a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ee0ac: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x1ee0acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ee0b0: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ee0b4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1ee0b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee0b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ee0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ee0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee0c0: 0x0  nop
    ctx->pc = 0x1ee0c0u;
    // NOP
    // 0x1ee0c4: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1ee0c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ee0c8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1ee0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1ee0cc: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1ee0ccu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee0d4: 0x0  nop
    ctx->pc = 0x1ee0d4u;
    // NOP
    // 0x1ee0d8: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1ee0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1ee0dc: 0xc075550  jal         func_1D5540
    ctx->pc = 0x1EE0DCu;
    SET_GPR_U32(ctx, 31, 0x1EE0E4u);
    ctx->pc = 0x1EE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE0DCu;
    // 0x1ee0e0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5540u, 0x1EE0DCu, 0x1EE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0E4u;
label_1ee0e4:
    // 0x1ee0e4: 0x0  nop
    ctx->pc = 0x1ee0e4u;
    // NOP
label_1ee0e8:
    // 0x1ee0e8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x1EE0E8u;
    SET_GPR_U32(ctx, 31, 0x1EE0F0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x1EE0E8u, 0x1EE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0F0u;
label_1ee0f0:
    // 0x1ee0f0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE0F0u;
    {
        const bool branch_taken_0x1ee0f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F0u;
        // 0x1ee0f4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f0) {
            ctx->pc = 0x1EE100u;
            goto label_1ee100;
        }
    }
    ctx->pc = 0x1EE0F8u;
    // 0x1ee0f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EE0F8u;
    {
        const bool branch_taken_0x1ee0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0F8u;
        // 0x1ee0fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f8) {
            ctx->pc = 0x1EE128u;
            goto label_1ee128;
        }
    }
    ctx->pc = 0x1EE100u;
label_1ee100:
    // 0x1ee100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee104: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EE104u;
    SET_GPR_U32(ctx, 31, 0x1EE10Cu);
    ctx->pc = 0x1EE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE104u;
    // 0x1ee108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EE104u, 0x1EE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE10Cu;
label_1ee10c:
    // 0x1ee10c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ee110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee114: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1ee118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee11c: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EE11Cu;
    SET_GPR_U32(ctx, 31, 0x1EE124u);
    ctx->pc = 0x1EE120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE11Cu;
    // 0x1ee120: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EE11Cu, 0x1EE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE124u;
label_1ee124:
    // 0x1ee124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee128:
    // 0x1ee128: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ee128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ee12c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ee12cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee130: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee130u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee134: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee138: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee138u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee13c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee150: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE150u;
        // 0x1ee154: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE158u;
}
