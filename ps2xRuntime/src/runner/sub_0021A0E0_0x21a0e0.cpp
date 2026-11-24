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

// Function: sub_0021A0E0
// Address: 0x21a0e0 - 0x21a0f4
void sub_0021A0E0_0x21a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A0E0_0x21a0e0");
#endif

    ctx->pc = 0x21a0e0u;

    // 0x21a0e0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A0E0u;
    {
        const bool branch_taken_0x21a0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0E0u;
        // 0x21a0e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0e0) {
            ctx->pc = 0x21A0ECu;
            goto label_21a0ec;
        }
    }
    ctx->pc = 0x21A0E8u;
    // 0x21a0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21a0ec:
    // 0x21a0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x21A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0F4u;
}
