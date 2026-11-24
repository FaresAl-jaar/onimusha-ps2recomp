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

// Function: sub_00225168
// Address: 0x225168 - 0x225188
void sub_00225168_0x225168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225168_0x225168");
#endif

    ctx->pc = 0x225168u;

    // 0x225168: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x225168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x22516c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x22516cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225170: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x225170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x225174: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x225174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x225178: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x225178u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22517c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x22517cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x225180: 0x3e00008  jr          $ra
    ctx->pc = 0x225180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225180u;
        // 0x225184: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225188u;
}
