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

// Function: sub_001EF050
// Address: 0x1ef050 - 0x1ef07c
void sub_001EF050_0x1ef050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF050_0x1ef050");
#endif

    ctx->pc = 0x1ef050u;

    // 0x1ef050: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef054: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF054u;
    {
        const bool branch_taken_0x1ef054 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF054u;
        // 0x1ef058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef054) {
            ctx->pc = 0x1EF064u;
            goto label_1ef064;
        }
    }
    ctx->pc = 0x1EF05Cu;
    // 0x1ef05c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF05Cu;
    {
        const bool branch_taken_0x1ef05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef05c) {
            ctx->pc = 0x1EF074u;
            goto label_1ef074;
        }
    }
    ctx->pc = 0x1EF064u;
label_1ef064:
    // 0x1ef064: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ef064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef068: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ef068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ef06c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef074:
    // 0x1ef074: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF07Cu;
}
