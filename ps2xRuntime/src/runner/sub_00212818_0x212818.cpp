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

// Function: sub_00212818
// Address: 0x212818 - 0x212830
void sub_00212818_0x212818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212818_0x212818");
#endif

    ctx->pc = 0x212818u;

    // 0x212818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212818u;
    {
        const bool branch_taken_0x212818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212818u;
        // 0x21281c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212818) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x212820u;
    // 0x212820: 0x8c831f7c  lw          $v1, 0x1F7C($a0)
    ctx->pc = 0x212820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x212824: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x212824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_212828:
    // 0x212828: 0x3e00008  jr          $ra
    ctx->pc = 0x212828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212830u;
}
