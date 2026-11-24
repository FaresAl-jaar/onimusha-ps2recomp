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

// Function: sub_002F0C90
// Address: 0x2f0c90 - 0x2f0d00
void sub_002F0C90_0x2f0c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C90_0x2f0c90");
#endif

    switch (ctx->pc) {
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0ce4u: goto label_2f0ce4;
        default: break;
    }

    ctx->pc = 0x2f0c90u;

    // 0x2f0c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f0c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f0c98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f0c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0ca0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0ca8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f0ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0cb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f0cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cb4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f0cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cb8: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0CB8u;
    SET_GPR_U32(ctx, 31, 0x2F0CC0u);
    ctx->pc = 0x2F0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CB8u;
    // 0x2f0cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0CB8u, 0x2F0CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CC0u;
label_2f0cc0:
    // 0x2f0cc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f0cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cc8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f0cc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ccc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f0cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0cd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cd8: 0x240a003a  addiu       $t2, $zero, 0x3A
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2f0cdc: 0xc0d0ca8  jal         func_3432A0
    ctx->pc = 0x2F0CDCu;
    SET_GPR_U32(ctx, 31, 0x2F0CE4u);
    ctx->pc = 0x2F0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CDCu;
    // 0x2f0ce0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3432A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3432A0u, 0x2F0CDCu, 0x2F0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CE4u;
label_2f0ce4:
    // 0x2f0ce4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f0ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0ce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0cec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CF8u;
        // 0x2f0cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0D00u;
}
