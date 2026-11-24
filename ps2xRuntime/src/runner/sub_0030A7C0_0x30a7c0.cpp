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

// Function: sub_0030A7C0
// Address: 0x30a7c0 - 0x30a7cc
void sub_0030A7C0_0x30a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A7C0_0x30a7c0");
#endif

    ctx->pc = 0x30a7c0u;

    // 0x30a7c0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x30a7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30A7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7C4u;
        // 0x30a7c8: 0x7c830070  sq          $v1, 0x70($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A7CCu;
}
