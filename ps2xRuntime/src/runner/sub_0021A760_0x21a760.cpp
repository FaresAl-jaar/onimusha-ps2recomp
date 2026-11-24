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

// Function: sub_0021A760
// Address: 0x21a760 - 0x21a7d8
void sub_0021A760_0x21a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A760_0x21a760");
#endif

    switch (ctx->pc) {
        case 0x21a7b4u: goto label_21a7b4;
        case 0x21a7c0u: goto label_21a7c0;
        default: break;
    }

    ctx->pc = 0x21a760u;

    // 0x21a760: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x21a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x21a764: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a76c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x21a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x21a770: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x21a770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x21a774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a778: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21a77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a780: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x21a780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x21a784: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x21a784u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x21a788: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a78c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a790: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x21a790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x21a794: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x21a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x21a798: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x21a798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x21a79c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x21a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x21a7a0: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x21a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x21a7a4: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x21a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x21a7a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21a7ac: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x21A7ACu;
    SET_GPR_U32(ctx, 31, 0x21A7B4u);
    ctx->pc = 0x21A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A7ACu;
    // 0x21a7b0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x21A7ACu, 0x21A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A7B4u;
label_21a7b4:
    // 0x21a7b4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x21a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x21a7b8: 0xc0869f6  jal         func_21A7D8
    ctx->pc = 0x21A7B8u;
    SET_GPR_U32(ctx, 31, 0x21A7C0u);
    ctx->pc = 0x21A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A7B8u;
    // 0x21a7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A7D8u, 0x21A7B8u, 0x21A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A7C0u;
label_21a7c0:
    // 0x21a7c0: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x21a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x21a7c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a7cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D0u;
        // 0x21a7d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A7D8u;
}
