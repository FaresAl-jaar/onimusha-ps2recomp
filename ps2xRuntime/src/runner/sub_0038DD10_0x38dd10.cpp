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

// Function: sub_0038DD10
// Address: 0x38dd10 - 0x38dd2c
void sub_0038DD10_0x38dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DD10_0x38dd10");
#endif

    ctx->pc = 0x38dd10u;

    // 0x38dd10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x38dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x38dd14: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x38dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38dd18: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x38dd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x38dd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38dd20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38dd24: 0x3e00008  jr          $ra
    ctx->pc = 0x38DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD24u;
        // 0x38dd28: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DD2Cu;
}
