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

// Function: sub_0029CE50
// Address: 0x29ce50 - 0x29ce70
void sub_0029CE50_0x29ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE50_0x29ce50");
#endif

    ctx->pc = 0x29ce50u;

    // 0x29ce50: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x29ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x29ce54: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x29ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x29ce58: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x29ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x29ce5c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x29ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x29ce60: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x29ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x29ce64: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x29ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x29ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE68u;
        // 0x29ce6c: 0xac850044  sw          $a1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE70u;
}
