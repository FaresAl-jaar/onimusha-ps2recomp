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

// Function: sub_00204040
// Address: 0x204040 - 0x204050
void sub_00204040_0x204040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204040_0x204040");
#endif

    ctx->pc = 0x204040u;

    // 0x204040: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x204040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x204044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204048: 0x3e00008  jr          $ra
    ctx->pc = 0x204048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204048u;
        // 0x20404c: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204050u;
}
