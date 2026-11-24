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

// Function: sub_003A0790
// Address: 0x3a0790 - 0x3a08a0
void sub_003A0790_0x3a0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0790_0x3a0790");
#endif

    switch (ctx->pc) {
        case 0x3a07b8u: goto label_3a07b8;
        case 0x3a07e0u: goto label_3a07e0;
        case 0x3a0818u: goto label_3a0818;
        case 0x3a0834u: goto label_3a0834;
        default: break;
    }

    ctx->pc = 0x3a0790u;

    // 0x3a0790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a0794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a0798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a0798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a079c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a07a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a07a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a07a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a07a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a07a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a07a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a07ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a07acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a07b0: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x3A07B0u;
    SET_GPR_U32(ctx, 31, 0x3A07B8u);
    ctx->pc = 0x3A07B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A07B0u;
    // 0x3a07b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x3A07B0u, 0x3A07B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A07B8u;
label_3a07b8:
    // 0x3a07b8: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x3a07b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3a07bc: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3a07bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3a07c0: 0x9022339a  lbu         $v0, 0x339A($at)
    ctx->pc = 0x3a07c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92339Au));
    // 0x3a07c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A07C4u;
    {
        const bool branch_taken_0x3a07c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07C4u;
        // 0x3a07c8: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07c4) {
            ctx->pc = 0x3A07D0u;
            goto label_3a07d0;
        }
    }
    ctx->pc = 0x3A07CCu;
    // 0x3a07cc: 0x64150040  daddiu      $s5, $zero, 0x40
    ctx->pc = 0x3a07ccu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_3a07d0:
    // 0x3a07d0: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3a07d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3a07d4: 0x2694ce90  addiu       $s4, $s4, -0x3170
    ctx->pc = 0x3a07d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954640));
    // 0x3a07d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a07d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07dc: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x3a07dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_3a07e0:
    // 0x3a07e0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3a07e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3a07e4: 0x92830005  lbu         $v1, 0x5($s4)
    ctx->pc = 0x3a07e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x3a07e8: 0x9022e023  lbu         $v0, -0x1FDD($at)
    ctx->pc = 0x3a07e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE023u));
    // 0x3a07ec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3a07ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a07f0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A07F0u;
    {
        const bool branch_taken_0x3a07f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07F0u;
        // 0x3a07f4: 0x203082a  slt         $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07f0) {
            ctx->pc = 0x3A0850u;
            goto label_3a0850;
        }
    }
    ctx->pc = 0x3A07F8u;
    // 0x3a07f8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A07F8u;
    {
        const bool branch_taken_0x3a07f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a07f8) {
            ctx->pc = 0x3A0850u;
            goto label_3a0850;
        }
    }
    ctx->pc = 0x3A0800u;
    // 0x3a0800: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x3a0800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3a0804: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x3a0804u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a0808: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3a0808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a080c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3A080Cu;
    {
        const bool branch_taken_0x3a080c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A080Cu;
        // 0x3a0810: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a080c) {
            ctx->pc = 0x3A0848u;
            goto label_3a0848;
        }
    }
    ctx->pc = 0x3A0814u;
    // 0x3a0814: 0x0  nop
    ctx->pc = 0x3a0814u;
    // NOP
label_3a0818:
    // 0x3a0818: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x3a0818u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a081c: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x3a081cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a0820: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3a0820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3a0824: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3a0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3a0828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a0828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a082c: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x3A082Cu;
    SET_GPR_U32(ctx, 31, 0x3A0834u);
    ctx->pc = 0x3A0830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A082Cu;
    // 0x3a0830: 0x24080346  addiu       $t0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x3A082Cu, 0x3A0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0834u;
label_3a0834:
    // 0x3a0834: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x3a0834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3a0838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a0838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a083c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a083cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a0840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A0840u;
    {
        const bool branch_taken_0x3a0840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0840u;
        // 0x3a0844: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0840) {
            ctx->pc = 0x3A0818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0818;
        }
    }
    ctx->pc = 0x3A0848u;
label_3a0848:
    // 0x3a0848: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3a0848u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3a084c: 0x0  nop
    ctx->pc = 0x3a084cu;
    // NOP
label_3a0850:
    // 0x3a0850: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a0850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a0854: 0x2e62000f  sltiu       $v0, $s3, 0xF
    ctx->pc = 0x3a0854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3a0858: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A0858u;
    {
        const bool branch_taken_0x3a0858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0858u;
        // 0x3a085c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0858) {
            ctx->pc = 0x3A07E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a07e0;
        }
    }
    ctx->pc = 0x3A0860u;
    // 0x3a0860: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3a0860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3a0864: 0x9022e023  lbu         $v0, -0x1FDD($at)
    ctx->pc = 0x3a0864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE023u));
    // 0x3a0868: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x3a0868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a086c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A086Cu;
    {
        const bool branch_taken_0x3a086c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A086Cu;
        // 0x3a0870: 0x3c01008e  lui         $at, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a086c) {
            ctx->pc = 0x3A0878u;
            goto label_3a0878;
        }
    }
    ctx->pc = 0x3A0874u;
    // 0x3a0874: 0xa035e023  sb          $s5, -0x1FDD($at)
    ctx->pc = 0x3a0874u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959139), (uint8_t)GPR_U32(ctx, 21));
label_3a0878:
    // 0x3a0878: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a0878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a087c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a0880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a0880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a0884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a0888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a088c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a088cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0898: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0898u;
        // 0x3a089c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A08A0u;
}
