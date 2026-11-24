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

// Function: sub_0014ECA0
// Address: 0x14eca0 - 0x14ecac
void sub_0014ECA0_0x14eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ECA0_0x14eca0");
#endif

    ctx->pc = 0x14eca0u;

    // 0x14eca0: 0xa0a000e4  sb          $zero, 0xE4($a1)
    ctx->pc = 0x14eca0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x14ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECA4u;
        // 0x14eca8: 0xaca000e0  sw          $zero, 0xE0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ECACu;
}
