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

// Function: sub_0014B550
// Address: 0x14b550 - 0x14b58c
void sub_0014B550_0x14b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B550_0x14b550");
#endif

    switch (ctx->pc) {
        case 0x14b57cu: goto label_14b57c;
        default: break;
    }

    ctx->pc = 0x14b550u;

    // 0x14b550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b554: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b558: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B558u;
    {
        const bool branch_taken_0x14b558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B558u;
        // 0x14b55c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b558) {
            ctx->pc = 0x14B568u;
            goto label_14b568;
        }
    }
    ctx->pc = 0x14B560u;
    // 0x14b560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B560u;
    {
        const bool branch_taken_0x14b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B560u;
        // 0x14b564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b560) {
            ctx->pc = 0x14B580u;
            goto label_14b580;
        }
    }
    ctx->pc = 0x14B568u;
label_14b568:
    // 0x14b568: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14b568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b56c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b570: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x14b570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b574: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x14B574u;
    SET_GPR_U32(ctx, 31, 0x14B57Cu);
    ctx->pc = 0x14B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B574u;
    // 0x14b578: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x14B574u, 0x14B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B57Cu;
label_14b57c:
    // 0x14b57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14b580:
    // 0x14b580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b584: 0x3e00008  jr          $ra
    ctx->pc = 0x14B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B584u;
        // 0x14b588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B58Cu;
}
