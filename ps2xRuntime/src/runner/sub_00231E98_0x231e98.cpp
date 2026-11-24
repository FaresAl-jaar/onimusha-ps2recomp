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

// Function: sub_00231E98
// Address: 0x231e98 - 0x231eb8
void sub_00231E98_0x231e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E98_0x231e98");
#endif

    ctx->pc = 0x231e98u;

    // 0x231e98: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x231e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x231e9c: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x231e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x231ea0: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x231ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x231ea4: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x231ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x231ea8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x231ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x231eac: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x231eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x231eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x231EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EB0u;
        // 0x231eb4: 0xa0860002  sb          $a2, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231EB8u;
}
