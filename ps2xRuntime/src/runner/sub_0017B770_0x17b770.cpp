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

// Function: sub_0017B770
// Address: 0x17b770 - 0x17b87c
void sub_0017B770_0x17b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B770_0x17b770");
#endif

    switch (ctx->pc) {
        case 0x17b7a0u: goto label_17b7a0;
        case 0x17b7d8u: goto label_17b7d8;
        case 0x17b7f0u: goto label_17b7f0;
        case 0x17b83cu: goto label_17b83c;
        default: break;
    }

    ctx->pc = 0x17b770u;

    // 0x17b770: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x17b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x17b774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17b778: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x17b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17b77c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17b780: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17b784: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17b784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b788: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17b78c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17b790: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17b794: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17b798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b79c: 0x0  nop
    ctx->pc = 0x17b79cu;
    // NOP
label_17b7a0:
    // 0x17b7a0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x17b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x17b7a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17b7a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17b7ac: 0x0  nop
    ctx->pc = 0x17b7acu;
    // NOP
    // 0x17b7b0: 0x0  nop
    ctx->pc = 0x17b7b0u;
    // NOP
    // 0x17b7b4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B7B4u;
    {
        const bool branch_taken_0x17b7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b7b4) {
            ctx->pc = 0x17B7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7a0;
        }
    }
    ctx->pc = 0x17B7BCu;
    // 0x17b7bc: 0xaea52d00  sw          $a1, 0x2D00($s5)
    ctx->pc = 0x17b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 11520), GPR_U32(ctx, 5));
    // 0x17b7c0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17b7c4: 0x8eb22d00  lw          $s2, 0x2D00($s5)
    ctx->pc = 0x17b7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11520)));
    // 0x17b7c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17b7c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17b7ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7d0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17b7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7d4: 0x0  nop
    ctx->pc = 0x17b7d4u;
    // NOP
label_17b7d8:
    // 0x17b7d8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x17b7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b7dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17B7DCu;
    {
        const bool branch_taken_0x17b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b7dc) {
            ctx->pc = 0x17B848u;
            goto label_17b848;
        }
    }
    ctx->pc = 0x17B7E4u;
    // 0x17b7e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x17b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17b7e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17b7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b7f0:
    // 0x17b7f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b7f4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17B7F4u;
    {
        const bool branch_taken_0x17b7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b7f4) {
            ctx->pc = 0x17B848u;
            goto label_17b848;
        }
    }
    ctx->pc = 0x17B7FCu;
    // 0x17b7fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b800: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x17b800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b804: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B804u;
    {
        const bool branch_taken_0x17b804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B804u;
        // 0x17b808: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b804) {
            ctx->pc = 0x17B7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7f0;
        }
    }
    ctx->pc = 0x17B80Cu;
    // 0x17b80c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x17b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x17b810: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b814: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x17b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17b818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b81c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x17b820: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x17b820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17b824: 0x2623025  or          $a2, $s3, $v0
    ctx->pc = 0x17b824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x17b828: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17b82c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b82cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b830: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17b830u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b834: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x17B834u;
    SET_GPR_U32(ctx, 31, 0x17B83Cu);
    ctx->pc = 0x17B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B834u;
    // 0x17b838: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x17B834u, 0x17B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B83Cu;
label_17b83c:
    // 0x17b83c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17b83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17b840: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17b840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17b844: 0x0  nop
    ctx->pc = 0x17b844u;
    // NOP
label_17b848:
    // 0x17b848: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17b848u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17b84c: 0x2e830020  sltiu       $v1, $s4, 0x20
    ctx->pc = 0x17b84cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17b850: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x17B850u;
    {
        const bool branch_taken_0x17b850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B850u;
        // 0x17b854: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b850) {
            ctx->pc = 0x17B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7d8;
        }
    }
    ctx->pc = 0x17B858u;
    // 0x17b858: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17b858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17b85c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17b85cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17b860: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17b860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b864: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17b864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b868: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17b868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b86c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17b86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b870: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b874: 0x3e00008  jr          $ra
    ctx->pc = 0x17B874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B874u;
        // 0x17b878: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B87Cu;
}
