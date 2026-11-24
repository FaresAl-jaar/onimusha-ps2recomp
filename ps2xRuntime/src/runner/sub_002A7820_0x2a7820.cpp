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

// Function: sub_002A7820
// Address: 0x2a7820 - 0x2a78b0
void sub_002A7820_0x2a7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7820_0x2a7820");
#endif

    switch (ctx->pc) {
        case 0x2a7870u: goto label_2a7870;
        case 0x2a7898u: goto label_2a7898;
        default: break;
    }

    ctx->pc = 0x2a7820u;

    // 0x2a7820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7824: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x2a7824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
    // 0x2a7828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a7828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a782c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a782cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7830: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a7830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a7834: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a783c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a783cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a7840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a7844: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7848: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a7848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a784c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a784cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a7850: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a7854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7858: 0x34458c02  ori         $a1, $v0, 0x8C02
    ctx->pc = 0x2a7858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35842);
    // 0x2a785c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a785cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a7860: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7860u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7864: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a7864u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7868: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A7868u;
    SET_GPR_U32(ctx, 31, 0x2A7870u);
    ctx->pc = 0x2A786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7868u;
    // 0x2a786c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A7868u, 0x2A7870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7870u;
label_2a7870:
    // 0x2a7870: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a7870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7874: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a7874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7878: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a7878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a787c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7880: 0x3405e5a0  ori         $a1, $zero, 0xE5A0
    ctx->pc = 0x2a7880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58784);
    // 0x2a7884: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2a7888: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a788c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a788cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7890: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A7890u;
    SET_GPR_U32(ctx, 31, 0x2A7898u);
    ctx->pc = 0x2A7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7890u;
    // 0x2a7894: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A7890u, 0x2A7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7898u;
label_2a7898:
    // 0x2a7898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a7898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a789c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a789cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a78a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a78a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a78a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a78a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a78a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A78A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A78A8u;
        // 0x2a78ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A78A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A78B0u;
}
