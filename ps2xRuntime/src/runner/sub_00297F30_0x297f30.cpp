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

// Function: sub_00297F30
// Address: 0x297f30 - 0x297f40
void sub_00297F30_0x297f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F30_0x297f30");
#endif

    ctx->pc = 0x297f30u;

    // 0x297f30: 0xdc830520  ld          $v1, 0x520($a0)
    ctx->pc = 0x297f30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 1312)));
    // 0x297f34: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x297f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x297f38: 0x3e00008  jr          $ra
    ctx->pc = 0x297F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F38u;
        // 0x297f3c: 0xfc830520  sd          $v1, 0x520($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297F40u;
}
