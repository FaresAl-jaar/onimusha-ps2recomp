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

// Function: sub_00209468
// Address: 0x209468 - 0x209484
void sub_00209468_0x209468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209468_0x209468");
#endif

    ctx->pc = 0x209468u;

    // 0x209468: 0x24820194  addiu       $v0, $a0, 0x194
    ctx->pc = 0x209468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x20946c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209470: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x209470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x209474: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209478: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x209478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20947c: 0x3e00008  jr          $ra
    ctx->pc = 0x20947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20947Cu;
        // 0x209480: 0xac830190  sw          $v1, 0x190($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20947Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209484u;
}
