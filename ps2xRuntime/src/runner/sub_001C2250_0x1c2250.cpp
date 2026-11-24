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

// Function: sub_001C2250
// Address: 0x1c2250 - 0x1c2270
void sub_001C2250_0x1c2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2250_0x1c2250");
#endif

    ctx->pc = 0x1c2250u;

    // 0x1c2250: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2254: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1c2254u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1c2258: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c225c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1c225cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1c2260: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2264: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c2264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c2268: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2270u;
}
