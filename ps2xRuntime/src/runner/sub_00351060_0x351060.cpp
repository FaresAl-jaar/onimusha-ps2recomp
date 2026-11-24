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

// Function: sub_00351060
// Address: 0x351060 - 0x351074
void sub_00351060_0x351060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351060_0x351060");
#endif

    ctx->pc = 0x351060u;

    // 0x351060: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x351060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x351064: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x351064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x351068: 0xa0870016  sb          $a3, 0x16($a0)
    ctx->pc = 0x351068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 7));
    // 0x35106c: 0x3e00008  jr          $ra
    ctx->pc = 0x35106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35106Cu;
        // 0x351070: 0xa0880017  sb          $t0, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351074u;
}
