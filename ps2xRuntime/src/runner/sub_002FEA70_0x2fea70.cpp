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

// Function: sub_002FEA70
// Address: 0x2fea70 - 0x2feaa0
void sub_002FEA70_0x2fea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEA70_0x2fea70");
#endif

    ctx->pc = 0x2fea70u;

    // 0x2fea70: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fea70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fea74: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2fea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2fea78: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x2fea78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x2fea7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fea80: 0xa0860011  sb          $a2, 0x11($a0)
    ctx->pc = 0x2fea80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 6));
    // 0x2fea84: 0xa0870012  sb          $a3, 0x12($a0)
    ctx->pc = 0x2fea84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fea88: 0x8c630858  lw          $v1, 0x858($v1)
    ctx->pc = 0x2fea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x2fea8c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fea90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2fea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fea94: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2fea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2fea98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA98u;
        // 0x2fea9c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEAA0u;
}
