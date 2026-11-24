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

// Function: sub_0020FB40
// Address: 0x20fb40 - 0x20fb74
void sub_0020FB40_0x20fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FB40_0x20fb40");
#endif

    ctx->pc = 0x20fb40u;

    // 0x20fb40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20fb44: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20fb48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fb4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20fb50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fb54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20fb58: 0x24841320  addiu       $a0, $a0, 0x1320
    ctx->pc = 0x20fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4896));
    // 0x20fb5c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20fb60: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FB60u;
    {
        const bool branch_taken_0x20fb60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB60u;
        // 0x20fb64: 0x461821  addu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb60) {
            ctx->pc = 0x20FB6Cu;
            goto label_20fb6c;
        }
    }
    ctx->pc = 0x20FB68u;
    // 0x20fb68: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x20fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_20fb6c:
    // 0x20fb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x20FB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FB74u;
}
