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

// Function: sub_002CB120
// Address: 0x2cb120 - 0x2cb140
void sub_002CB120_0x2cb120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB120_0x2cb120");
#endif

    ctx->pc = 0x2cb120u;

    // 0x2cb120: 0x908629d0  lbu         $a2, 0x29D0($a0)
    ctx->pc = 0x2cb120u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x2cb124: 0x90a429d0  lbu         $a0, 0x29D0($a1)
    ctx->pc = 0x2cb124u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10704)));
    // 0x2cb128: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb12c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cb12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb130: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cb130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cb134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cb134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cb138: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB138u;
        // 0x2cb13c: 0xa3838a24  sb          $v1, -0x75DC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937124), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB140u;
}
