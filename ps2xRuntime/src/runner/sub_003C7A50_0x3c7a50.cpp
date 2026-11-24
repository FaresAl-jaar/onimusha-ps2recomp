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

// Function: sub_003C7A50
// Address: 0x3c7a50 - 0x3c7a90
void sub_003C7A50_0x3c7a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7A50_0x3c7a50");
#endif

    ctx->pc = 0x3c7a50u;

    // 0x3c7a50: 0x8f838cb4  lw          $v1, -0x734C($gp)
    ctx->pc = 0x3c7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
    // 0x3c7a54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7A54u;
    {
        const bool branch_taken_0x3c7a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7a54) {
            ctx->pc = 0x3C7A70u;
            goto label_3c7a70;
        }
    }
    ctx->pc = 0x3C7A5Cu;
    // 0x3c7a5c: 0xac8305b8  sw          $v1, 0x5B8($a0)
    ctx->pc = 0x3c7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 3));
    // 0x3c7a60: 0x8f838cb4  lw          $v1, -0x734C($gp)
    ctx->pc = 0x3c7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
    // 0x3c7a64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7A64u;
    {
        const bool branch_taken_0x3c7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A64u;
        // 0x3c7a68: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a64) {
            ctx->pc = 0x3C7A78u;
            goto label_3c7a78;
        }
    }
    ctx->pc = 0x3C7A6Cu;
    // 0x3c7a6c: 0x0  nop
    ctx->pc = 0x3c7a6cu;
    // NOP
label_3c7a70:
    // 0x3c7a70: 0xaf848cb0  sw          $a0, -0x7350($gp)
    ctx->pc = 0x3c7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 4));
    // 0x3c7a74: 0xac8005b8  sw          $zero, 0x5B8($a0)
    ctx->pc = 0x3c7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 0));
label_3c7a78:
    // 0x3c7a78: 0xac8005bc  sw          $zero, 0x5BC($a0)
    ctx->pc = 0x3c7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 0));
    // 0x3c7a7c: 0x8f838cb8  lw          $v1, -0x7348($gp)
    ctx->pc = 0x3c7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x3c7a80: 0xaf848cb4  sw          $a0, -0x734C($gp)
    ctx->pc = 0x3c7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 4));
    // 0x3c7a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c7a88: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A88u;
        // 0x3c7a8c: 0xaf838cb8  sw          $v1, -0x7348($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7A90u;
}
