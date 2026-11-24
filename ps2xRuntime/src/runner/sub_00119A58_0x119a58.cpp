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

// Function: sub_00119A58
// Address: 0x119a58 - 0x119ad4
void sub_00119A58_0x119a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119A58_0x119a58");
#endif

    switch (ctx->pc) {
        case 0x119a88u: goto label_119a88;
        case 0x119aa0u: goto label_119aa0;
        case 0x119ab0u: goto label_119ab0;
        default: break;
    }

    ctx->pc = 0x119a58u;

    // 0x119a58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119a5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119a60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119a64: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119a6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119a74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119a7c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x119a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x119a80: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119A80u;
    SET_GPR_U32(ctx, 31, 0x119A88u);
    ctx->pc = 0x119A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A80u;
    // 0x119a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119A80u, 0x119A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A88u;
label_119a88:
    // 0x119a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x119a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x119a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a98: 0xc046658  jal         func_119960
    ctx->pc = 0x119A98u;
    SET_GPR_U32(ctx, 31, 0x119AA0u);
    ctx->pc = 0x119A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A98u;
    // 0x119a9c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119960u, 0x119A98u, 0x119AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AA0u;
label_119aa0:
    // 0x119aa0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x119AA0u;
    {
        const bool branch_taken_0x119aa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AA0u;
        // 0x119aa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119aa0) {
            ctx->pc = 0x119AB0u;
            goto label_119ab0;
        }
    }
    ctx->pc = 0x119AA8u;
    // 0x119aa8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119AA8u;
    SET_GPR_U32(ctx, 31, 0x119AB0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119AA8u, 0x119AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AB0u;
label_119ab0:
    // 0x119ab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119ab8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119abc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119ac0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ac4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119acc: 0x3e00008  jr          $ra
    ctx->pc = 0x119ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119ACCu;
        // 0x119ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119AD4u;
}
