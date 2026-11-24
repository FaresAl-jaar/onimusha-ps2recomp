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

// Function: sub_00222550
// Address: 0x222550 - 0x222564
void sub_00222550_0x222550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222550_0x222550");
#endif

    ctx->pc = 0x222550u;

    // 0x222550: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x222550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222554: 0xfc820138  sd          $v0, 0x138($a0)
    ctx->pc = 0x222554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 312), GPR_U64(ctx, 2));
    // 0x222558: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x222558u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22255c: 0x3e00008  jr          $ra
    ctx->pc = 0x22255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22255Cu;
        // 0x222560: 0xfc830140  sd          $v1, 0x140($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 320), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222564u;
}
