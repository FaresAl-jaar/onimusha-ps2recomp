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

// Function: sub_003E0F70
// Address: 0x3e0f70 - 0x3e0f90
void sub_003E0F70_0x3e0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0F70_0x3e0f70");
#endif

    ctx->pc = 0x3e0f70u;

    // 0x3e0f70: 0x8f838cf4  lw          $v1, -0x730C($gp)
    ctx->pc = 0x3e0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e0f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e0f78: 0xa0640390  sb          $a0, 0x390($v1)
    ctx->pc = 0x3e0f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 912), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e0f7c: 0x8f838cf4  lw          $v1, -0x730C($gp)
    ctx->pc = 0x3e0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e0f80: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x3e0f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e0f84: 0x8f838cf4  lw          $v1, -0x730C($gp)
    ctx->pc = 0x3e0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
    // 0x3e0f88: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F88u;
        // 0x3e0f8c: 0xac600398  sw          $zero, 0x398($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0F90u;
}
