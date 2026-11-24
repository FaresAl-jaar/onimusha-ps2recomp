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

// Function: sub_002330C8
// Address: 0x2330c8 - 0x2330d4
void sub_002330C8_0x2330c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002330C8_0x2330c8");
#endif

    ctx->pc = 0x2330c8u;

    // 0x2330c8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2330cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2330CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2330D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330CCu;
        // 0x2330d0: 0xac44fc08  sw          $a0, -0x3F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2330CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2330D4u;
}
