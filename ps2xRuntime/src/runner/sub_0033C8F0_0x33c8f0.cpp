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

// Function: sub_0033C8F0
// Address: 0x33c8f0 - 0x33c96c
void sub_0033C8F0_0x33c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C8F0_0x33c8f0");
#endif

    switch (ctx->pc) {
        case 0x33c938u: goto label_33c938;
        case 0x33c950u: goto label_33c950;
        default: break;
    }

    ctx->pc = 0x33c8f0u;

    // 0x33c8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33c8f4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x33c8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x33c8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33c8fc: 0x27828320  addiu       $v0, $gp, -0x7CE0
    ctx->pc = 0x33c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935328));
    // 0x33c900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33c900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33c904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33c90c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33c90cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c914: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c91c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c920: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x33c920u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c924: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x33c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c928: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x33c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x33c92c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33c92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c930: 0xc0c305c  jal         func_30C170
    ctx->pc = 0x33C930u;
    SET_GPR_U32(ctx, 31, 0x33C938u);
    ctx->pc = 0x33C934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C930u;
    // 0x33c934: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x33C930u, 0x33C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C938u;
label_33c938:
    // 0x33c938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c93c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33c93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c940: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33c940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c944: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x33c944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c948: 0xc0cf18c  jal         func_33C630
    ctx->pc = 0x33C948u;
    SET_GPR_U32(ctx, 31, 0x33C950u);
    ctx->pc = 0x33C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C948u;
    // 0x33c94c: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C630u, 0x33C948u, 0x33C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C950u;
label_33c950:
    // 0x33c950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33c954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33c954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33c958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c964: 0x3e00008  jr          $ra
    ctx->pc = 0x33C964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C964u;
        // 0x33c968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C96Cu;
}
