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

// Function: sub_001D0BC0
// Address: 0x1d0bc0 - 0x1d0be4
void sub_001D0BC0_0x1d0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BC0_0x1d0bc0");
#endif

    ctx->pc = 0x1d0bc0u;

    // 0x1d0bc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d0bc4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d0bc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0bcc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0bd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d0bd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d0bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BDCu;
        // 0x1d0be0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BE4u;
}
