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

// Function: sub_0023ACF8
// Address: 0x23acf8 - 0x23ad00
void sub_0023ACF8_0x23acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ACF8_0x23acf8");
#endif

    ctx->pc = 0x23acf8u;

    // 0x23acf8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF8u;
        // 0x23acfc: 0xa08500ad  sb          $a1, 0xAD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 173), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AD00u;
}
