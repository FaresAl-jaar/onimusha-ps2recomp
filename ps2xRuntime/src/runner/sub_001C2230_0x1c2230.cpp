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

// Function: sub_001C2230
// Address: 0x1c2230 - 0x1c2250
void sub_001C2230_0x1c2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2230_0x1c2230");
#endif

    ctx->pc = 0x1c2230u;

    // 0x1c2230: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2234: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1c2234u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1c2238: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c223c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1c223cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1c2240: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2244: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c2244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c2248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2248u;
        // 0x1c224c: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2250u;
}
