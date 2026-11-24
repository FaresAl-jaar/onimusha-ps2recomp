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

// Function: sub_002947D0
// Address: 0x2947d0 - 0x294818
void sub_002947D0_0x2947d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002947D0_0x2947d0");
#endif

    switch (ctx->pc) {
        case 0x2947e8u: goto label_2947e8;
        case 0x2947f0u: goto label_2947f0;
        default: break;
    }

    ctx->pc = 0x2947d0u;

    // 0x2947d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2947d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2947d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2947d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2947d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2947d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2947dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2947dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2947e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2947e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2947e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2947e8:
    // 0x2947e8: 0xc0c0860  jal         func_302180
    ctx->pc = 0x2947E8u;
    SET_GPR_U32(ctx, 31, 0x2947F0u);
    ctx->pc = 0x2947ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2947E8u;
    // 0x2947ec: 0x8e042988  lw          $a0, 0x2988($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x2947E8u, 0x2947F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947F0u;
label_2947f0:
    // 0x2947f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2947f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2947f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2947f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2947f8: 0x2a23000e  slti        $v1, $s1, 0xE
    ctx->pc = 0x2947f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2947fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2947FCu;
    {
        const bool branch_taken_0x2947fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2947fc) {
            ctx->pc = 0x2947E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2947e8;
        }
    }
    ctx->pc = 0x294804u;
    // 0x294804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29480c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29480cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294810: 0x3e00008  jr          $ra
    ctx->pc = 0x294810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294810u;
        // 0x294814: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294818u;
}
