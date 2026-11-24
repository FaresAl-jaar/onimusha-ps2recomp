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

// Function: sub_002DB840
// Address: 0x2db840 - 0x2db8ec
void sub_002DB840_0x2db840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB840_0x2db840");
#endif

    switch (ctx->pc) {
        case 0x2db878u: goto label_2db878;
        case 0x2db8b0u: goto label_2db8b0;
        default: break;
    }

    ctx->pc = 0x2db840u;

    // 0x2db840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db854: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2db854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2db858: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2db858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db85c: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x2db85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x2db860: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db864: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2db864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db868: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2db868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db870: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2DB870u;
    SET_GPR_U32(ctx, 31, 0x2DB878u);
    ctx->pc = 0x2DB874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB870u;
    // 0x2db874: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DB870u, 0x2DB878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB878u;
label_2db878:
    // 0x2db878: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB878u;
    {
        const bool branch_taken_0x2db878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db878) {
            ctx->pc = 0x2DB888u;
            goto label_2db888;
        }
    }
    ctx->pc = 0x2DB880u;
    // 0x2db880: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB880u;
    {
        const bool branch_taken_0x2db880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB880u;
        // 0x2db884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db880) {
            ctx->pc = 0x2DB8D8u;
            goto label_2db8d8;
        }
    }
    ctx->pc = 0x2DB888u;
label_2db888:
    // 0x2db888: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2db888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2db88c: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x2db88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x2db890: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x2db890u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2db894: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2db894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db898: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2db898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db89c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB89Cu;
    {
        const bool branch_taken_0x2db89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB89Cu;
        // 0x2db8a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db89c) {
            ctx->pc = 0x2DB8D8u;
            goto label_2db8d8;
        }
    }
    ctx->pc = 0x2DB8A4u;
    // 0x2db8a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8a8: 0x24057ffe  addiu       $a1, $zero, 0x7FFE
    ctx->pc = 0x2db8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db8ac: 0x0  nop
    ctx->pc = 0x2db8acu;
    // NOP
label_2db8b0:
    // 0x2db8b0: 0xa4c50020  sh          $a1, 0x20($a2)
    ctx->pc = 0x2db8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2db8b4: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x2db8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2db8b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2db8bc: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x2db8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x2db8c0: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x2db8c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2db8c4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2db8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db8c8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2db8c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db8cc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB8CCu;
    {
        const bool branch_taken_0x2db8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8CCu;
        // 0x2db8d0: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8cc) {
            ctx->pc = 0x2DB8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db8b0;
        }
    }
    ctx->pc = 0x2DB8D4u;
    // 0x2db8d4: 0x0  nop
    ctx->pc = 0x2db8d4u;
    // NOP
label_2db8d8:
    // 0x2db8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8E4u;
        // 0x2db8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8ECu;
}
