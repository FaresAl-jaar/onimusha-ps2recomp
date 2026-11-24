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

// Function: sub_0014BBC0
// Address: 0x14bbc0 - 0x14bbdc
void sub_0014BBC0_0x14bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BBC0_0x14bbc0");
#endif

    ctx->pc = 0x14bbc0u;

    // 0x14bbc0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14bbc4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14bbc8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x14bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x14bbcc: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x14bbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x14bbd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x14BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBD4u;
        // 0x14bbd8: 0xa0830029  sb          $v1, 0x29($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BBDCu;
}
