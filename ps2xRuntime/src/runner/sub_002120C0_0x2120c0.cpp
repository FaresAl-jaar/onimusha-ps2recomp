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

// Function: sub_002120C0
// Address: 0x2120c0 - 0x2120e4
void sub_002120C0_0x2120c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002120C0_0x2120c0");
#endif

    ctx->pc = 0x2120c0u;

    // 0x2120c0: 0x24850098  addiu       $a1, $a0, 0x98
    ctx->pc = 0x2120c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x2120c4: 0x2484090c  addiu       $a0, $a0, 0x90C
    ctx->pc = 0x2120c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x2120c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2120c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2120cc: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2120ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2120d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2120d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2120d4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2120d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2120d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2120d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2120dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2120DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2120E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120DCu;
        // 0x2120e0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120E4u;
}
