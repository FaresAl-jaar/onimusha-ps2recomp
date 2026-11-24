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

// Function: sub_00222598
// Address: 0x222598 - 0x2225ac
void sub_00222598_0x222598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222598_0x222598");
#endif

    ctx->pc = 0x222598u;

    // 0x222598: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x222598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22259c: 0xfc820168  sd          $v0, 0x168($a0)
    ctx->pc = 0x22259cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 360), GPR_U64(ctx, 2));
    // 0x2225a0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x2225a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2225a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2225A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2225A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225A4u;
        // 0x2225a8: 0xfc830170  sd          $v1, 0x170($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2225A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2225ACu;
}
