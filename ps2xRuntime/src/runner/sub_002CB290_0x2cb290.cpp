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

// Function: sub_002CB290
// Address: 0x2cb290 - 0x2cb2b4
void sub_002CB290_0x2cb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB290_0x2cb290");
#endif

    ctx->pc = 0x2cb290u;

    // 0x2cb290: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2cb290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2cb294: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2cb294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2cb298: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2cb298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2cb29c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2cb29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cb2a0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2cb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2cb2a4: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cb2a8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2cb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2cb2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2ACu;
        // 0x2cb2b0: 0xace40010  sw          $a0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB2B4u;
}
