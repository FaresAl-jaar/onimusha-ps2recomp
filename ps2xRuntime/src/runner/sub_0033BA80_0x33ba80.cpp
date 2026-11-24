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

// Function: sub_0033BA80
// Address: 0x33ba80 - 0x33bd18
void sub_0033BA80_0x33ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BA80_0x33ba80");
#endif

    switch (ctx->pc) {
        case 0x33bad0u: goto label_33bad0;
        case 0x33bae8u: goto label_33bae8;
        case 0x33bb30u: goto label_33bb30;
        case 0x33bb80u: goto label_33bb80;
        case 0x33bb98u: goto label_33bb98;
        case 0x33bc80u: goto label_33bc80;
        case 0x33bca0u: goto label_33bca0;
        case 0x33bcd4u: goto label_33bcd4;
        default: break;
    }

    ctx->pc = 0x33ba80u;

    // 0x33ba80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x33ba84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x33ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x33ba88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x33ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33ba8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33ba90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33ba94: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x33ba94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33ba9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33baa0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33baa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33baa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33baa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33baa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33baac: 0x3c130065  lui         $s3, 0x65
    ctx->pc = 0x33baacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
    // 0x33bab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33bab4: 0x267374c0  addiu       $s3, $s3, 0x74C0
    ctx->pc = 0x33bab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 29888));
    // 0x33bab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33babc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x33babcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bac0: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x33bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x33bac4: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x33bac4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33bac8: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x33BAC8u;
    SET_GPR_U32(ctx, 31, 0x33BAD0u);
    ctx->pc = 0x33BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAC8u;
    // 0x33bacc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x33BAC8u, 0x33BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BAD0u;
label_33bad0:
    // 0x33bad0: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x33bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33bad4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x33bad4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bad8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33bad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33badc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33badcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bae0: 0xc0cecf8  jal         func_33B3E0
    ctx->pc = 0x33BAE0u;
    SET_GPR_U32(ctx, 31, 0x33BAE8u);
    ctx->pc = 0x33BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAE0u;
    // 0x33bae4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B3E0u, 0x33BAE0u, 0x33BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BAE8u;
label_33bae8:
    // 0x33bae8: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x33bae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x33baec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33BAECu;
    {
        const bool branch_taken_0x33baec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAECu;
        // 0x33baf0: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33baec) {
            ctx->pc = 0x33BB38u;
            goto label_33bb38;
        }
    }
    ctx->pc = 0x33BAF4u;
    // 0x33baf4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33baf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x33baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x33bafc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33bafcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33bb00: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x33bb00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bb04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33bb04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb08: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x33bb08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33bb0c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bb10: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33bb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33bb14: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33bb14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33bb18: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33bb1c: 0x344a005a  ori         $t2, $v0, 0x5A
    ctx->pc = 0x33bb1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)90);
    // 0x33bb20: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33bb24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bb28: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BB28u;
    SET_GPR_U32(ctx, 31, 0x33BB30u);
    ctx->pc = 0x33BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB28u;
    // 0x33bb2c: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BB28u, 0x33BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB30u;
label_33bb30:
    // 0x33bb30: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x33BB30u;
    {
        const bool branch_taken_0x33bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb30) {
            ctx->pc = 0x33BCE8u;
            goto label_33bce8;
        }
    }
    ctx->pc = 0x33BB38u;
label_33bb38:
    // 0x33bb38: 0x93c2001f  lbu         $v0, 0x1F($fp)
    ctx->pc = 0x33bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 31)));
    // 0x33bb3c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33BB3Cu;
    {
        const bool branch_taken_0x33bb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB3Cu;
        // 0x33bb40: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb3c) {
            ctx->pc = 0x33BB88u;
            goto label_33bb88;
        }
    }
    ctx->pc = 0x33BB44u;
    // 0x33bb44: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33bb48: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x33bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x33bb4c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33bb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33bb50: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x33bb50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bb54: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33bb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb58: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x33bb58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33bb5c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bb60: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33bb60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33bb64: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33bb64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33bb68: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33bb6c: 0x344a005b  ori         $t2, $v0, 0x5B
    ctx->pc = 0x33bb6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
    // 0x33bb70: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x33bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33bb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bb78: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BB78u;
    SET_GPR_U32(ctx, 31, 0x33BB80u);
    ctx->pc = 0x33BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB78u;
    // 0x33bb7c: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BB78u, 0x33BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB80u;
label_33bb80:
    // 0x33bb80: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x33BB80u;
    {
        const bool branch_taken_0x33bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb80) {
            ctx->pc = 0x33BCE8u;
            goto label_33bce8;
        }
    }
    ctx->pc = 0x33BB88u;
label_33bb88:
    // 0x33bb88: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x33bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33bb8c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33bb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33bb90: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x33bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x33bb94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33bb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33bb98:
    // 0x33bb98: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x33bb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33bb9c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33bba0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33BBA0u;
    {
        const bool branch_taken_0x33bba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBA0u;
        // 0x33bba4: 0x3d21021  addu        $v0, $fp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bba0) {
            ctx->pc = 0x33BBC0u;
            goto label_33bbc0;
        }
    }
    ctx->pc = 0x33BBA8u;
    // 0x33bba8: 0x92e30009  lbu         $v1, 0x9($s7)
    ctx->pc = 0x33bba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9)));
    // 0x33bbac: 0x9042001f  lbu         $v0, 0x1F($v0)
    ctx->pc = 0x33bbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31)));
    // 0x33bbb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33bbb4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33bbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33bbb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BBB8u;
    {
        const bool branch_taken_0x33bbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bbb8) {
            ctx->pc = 0x33BBC8u;
            goto label_33bbc8;
        }
    }
    ctx->pc = 0x33BBC0u;
label_33bbc0:
    // 0x33bbc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33BBC0u;
    {
        const bool branch_taken_0x33bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBC0u;
        // 0x33bbc4: 0xa2800004  sb          $zero, 0x4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bbc0) {
            ctx->pc = 0x33BBD0u;
            goto label_33bbd0;
        }
    }
    ctx->pc = 0x33BBC8u;
label_33bbc8:
    // 0x33bbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bbcc: 0xa2820004  sb          $v0, 0x4($s4)
    ctx->pc = 0x33bbccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
label_33bbd0:
    // 0x33bbd0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x33bbd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33bbd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33bbd8: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x33bbd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33bbdc: 0x9026fc8d  lbu         $a2, -0x373($at)
    ctx->pc = 0x33bbdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x33bbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bbe4: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x33bbe8: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x33bbe8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bbec: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x33bbf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33bbf4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x33bbf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33bbf8: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x33bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x33bbfc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BBFCu;
    {
        const bool branch_taken_0x33bbfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x33BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBFCu;
        // 0x33bc00: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bbfc) {
            ctx->pc = 0x33BC10u;
            goto label_33bc10;
        }
    }
    ctx->pc = 0x33BC04u;
    // 0x33bc04: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x33bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x33bc08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33BC08u;
    {
        const bool branch_taken_0x33bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC08u;
        // 0x33bc0c: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc08) {
            ctx->pc = 0x33BC18u;
            goto label_33bc18;
        }
    }
    ctx->pc = 0x33BC10u;
label_33bc10:
    // 0x33bc10: 0x8f82831c  lw          $v0, -0x7CE4($gp)
    ctx->pc = 0x33bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    // 0x33bc14: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x33bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_33bc18:
    // 0x33bc18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x33bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33bc1c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BC1Cu;
    {
        const bool branch_taken_0x33bc1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC1Cu;
        // 0x33bc20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc1c) {
            ctx->pc = 0x33BC38u;
            goto label_33bc38;
        }
    }
    ctx->pc = 0x33BC24u;
    // 0x33bc24: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BC24u;
    {
        const bool branch_taken_0x33bc24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bc24) {
            ctx->pc = 0x33BC38u;
            goto label_33bc38;
        }
    }
    ctx->pc = 0x33BC2Cu;
    // 0x33bc2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BC2Cu;
    {
        const bool branch_taken_0x33bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc2c) {
            ctx->pc = 0x33BC40u;
            goto label_33bc40;
        }
    }
    ctx->pc = 0x33BC34u;
    // 0x33bc34: 0x0  nop
    ctx->pc = 0x33bc34u;
    // NOP
label_33bc38:
    // 0x33bc38: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x33bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x33bc3c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x33bc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33bc40:
    // 0x33bc40: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x33bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x33bc44: 0x9043001f  lbu         $v1, 0x1F($v0)
    ctx->pc = 0x33bc44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31)));
    // 0x33bc48: 0x2456001f  addiu       $s6, $v0, 0x1F
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x33bc4c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x33bc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33bc50: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x33bc50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc54: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33BC54u;
    {
        const bool branch_taken_0x33bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC54u;
        // 0x33bc58: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bc54) {
            ctx->pc = 0x33BCA8u;
            goto label_33bca8;
        }
    }
    ctx->pc = 0x33BC5Cu;
    // 0x33bc5c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33bc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33bc60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33bc64: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bc68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33bc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33bc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc70: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33bc70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33bc74: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33bc74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33bc78: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BC78u;
    SET_GPR_U32(ctx, 31, 0x33BC80u);
    ctx->pc = 0x33BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC78u;
    // 0x33bc7c: 0x344a0030  ori         $t2, $v0, 0x30 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BC78u, 0x33BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC80u;
label_33bc80:
    // 0x33bc80: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x33bc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33bc84: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x33bc84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x33bc88: 0x96e90002  lhu         $t1, 0x2($s7)
    ctx->pc = 0x33bc88u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x33bc8c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x33bc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x33bc90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x33bc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bc94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x33bc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33bc98: 0xc0ed74c  jal         func_3B5D30
    ctx->pc = 0x33BC98u;
    SET_GPR_U32(ctx, 31, 0x33BCA0u);
    ctx->pc = 0x33BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC98u;
    // 0x33bc9c: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5D30u, 0x33BC98u, 0x33BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCA0u;
label_33bca0:
    // 0x33bca0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x33bca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33bca4: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x33bca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
label_33bca8:
    // 0x33bca8: 0x97a500b0  lhu         $a1, 0xB0($sp)
    ctx->pc = 0x33bca8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33bcac: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x33bcacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33bcb0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33bcb4: 0x2643005c  addiu       $v1, $s2, 0x5C
    ctx->pc = 0x33bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x33bcb8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33bcbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33bcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcc0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x33bcc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33bcc4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bcc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x33bcc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bccc: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BCCCu;
    SET_GPR_U32(ctx, 31, 0x33BCD4u);
    ctx->pc = 0x33BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCCCu;
    // 0x33bcd0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BCCCu, 0x33BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCD4u;
label_33bcd4:
    // 0x33bcd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33bcd8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x33bcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33bcdc: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x33bcdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33bce0: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x33BCE0u;
    {
        const bool branch_taken_0x33bce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCE0u;
        // 0x33bce4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bce0) {
            ctx->pc = 0x33BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33bb98;
        }
    }
    ctx->pc = 0x33BCE8u;
label_33bce8:
    // 0x33bce8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33bcec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33bcecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33bcf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33bcf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33bcf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33bcf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33bcf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33bcf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33bcfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33bcfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33bd00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33bd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33bd04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33bd04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bd08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bd0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x33BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD10u;
        // 0x33bd14: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BD18u;
}
