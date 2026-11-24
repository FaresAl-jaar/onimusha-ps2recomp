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

// Function: sub_002A9840
// Address: 0x2a9840 - 0x2a98d4
void sub_002A9840_0x2a9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9840_0x2a9840");
#endif

    switch (ctx->pc) {
        case 0x2a9890u: goto label_2a9890;
        case 0x2a98bcu: goto label_2a98bc;
        default: break;
    }

    ctx->pc = 0x2a9840u;

    // 0x2a9840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a9844: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x2a9844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x2a9848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a984c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a984cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9850: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a9850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a9854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a985c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a985cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9864: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a9864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9868: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a9868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a986c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a986cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a9870: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a9874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9878: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2a9878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2a987c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a987cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9880: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9884: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a9884u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9888: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A9888u;
    SET_GPR_U32(ctx, 31, 0x2A9890u);
    ctx->pc = 0x2A988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9888u;
    // 0x2a988c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A9888u, 0x2A9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9890u;
label_2a9890:
    // 0x2a9890: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9894: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a9894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9898: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a9898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a989c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a989cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a98a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98a4: 0x3445a2cc  ori         $a1, $v0, 0xA2CC
    ctx->pc = 0x2a98a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41676);
    // 0x2a98a8: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2a98a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2a98ac: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a98acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a98b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a98b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98b4: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A98B4u;
    SET_GPR_U32(ctx, 31, 0x2A98BCu);
    ctx->pc = 0x2A98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A98B4u;
    // 0x2a98b8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A98B4u, 0x2A98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98BCu;
label_2a98bc:
    // 0x2a98bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a98bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a98c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a98c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a98c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a98c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a98c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a98c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a98cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98CCu;
        // 0x2a98d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A98CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A98D4u;
}
