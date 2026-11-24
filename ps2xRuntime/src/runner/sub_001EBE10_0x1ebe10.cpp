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

// Function: sub_001EBE10
// Address: 0x1ebe10 - 0x1ec248
void sub_001EBE10_0x1ebe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE10_0x1ebe10");
#endif

    switch (ctx->pc) {
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebfd8u: goto label_1ebfd8;
        case 0x1ebfecu: goto label_1ebfec;
        case 0x1ec000u: goto label_1ec000;
        case 0x1ec014u: goto label_1ec014;
        case 0x1ec028u: goto label_1ec028;
        case 0x1ec058u: goto label_1ec058;
        case 0x1ec084u: goto label_1ec084;
        case 0x1ec0d4u: goto label_1ec0d4;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec158u: goto label_1ec158;
        case 0x1ec184u: goto label_1ec184;
        case 0x1ec1c8u: goto label_1ec1c8;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec218u: goto label_1ec218;
        default: break;
    }

    ctx->pc = 0x1ebe10u;

    // 0x1ebe10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ebe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ebe14: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ebe18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ebe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ebe1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ebe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ebe20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ebe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ebe24: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ebe24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ebe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ebe2c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1ebe2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ebe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ebe34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ebe38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ebe3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebe40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebe40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe44: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ebe44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebe48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE48u;
    {
        const bool branch_taken_0x1ebe48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE48u;
        // 0x1ebe4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe48) {
            ctx->pc = 0x1EBE58u;
            goto label_1ebe58;
        }
    }
    ctx->pc = 0x1EBE50u;
    // 0x1ebe50: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1EBE50u;
    {
        const bool branch_taken_0x1ebe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE50u;
        // 0x1ebe54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe50) {
            ctx->pc = 0x1EC220u;
            goto label_1ec220;
        }
    }
    ctx->pc = 0x1EBE58u;
label_1ebe58:
    // 0x1ebe58: 0x8622008a  lh          $v0, 0x8A($s1)
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x1ebe5c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ebe5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ebe60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE60u;
    {
        const bool branch_taken_0x1ebe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE60u;
        // 0x1ebe64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe60) {
            ctx->pc = 0x1EBE70u;
            goto label_1ebe70;
        }
    }
    ctx->pc = 0x1EBE68u;
    // 0x1ebe68: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1EBE68u;
    {
        const bool branch_taken_0x1ebe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe68) {
            ctx->pc = 0x1EC220u;
            goto label_1ec220;
        }
    }
    ctx->pc = 0x1EBE70u;
label_1ebe70:
    // 0x1ebe70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE70u;
    {
        const bool branch_taken_0x1ebe70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE70u;
        // 0x1ebe74: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe70) {
            ctx->pc = 0x1EBE80u;
            goto label_1ebe80;
        }
    }
    ctx->pc = 0x1EBE78u;
    // 0x1ebe78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBE78u;
    {
        const bool branch_taken_0x1ebe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE78u;
        // 0x1ebe7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe78) {
            ctx->pc = 0x1EBE90u;
            goto label_1ebe90;
        }
    }
    ctx->pc = 0x1EBE80u;
label_1ebe80:
    // 0x1ebe80: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1EBE80u;
    SET_GPR_U32(ctx, 31, 0x1EBE88u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1EBE80u, 0x1EBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE88u;
label_1ebe88:
    // 0x1ebe88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ebe88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ebe8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe90:
    // 0x1ebe90: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1ebe90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ebe94: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1ebe94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1ebe98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ebe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ebe9c: 0x92280036  lbu         $t0, 0x36($s1)
    ctx->pc = 0x1ebe9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1ebea0: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1EBEA0u;
    SET_GPR_U32(ctx, 31, 0x1EBEA8u);
    ctx->pc = 0x1EBEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEA0u;
    // 0x1ebea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1EBEA0u, 0x1EBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEA8u;
label_1ebea8:
    // 0x1ebea8: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1EBEA8u;
    SET_GPR_U32(ctx, 31, 0x1EBEB0u);
    ctx->pc = 0x1EBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEA8u;
    // 0x1ebeac: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1EBEA8u, 0x1EBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEB0u;
label_1ebeb0:
    // 0x1ebeb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebeb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebeb4: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1EBEB4u;
    SET_GPR_U32(ctx, 31, 0x1EBEBCu);
    ctx->pc = 0x1EBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEB4u;
    // 0x1ebeb8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1EBEB4u, 0x1EBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEBCu;
label_1ebebc:
    // 0x1ebebc: 0x92280032  lbu         $t0, 0x32($s1)
    ctx->pc = 0x1ebebcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1ebec0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ebec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebec4: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1ebec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1ebec8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebecc: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1EBECCu;
    SET_GPR_U32(ctx, 31, 0x1EBED4u);
    ctx->pc = 0x1EBED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBECCu;
    // 0x1ebed0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1EBECCu, 0x1EBED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBED4u;
label_1ebed4:
    // 0x1ebed4: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x1ebed4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1ebed8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebedc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebee0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ebee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ebee4: 0x152c3c  dsll32      $a1, $s5, 16
    ctx->pc = 0x1ebee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1ebee8: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ebee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ebeec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ebeecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ebef0: 0x7c230040  sq          $v1, 0x40($at)
    ctx->pc = 0x1ebef0u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 3));
    // 0x1ebef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebef8: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1ebef8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1ebefc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1ebefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ebf00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf04: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ebf04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ebf08: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1ebf08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1ebf0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf10: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x1ebf10u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x1ebf14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf18: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1ebf18u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1ebf1c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1ebf20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf24: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1ebf24u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1ebf28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf2c: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1ebf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1ebf30: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1ebf30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ebf34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf38: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ebf38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ebf3c: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1ebf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1ebf40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf44: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x1ebf44u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x1ebf48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf4c: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1ebf4cu;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1ebf50: 0x92250031  lbu         $a1, 0x31($s1)
    ctx->pc = 0x1ebf50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1ebf54: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EBF54u;
    SET_GPR_U32(ctx, 31, 0x1EBF5Cu);
    ctx->pc = 0x1EBF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF54u;
    // 0x1ebf58: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EBF54u, 0x1EBF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF5Cu;
label_1ebf5c:
    // 0x1ebf5c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ebf60: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1ebf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ebf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebf68: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBF68u;
    {
        const bool branch_taken_0x1ebf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf68) {
            ctx->pc = 0x1EC030u;
            goto label_1ec030;
        }
    }
    ctx->pc = 0x1EBF70u;
    // 0x1ebf70: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x1ebf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebf78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ebf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ebf7c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebf80: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ebf84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ebf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf88: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x1ebf88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ebf8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ebf8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebf90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf94: 0x0  nop
    ctx->pc = 0x1ebf94u;
    // NOP
    // 0x1ebf98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebf98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebf9c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ebf9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ebfa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ebfa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ebfa4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ebfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ebfa8: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x1ebfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebfac: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1ebfb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ebfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ebfb4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ebfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ebfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfbc: 0x0  nop
    ctx->pc = 0x1ebfbcu;
    // NOP
    // 0x1ebfc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebfc4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ebfc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ebfc8: 0x0  nop
    ctx->pc = 0x1ebfc8u;
    // NOP
    // 0x1ebfcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ebfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ebfd0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EBFD0u;
    SET_GPR_U32(ctx, 31, 0x1EBFD8u);
    ctx->pc = 0x1EBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFD0u;
    // 0x1ebfd4: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EBFD0u, 0x1EBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFD8u;
label_1ebfd8:
    // 0x1ebfd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ebfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebfdc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ebfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ebfe0: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ebfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ebfe4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EBFE4u;
    SET_GPR_U32(ctx, 31, 0x1EBFECu);
    ctx->pc = 0x1EBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFE4u;
    // 0x1ebfe8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EBFE4u, 0x1EBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFECu;
label_1ebfec:
    // 0x1ebfec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ebfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebff0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ebff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ebff4: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ebff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ebff8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EBFF8u;
    SET_GPR_U32(ctx, 31, 0x1EC000u);
    ctx->pc = 0x1EBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFF8u;
    // 0x1ebffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EBFF8u, 0x1EC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC000u;
label_1ec000:
    // 0x1ec000: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec004: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ec004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ec008: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ec008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ec00c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EC00Cu;
    SET_GPR_U32(ctx, 31, 0x1EC014u);
    ctx->pc = 0x1EC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC00Cu;
    // 0x1ec010: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EC00Cu, 0x1EC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC014u;
label_1ec014:
    // 0x1ec014: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ec014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ec018: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec01c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ec01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec020: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EC020u;
    SET_GPR_U32(ctx, 31, 0x1EC028u);
    ctx->pc = 0x1EC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC020u;
    // 0x1ec024: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EC020u, 0x1EC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC028u;
label_1ec028:
    // 0x1ec028: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec02c: 0x0  nop
    ctx->pc = 0x1ec02cu;
    // NOP
label_1ec030:
    // 0x1ec030: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1ec030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ec034: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ec034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ec038: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EC038u;
    {
        const bool branch_taken_0x1ec038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec038) {
            ctx->pc = 0x1EC120u;
            goto label_1ec120;
        }
    }
    ctx->pc = 0x1EC040u;
    // 0x1ec040: 0x8623008a  lh          $v1, 0x8A($s1)
    ctx->pc = 0x1ec040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x1ec044: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ec044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ec048: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC048u;
    {
        const bool branch_taken_0x1ec048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC048u;
        // 0x1ec04c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec048) {
            ctx->pc = 0x1EC098u;
            goto label_1ec098;
        }
    }
    ctx->pc = 0x1EC050u;
    // 0x1ec050: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ec050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec054: 0x34520080  ori         $s2, $v0, 0x80
    ctx->pc = 0x1ec054u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ec058:
    // 0x1ec058: 0x86260088  lh          $a2, 0x88($s1)
    ctx->pc = 0x1ec058u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1ec05c: 0x8623008e  lh          $v1, 0x8E($s1)
    ctx->pc = 0x1ec05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
    // 0x1ec060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec064: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1ec064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ec068: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ec068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec06c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ec070: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x1ec070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1ec074: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ec074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ec078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec07c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1EC07Cu;
    SET_GPR_U32(ctx, 31, 0x1EC084u);
    ctx->pc = 0x1EC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC07Cu;
    // 0x1ec080: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1EC07Cu, 0x1EC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC084u;
label_1ec084:
    // 0x1ec084: 0x8623008a  lh          $v1, 0x8A($s1)
    ctx->pc = 0x1ec084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x1ec088: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ec08c: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1ec08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ec090: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EC090u;
    {
        const bool branch_taken_0x1ec090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC090u;
        // 0x1ec094: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec090) {
            ctx->pc = 0x1EC058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec058;
        }
    }
    ctx->pc = 0x1EC098u;
label_1ec098:
    // 0x1ec098: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x1ec098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x1ec09c: 0x92290049  lbu         $t1, 0x49($s1)
    ctx->pc = 0x1ec09cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x1ec0a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec0a4: 0x1449000e  bne         $v0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0E0u;
            goto label_1ec0e0;
        }
    }
    ctx->pc = 0x1EC0ACu;
    // 0x1ec0ac: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x1ec0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec0b0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec0b4: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x1ec0b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec0b8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ec0bc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1ec0bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1ec0c0: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ec0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec0c4: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec0c8: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec0c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec0cc: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1EC0CCu;
    SET_GPR_U32(ctx, 31, 0x1EC0D4u);
    ctx->pc = 0x1EC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC0CCu;
    // 0x1ec0d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1EC0CCu, 0x1EC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0D4u;
label_1ec0d4:
    // 0x1ec0d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EC0D4u;
    {
        const bool branch_taken_0x1ec0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC0D4u;
        // 0x1ec0d8: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0d4) {
            ctx->pc = 0x1EC110u;
            goto label_1ec110;
        }
    }
    ctx->pc = 0x1EC0DCu;
    // 0x1ec0dc: 0x0  nop
    ctx->pc = 0x1ec0dcu;
    // NOP
label_1ec0e0:
    // 0x1ec0e0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec0e4: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x1ec0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec0e8: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x1ec0e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec0ec: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ec0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ec0f0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1ec0f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1ec0f4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ec0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec0f8: 0x34c50080  ori         $a1, $a2, 0x80
    ctx->pc = 0x1ec0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1ec0fc: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec0fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec100: 0xc075a18  jal         func_1D6860
    ctx->pc = 0x1EC100u;
    SET_GPR_U32(ctx, 31, 0x1EC108u);
    ctx->pc = 0x1EC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC100u;
    // 0x1ec104: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6860u, 0x1EC100u, 0x1EC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC108u;
label_1ec108:
    // 0x1ec108: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ec108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec10c: 0x0  nop
    ctx->pc = 0x1ec10cu;
    // NOP
label_1ec110:
    // 0x1ec110: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec114: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x1ec114u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x1ec118: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1EC118u;
    {
        const bool branch_taken_0x1ec118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC118u;
        // 0x1ec11c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec118) {
            ctx->pc = 0x1EC1B0u;
            goto label_1ec1b0;
        }
    }
    ctx->pc = 0x1EC120u;
label_1ec120:
    // 0x1ec120: 0x92220033  lbu         $v0, 0x33($s1)
    ctx->pc = 0x1ec120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x1ec124: 0x92290049  lbu         $t1, 0x49($s1)
    ctx->pc = 0x1ec124u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x1ec128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec12c: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC12Cu;
    {
        const bool branch_taken_0x1ec12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ec12c) {
            ctx->pc = 0x1EC160u;
            goto label_1ec160;
        }
    }
    ctx->pc = 0x1EC134u;
    // 0x1ec134: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1ec134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ec138: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x1ec138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec13c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ec13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ec140: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec144: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ec144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec148: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec14c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec150: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1EC150u;
    SET_GPR_U32(ctx, 31, 0x1EC158u);
    ctx->pc = 0x1EC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC150u;
    // 0x1ec154: 0x26290088  addiu       $t1, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1EC150u, 0x1EC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC158u;
label_1ec158:
    // 0x1ec158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC158u;
    {
        const bool branch_taken_0x1ec158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC158u;
        // 0x1ec15c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec158) {
            ctx->pc = 0x1EC188u;
            goto label_1ec188;
        }
    }
    ctx->pc = 0x1EC160u;
label_1ec160:
    // 0x1ec160: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ec164: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x1ec164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec168: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ec16c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1ec16cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1ec170: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x1ec170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ec174: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x1ec174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1ec178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec17c: 0xc075a18  jal         func_1D6860
    ctx->pc = 0x1EC17Cu;
    SET_GPR_U32(ctx, 31, 0x1EC184u);
    ctx->pc = 0x1EC180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC17Cu;
    // 0x1ec180: 0x262a0088  addiu       $t2, $s1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6860u, 0x1EC17Cu, 0x1EC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC184u;
label_1ec184:
    // 0x1ec184: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ec188:
    // 0x1ec188: 0x86240088  lh          $a0, 0x88($s1)
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1ec18c: 0x8623008e  lh          $v1, 0x8E($s1)
    ctx->pc = 0x1ec18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 142)));
    // 0x1ec190: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ec194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ec198: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ec198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ec19c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec1a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec1a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ec1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec1a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1ec1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1ec1ac: 0x0  nop
    ctx->pc = 0x1ec1acu;
    // NOP
label_1ec1b0:
    // 0x1ec1b0: 0x92220048  lbu         $v0, 0x48($s1)
    ctx->pc = 0x1ec1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ec1b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec1b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC1B8u;
    {
        const bool branch_taken_0x1ec1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1B8u;
        // 0x1ec1bc: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1b8) {
            ctx->pc = 0x1EC1D0u;
            goto label_1ec1d0;
        }
    }
    ctx->pc = 0x1EC1C0u;
    // 0x1ec1c0: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EC1C0u;
    SET_GPR_U32(ctx, 31, 0x1EC1C8u);
    ctx->pc = 0x1EC1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1C0u;
    // 0x1ec1c4: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EC1C0u, 0x1EC1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1C8u;
label_1ec1c8:
    // 0x1ec1c8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec1cc: 0x0  nop
    ctx->pc = 0x1ec1ccu;
    // NOP
label_1ec1d0:
    // 0x1ec1d0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC1D0u;
    {
        const bool branch_taken_0x1ec1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1D0u;
        // 0x1ec1d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1d0) {
            ctx->pc = 0x1EC1E0u;
            goto label_1ec1e0;
        }
    }
    ctx->pc = 0x1EC1D8u;
    // 0x1ec1d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC1D8u;
    {
        const bool branch_taken_0x1ec1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1d8) {
            ctx->pc = 0x1EC220u;
            goto label_1ec220;
        }
    }
    ctx->pc = 0x1EC1E0u;
label_1ec1e0:
    // 0x1ec1e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ec1e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ec1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ec1e8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ec1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ec1ec: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EC1ECu;
    SET_GPR_U32(ctx, 31, 0x1EC1F4u);
    ctx->pc = 0x1EC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1ECu;
    // 0x1ec1f0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EC1ECu, 0x1EC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1F4u;
label_1ec1f4:
    // 0x1ec1f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1f8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EC1F8u;
    SET_GPR_U32(ctx, 31, 0x1EC200u);
    ctx->pc = 0x1EC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1F8u;
    // 0x1ec1fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EC1F8u, 0x1EC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC200u;
label_1ec200:
    // 0x1ec200: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1ec200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ec204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ec204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec208: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1ec208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ec20c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec210: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EC210u;
    SET_GPR_U32(ctx, 31, 0x1EC218u);
    ctx->pc = 0x1EC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC210u;
    // 0x1ec214: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EC210u, 0x1EC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC218u;
label_1ec218:
    // 0x1ec218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec21c: 0x0  nop
    ctx->pc = 0x1ec21cu;
    // NOP
label_1ec220:
    // 0x1ec220: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ec220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec224: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ec224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec228: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ec228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec22c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec22cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec230: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec234: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec23c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec240: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC240u;
        // 0x1ec244: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC248u;
}
