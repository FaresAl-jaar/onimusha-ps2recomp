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

// Function: sub_00392B30
// Address: 0x392b30 - 0x392b40
void sub_00392B30_0x392b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392B30_0x392b30");
#endif

    ctx->pc = 0x392b30u;

    // 0x392b30: 0x94830034  lhu         $v1, 0x34($a0)
    ctx->pc = 0x392b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x392b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392b38: 0x3e00008  jr          $ra
    ctx->pc = 0x392B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B38u;
        // 0x392b3c: 0xa4830034  sh          $v1, 0x34($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392B40u;
}
