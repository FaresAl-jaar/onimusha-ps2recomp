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

// Function: sub_00294820
// Address: 0x294820 - 0x294868
void sub_00294820_0x294820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294820_0x294820");
#endif

    switch (ctx->pc) {
        case 0x294838u: goto label_294838;
        case 0x294840u: goto label_294840;
        default: break;
    }

    ctx->pc = 0x294820u;

    // 0x294820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29482c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294838:
    // 0x294838: 0xc0c0870  jal         func_3021C0
    ctx->pc = 0x294838u;
    SET_GPR_U32(ctx, 31, 0x294840u);
    ctx->pc = 0x29483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294838u;
    // 0x29483c: 0x8e042988  lw          $a0, 0x2988($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021C0u, 0x294838u, 0x294840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294840u;
label_294840:
    // 0x294840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294844: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x294844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x294848: 0x2a23000e  slti        $v1, $s1, 0xE
    ctx->pc = 0x294848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x29484c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29484Cu;
    {
        const bool branch_taken_0x29484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29484c) {
            ctx->pc = 0x294838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294838;
        }
    }
    ctx->pc = 0x294854u;
    // 0x294854: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29485c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29485cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294860: 0x3e00008  jr          $ra
    ctx->pc = 0x294860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294860u;
        // 0x294864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294868u;
}
