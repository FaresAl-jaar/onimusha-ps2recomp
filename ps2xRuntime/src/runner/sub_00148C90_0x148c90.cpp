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

// Function: sub_00148C90
// Address: 0x148c90 - 0x148cb4
void sub_00148C90_0x148c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148C90_0x148c90");
#endif

    ctx->pc = 0x148c90u;

    // 0x148c90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148c94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x148c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x148c98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x148c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x148c9c: 0xa085002c  sb          $a1, 0x2C($a0)
    ctx->pc = 0x148c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 5));
    // 0x148ca0: 0xa086002d  sb          $a2, 0x2D($a0)
    ctx->pc = 0x148ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 6));
    // 0x148ca4: 0xa087002e  sb          $a3, 0x2E($a0)
    ctx->pc = 0x148ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 7));
    // 0x148ca8: 0xa088002f  sb          $t0, 0x2F($a0)
    ctx->pc = 0x148ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 8));
    // 0x148cac: 0x3e00008  jr          $ra
    ctx->pc = 0x148CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CACu;
        // 0x148cb0: 0xa0890030  sb          $t1, 0x30($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148CB4u;
}
