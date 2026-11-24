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

// Function: sub_00212BB8
// Address: 0x212bb8 - 0x212bd0
void sub_00212BB8_0x212bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212BB8_0x212bb8");
#endif

    ctx->pc = 0x212bb8u;

    // 0x212bb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x212BB8u;
    {
        const bool branch_taken_0x212bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212bb8) {
            ctx->pc = 0x212BC8u;
            goto label_212bc8;
        }
    }
    ctx->pc = 0x212BC0u;
    // 0x212bc0: 0xac8637a4  sw          $a2, 0x37A4($a0)
    ctx->pc = 0x212bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14244), GPR_U32(ctx, 6));
    // 0x212bc4: 0xac8537a0  sw          $a1, 0x37A0($a0)
    ctx->pc = 0x212bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14240), GPR_U32(ctx, 5));
label_212bc8:
    // 0x212bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x212BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212BD0u;
}
