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

// Function: sub_002BCB90
// Address: 0x2bcb90 - 0x2bcba8
void sub_002BCB90_0x2bcb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB90_0x2bcb90");
#endif

    ctx->pc = 0x2bcb90u;

    // 0x2bcb90: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bcb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bcb94: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2bcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2bcb98: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x2bcb98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bcb9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bcb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bcba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA0u;
        // 0x2bcba4: 0xa06407fa  sb          $a0, 0x7FA($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2042), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCBA8u;
}
