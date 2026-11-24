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

// Function: sub_002239C0
// Address: 0x2239c0 - 0x2239e8
void sub_002239C0_0x2239c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002239C0_0x2239c0");
#endif

    ctx->pc = 0x2239c0u;

    // 0x2239c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2239c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2239c4: 0x2843ffff  slti        $v1, $v0, -0x1
    ctx->pc = 0x2239c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2239c8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2239c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2239cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2239CCu;
    {
        const bool branch_taken_0x2239cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239CCu;
        // 0x2239d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239cc) {
            ctx->pc = 0x2239E0u;
            goto label_2239e0;
        }
    }
    ctx->pc = 0x2239D4u;
    // 0x2239d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2239D4u;
    {
        const bool branch_taken_0x2239d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239D4u;
        // 0x2239d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239d4) {
            ctx->pc = 0x2239E0u;
            goto label_2239e0;
        }
    }
    ctx->pc = 0x2239DCu;
    // 0x2239dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2239dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2239e0:
    // 0x2239e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2239E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2239E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2239E8u;
}
