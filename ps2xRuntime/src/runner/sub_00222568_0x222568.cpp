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

// Function: sub_00222568
// Address: 0x222568 - 0x22257c
void sub_00222568_0x222568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222568_0x222568");
#endif

    ctx->pc = 0x222568u;

    // 0x222568: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x222568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22256c: 0xfc820148  sd          $v0, 0x148($a0)
    ctx->pc = 0x22256cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x222570: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x222570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x222574: 0x3e00008  jr          $ra
    ctx->pc = 0x222574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222574u;
        // 0x222578: 0xfc830150  sd          $v1, 0x150($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22257Cu;
}
