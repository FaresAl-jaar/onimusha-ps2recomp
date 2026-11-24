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

// Function: sub_0020FA20
// Address: 0x20fa20 - 0x20fa40
void sub_0020FA20_0x20fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FA20_0x20fa20");
#endif

    ctx->pc = 0x20fa20u;

    // 0x20fa20: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20fa24: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20fa28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fa2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20fa30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fa34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20fa38: 0x3e00008  jr          $ra
    ctx->pc = 0x20FA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA38u;
        // 0x20fa3c: 0x8c821344  lw          $v0, 0x1344($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FA40u;
}
