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

// Function: sub_00150440
// Address: 0x150440 - 0x150484
void sub_00150440_0x150440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150440_0x150440");
#endif

    switch (ctx->pc) {
        case 0x150450u: goto label_150450;
        case 0x150464u: goto label_150464;
        case 0x150478u: goto label_150478;
        default: break;
    }

    ctx->pc = 0x150440u;

    // 0x150440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150448: 0xc0d9044  jal         func_364110
    ctx->pc = 0x150448u;
    SET_GPR_U32(ctx, 31, 0x150450u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x150448u, 0x150450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150450u;
label_150450:
    // 0x150450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150454: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150454u;
    {
        const bool branch_taken_0x150454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150454) {
            ctx->pc = 0x150470u;
            goto label_150470;
        }
    }
    ctx->pc = 0x15045Cu;
    // 0x15045c: 0xc054124  jal         func_150490
    ctx->pc = 0x15045Cu;
    SET_GPR_U32(ctx, 31, 0x150464u);
    ctx->pc = 0x150490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150490u, 0x15045Cu, 0x150464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150464u;
label_150464:
    // 0x150464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x150464u;
    {
        const bool branch_taken_0x150464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150464) {
            ctx->pc = 0x150478u;
            goto label_150478;
        }
    }
    ctx->pc = 0x15046Cu;
    // 0x15046c: 0x0  nop
    ctx->pc = 0x15046cu;
    // NOP
label_150470:
    // 0x150470: 0xc054190  jal         func_150640
    ctx->pc = 0x150470u;
    SET_GPR_U32(ctx, 31, 0x150478u);
    ctx->pc = 0x150640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150640u, 0x150470u, 0x150478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150478u;
label_150478:
    // 0x150478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15047c: 0x3e00008  jr          $ra
    ctx->pc = 0x15047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15047Cu;
        // 0x150480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150484u;
}
