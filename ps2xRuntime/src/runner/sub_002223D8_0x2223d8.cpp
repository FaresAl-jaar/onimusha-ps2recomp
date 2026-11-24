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

// Function: sub_002223D8
// Address: 0x2223d8 - 0x2223f0
void sub_002223D8_0x2223d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002223D8_0x2223d8");
#endif

    ctx->pc = 0x2223d8u;

    // 0x2223d8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2223dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2223e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2223e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2223e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2223e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2223E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0xac861f34  sw          $a2, 0x1F34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 7988), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2223E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2223F0u;
}
