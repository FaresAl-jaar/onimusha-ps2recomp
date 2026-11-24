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

// Function: sub_00326B00
// Address: 0x326b00 - 0x326b28
void sub_00326B00_0x326b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B00_0x326b00");
#endif

    ctx->pc = 0x326b00u;

    // 0x326b00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x326B00u;
    {
        const bool branch_taken_0x326b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B00u;
        // 0x326b04: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b00) {
            ctx->pc = 0x326B20u;
            goto label_326b20;
        }
    }
    ctx->pc = 0x326B08u;
    // 0x326b08: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x326b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x326b0c: 0x24a577e0  addiu       $a1, $a1, 0x77E0
    ctx->pc = 0x326b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30688));
    // 0x326b10: 0x24638670  addiu       $v1, $v1, -0x7990
    ctx->pc = 0x326b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936176));
    // 0x326b14: 0xac8504d4  sw          $a1, 0x4D4($a0)
    ctx->pc = 0x326b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 5));
    // 0x326b18: 0xac8304d4  sw          $v1, 0x4D4($a0)
    ctx->pc = 0x326b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 3));
    // 0x326b1c: 0x0  nop
    ctx->pc = 0x326b1cu;
    // NOP
label_326b20:
    // 0x326b20: 0x3e00008  jr          $ra
    ctx->pc = 0x326B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B28u;
}
