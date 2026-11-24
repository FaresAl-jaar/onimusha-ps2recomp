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

// Function: sub_0035C880
// Address: 0x35c880 - 0x35c8a0
void sub_0035C880_0x35c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C880_0x35c880");
#endif

    ctx->pc = 0x35c880u;

    // 0x35c880: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c888: 0xa0640550  sb          $a0, 0x550($v1)
    ctx->pc = 0x35c888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1360), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c88c: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c890: 0xa0600551  sb          $zero, 0x551($v1)
    ctx->pc = 0x35c890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1361), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c894: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c898: 0x3e00008  jr          $ra
    ctx->pc = 0x35C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C898u;
        // 0x35c89c: 0xac600560  sw          $zero, 0x560($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C8A0u;
}
