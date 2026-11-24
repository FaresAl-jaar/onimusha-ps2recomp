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

// Function: sub_0017B9D0
// Address: 0x17b9d0 - 0x17b9e4
void sub_0017B9D0_0x17b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9D0_0x17b9d0");
#endif

    ctx->pc = 0x17b9d0u;

    // 0x17b9d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17b9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b9d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17b9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9DCu;
        // 0x17b9e0: 0xaf808658  sw          $zero, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B9E4u;
}
