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

// Function: sub_003CA2D0
// Address: 0x3ca2d0 - 0x3ca3bc
void sub_003CA2D0_0x3ca2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA2D0_0x3ca2d0");
#endif

    switch (ctx->pc) {
        case 0x3ca2f0u: goto label_3ca2f0;
        case 0x3ca328u: goto label_3ca328;
        case 0x3ca364u: goto label_3ca364;
        case 0x3ca384u: goto label_3ca384;
        default: break;
    }

    ctx->pc = 0x3ca2d0u;

    // 0x3ca2d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ca2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ca2d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ca2d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ca2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ca2dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca2e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ca2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca2e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca2e8: 0xc0a6038  jal         func_2980E0
    ctx->pc = 0x3CA2E8u;
    SET_GPR_U32(ctx, 31, 0x3CA2F0u);
    ctx->pc = 0x3CA2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA2E8u;
    // 0x3ca2ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2980E0u, 0x3CA2E8u, 0x3CA2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA2F0u;
label_3ca2f0:
    // 0x3ca2f0: 0x8e630148  lw          $v1, 0x148($s3)
    ctx->pc = 0x3ca2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x3ca2f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ca2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ca2f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CA2F8u;
    {
        const bool branch_taken_0x3ca2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca2f8) {
            ctx->pc = 0x3CA310u;
            goto label_3ca310;
        }
    }
    ctx->pc = 0x3CA300u;
    // 0x3ca300: 0x926407d6  lbu         $a0, 0x7D6($s3)
    ctx->pc = 0x3ca300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2006)));
    // 0x3ca304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca308: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3CA308u;
    {
        const bool branch_taken_0x3ca308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ca308) {
            ctx->pc = 0x3CA3A0u;
            goto label_3ca3a0;
        }
    }
    ctx->pc = 0x3CA310u;
label_3ca310:
    // 0x3ca310: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x3ca310u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x3ca314: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x3ca314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x3ca318: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ca318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca31c: 0x26312f68  addiu       $s1, $s1, 0x2F68
    ctx->pc = 0x3ca31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12136));
    // 0x3ca320: 0x26102f60  addiu       $s0, $s0, 0x2F60
    ctx->pc = 0x3ca320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12128));
    // 0x3ca324: 0x0  nop
    ctx->pc = 0x3ca324u;
    // NOP
label_3ca328:
    // 0x3ca328: 0x92652b24  lbu         $a1, 0x2B24($s3)
    ctx->pc = 0x3ca328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11044)));
    // 0x3ca32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ca32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca330: 0x2441804  sllv        $v1, $a0, $s2
    ctx->pc = 0x3ca330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
    // 0x3ca334: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3ca334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3ca338: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3CA338u;
    {
        const bool branch_taken_0x3ca338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca338) {
            ctx->pc = 0x3CA370u;
            goto label_3ca370;
        }
    }
    ctx->pc = 0x3CA340u;
    // 0x3ca340: 0x926307d6  lbu         $v1, 0x7D6($s3)
    ctx->pc = 0x3ca340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2006)));
    // 0x3ca344: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CA344u;
    {
        const bool branch_taken_0x3ca344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ca344) {
            ctx->pc = 0x3CA388u;
            goto label_3ca388;
        }
    }
    ctx->pc = 0x3CA34Cu;
    // 0x3ca34c: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x3ca34cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ca350: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x3ca350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x3ca354: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ca354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ca358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca35c: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x3CA35Cu;
    SET_GPR_U32(ctx, 31, 0x3CA364u);
    ctx->pc = 0x3CA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA35Cu;
    // 0x3ca360: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3CA35Cu, 0x3CA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA364u;
label_3ca364:
    // 0x3ca364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CA364u;
    {
        const bool branch_taken_0x3ca364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca364) {
            ctx->pc = 0x3CA388u;
            goto label_3ca388;
        }
    }
    ctx->pc = 0x3CA36Cu;
    // 0x3ca36c: 0x0  nop
    ctx->pc = 0x3ca36cu;
    // NOP
label_3ca370:
    // 0x3ca370: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x3ca370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ca374: 0x266401c0  addiu       $a0, $s3, 0x1C0
    ctx->pc = 0x3ca374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
    // 0x3ca378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ca378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca37c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x3CA37Cu;
    SET_GPR_U32(ctx, 31, 0x3CA384u);
    ctx->pc = 0x3CA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA37Cu;
    // 0x3ca380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x3CA37Cu, 0x3CA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA384u;
label_3ca384:
    // 0x3ca384: 0x0  nop
    ctx->pc = 0x3ca384u;
    // NOP
label_3ca388:
    // 0x3ca388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ca388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ca38c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x3ca38cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ca390: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ca390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3ca394: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3CA394u;
    {
        const bool branch_taken_0x3ca394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA394u;
        // 0x3ca398: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca394) {
            ctx->pc = 0x3CA328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca328;
        }
    }
    ctx->pc = 0x3CA39Cu;
    // 0x3ca39c: 0x0  nop
    ctx->pc = 0x3ca39cu;
    // NOP
label_3ca3a0:
    // 0x3ca3a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca3a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ca3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3B4u;
        // 0x3ca3b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA3BCu;
}
