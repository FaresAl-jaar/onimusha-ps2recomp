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

// Function: sub_0033C970
// Address: 0x33c970 - 0x33c9ec
void sub_0033C970_0x33c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C970_0x33c970");
#endif

    switch (ctx->pc) {
        case 0x33c9b8u: goto label_33c9b8;
        case 0x33c9d0u: goto label_33c9d0;
        default: break;
    }

    ctx->pc = 0x33c970u;

    // 0x33c970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33c974: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x33c974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x33c978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33c97c: 0x27828320  addiu       $v0, $gp, -0x7CE0
    ctx->pc = 0x33c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935328));
    // 0x33c980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33c984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33c98c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33c98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c99c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9a0: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x33c9a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c9a4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x33c9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9a8: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x33c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x33c9ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9b0: 0xc0c305c  jal         func_30C170
    ctx->pc = 0x33C9B0u;
    SET_GPR_U32(ctx, 31, 0x33C9B8u);
    ctx->pc = 0x33C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C9B0u;
    // 0x33c9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x33C9B0u, 0x33C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9B8u;
label_33c9b8:
    // 0x33c9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33c9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33c9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c9c8: 0xc0cf18c  jal         func_33C630
    ctx->pc = 0x33C9C8u;
    SET_GPR_U32(ctx, 31, 0x33C9D0u);
    ctx->pc = 0x33C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C9C8u;
    // 0x33c9cc: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C630u, 0x33C9C8u, 0x33C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C9D0u;
label_33c9d0:
    // 0x33c9d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33c9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33c9d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33c9d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c9d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c9d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9E4u;
        // 0x33c9e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C9ECu;
}
