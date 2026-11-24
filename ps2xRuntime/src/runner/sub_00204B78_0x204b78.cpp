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

// Function: sub_00204B78
// Address: 0x204b78 - 0x204ba8
void sub_00204B78_0x204b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204B78_0x204b78");
#endif

    ctx->pc = 0x204b78u;

    // 0x204b78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x204b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x204b7c: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x204b80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x204b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x204b84: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x204b88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204b8c: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x204b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x204b90: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x204b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x204b94: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x204b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x204b98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204b9c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x204b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x204ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x204BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA0u;
        // 0x204ba4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204BA8u;
}
