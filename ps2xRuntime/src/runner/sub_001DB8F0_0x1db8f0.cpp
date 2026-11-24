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

// Function: sub_001DB8F0
// Address: 0x1db8f0 - 0x1db908
void sub_001DB8F0_0x1db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB8F0_0x1db8f0");
#endif

    ctx->pc = 0x1db8f0u;

    // 0x1db8f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB8F0u;
    {
        const bool branch_taken_0x1db8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8F0u;
        // 0x1db8f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db8f0) {
            ctx->pc = 0x1DB900u;
            goto label_1db900;
        }
    }
    ctx->pc = 0x1DB8F8u;
    // 0x1db8f8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1db8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
    // 0x1db8fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1db8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1db900:
    // 0x1db900: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB900u;
        // 0x1db904: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB908u;
}
