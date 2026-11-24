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

// Function: sub_002B9B60
// Address: 0x2b9b60 - 0x2b9b88
void sub_002B9B60_0x2b9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B60_0x2b9b60");
#endif

    ctx->pc = 0x2b9b60u;

    // 0x2b9b60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9B60u;
    {
        const bool branch_taken_0x2b9b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9B60u;
        // 0x2b9b64: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9b60) {
            ctx->pc = 0x2B9B80u;
            goto label_2b9b80;
        }
    }
    ctx->pc = 0x2B9B68u;
    // 0x2b9b68: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2b9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2b9b6c: 0x24a577e0  addiu       $a1, $a1, 0x77E0
    ctx->pc = 0x2b9b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30688));
    // 0x2b9b70: 0x24637390  addiu       $v1, $v1, 0x7390
    ctx->pc = 0x2b9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29584));
    // 0x2b9b74: 0xac8504d4  sw          $a1, 0x4D4($a0)
    ctx->pc = 0x2b9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 5));
    // 0x2b9b78: 0xac8304d4  sw          $v1, 0x4D4($a0)
    ctx->pc = 0x2b9b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 3));
    // 0x2b9b7c: 0x0  nop
    ctx->pc = 0x2b9b7cu;
    // NOP
label_2b9b80:
    // 0x2b9b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9B88u;
}
