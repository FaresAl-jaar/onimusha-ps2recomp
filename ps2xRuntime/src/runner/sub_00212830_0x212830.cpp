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

// Function: sub_00212830
// Address: 0x212830 - 0x212848
void sub_00212830_0x212830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212830_0x212830");
#endif

    ctx->pc = 0x212830u;

    // 0x212830: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212830u;
    {
        const bool branch_taken_0x212830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212830u;
        // 0x212834: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212830) {
            ctx->pc = 0x212840u;
            goto label_212840;
        }
    }
    ctx->pc = 0x212838u;
    // 0x212838: 0x8c831f7c  lw          $v1, 0x1F7C($a0)
    ctx->pc = 0x212838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x21283c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_212840:
    // 0x212840: 0x3e00008  jr          $ra
    ctx->pc = 0x212840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212848u;
}
