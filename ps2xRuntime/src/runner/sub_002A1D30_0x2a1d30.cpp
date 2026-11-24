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

// Function: sub_002A1D30
// Address: 0x2a1d30 - 0x2a1d4c
void sub_002A1D30_0x2a1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1D30_0x2a1d30");
#endif

    ctx->pc = 0x2a1d30u;

    // 0x2a1d30: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x2a1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1d34: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1d38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1d3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1d40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D44u;
        // 0x2a1d48: 0xa0660002  sb          $a2, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1D4Cu;
}
