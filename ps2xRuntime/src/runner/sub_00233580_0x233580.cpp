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

// Function: sub_00233580
// Address: 0x233580 - 0x233598
void sub_00233580_0x233580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233580_0x233580");
#endif

    ctx->pc = 0x233580u;

    // 0x233580: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233584: 0x2463fc70  addiu       $v1, $v1, -0x390
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966384));
    // 0x233588: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x233588u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFC70u));
    // 0x23358c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23358cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x233590: 0x3e00008  jr          $ra
    ctx->pc = 0x233590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233590u;
        // 0x233594: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233598u;
}
