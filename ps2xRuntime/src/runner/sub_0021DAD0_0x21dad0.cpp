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

// Function: sub_0021DAD0
// Address: 0x21dad0 - 0x21dadc
void sub_0021DAD0_0x21dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DAD0_0x21dad0");
#endif

    ctx->pc = 0x21dad0u;

    // 0x21dad0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21dad4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD4u;
        // 0x21dad8: 0xac44a1c4  sw          $a0, -0x5E3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DADCu;
}
