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

// Function: sub_0014B6A0
// Address: 0x14b6a0 - 0x14b6c0
void sub_0014B6A0_0x14b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6A0_0x14b6a0");
#endif

    ctx->pc = 0x14b6a0u;

    // 0x14b6a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14b6a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b6ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b6b0: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x14b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x14b6b4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x14b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x14b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6B8u;
        // 0x14b6bc: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6C0u;
}
