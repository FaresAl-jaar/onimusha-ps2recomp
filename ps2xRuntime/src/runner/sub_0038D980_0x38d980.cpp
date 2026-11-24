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

// Function: sub_0038D980
// Address: 0x38d980 - 0x38d9a0
void sub_0038D980_0x38d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D980_0x38d980");
#endif

    ctx->pc = 0x38d980u;

    // 0x38d980: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x38d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x38d984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38d984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38d988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38d98c: 0xac650100  sw          $a1, 0x100($v1)
    ctx->pc = 0x38d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 5));
    // 0x38d990: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x38d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x38d994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38d998: 0x3e00008  jr          $ra
    ctx->pc = 0x38D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D998u;
        // 0x38d99c: 0xac830180  sw          $v1, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D9A0u;
}
