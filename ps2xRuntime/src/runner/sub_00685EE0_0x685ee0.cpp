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

// Function: sub_00685EE0
// Address: 0x685ee0 - 0x685f28
void sub_00685EE0_0x685ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685EE0_0x685ee0");
#endif

    switch (ctx->pc) {
        case 0x685ef0u: goto label_685ef0;
        case 0x685ef8u: goto label_685ef8;
        default: break;
    }

    ctx->pc = 0x685ee0u;

    // 0x685ee0: 0x3c060091  lui         $a2, 0x91
    ctx->pc = 0x685ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)145 << 16));
    // 0x685ee4: 0x24c64100  addiu       $a2, $a2, 0x4100
    ctx->pc = 0x685ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16640));
    // 0x685ee8: 0x3c030091  lui         $v1, 0x91
    ctx->pc = 0x685ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)145 << 16));
    // 0x685eec: 0x246347c0  addiu       $v1, $v1, 0x47C0
    ctx->pc = 0x685eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18368));
label_685ef0:
    // 0x685ef0: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x685ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x685ef4: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x685ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_685ef8:
    // 0x685ef8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x685ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x685efc: 0x0  nop
    ctx->pc = 0x685efcu;
    // NOP
    // 0x685f00: 0x0  nop
    ctx->pc = 0x685f00u;
    // NOP
    // 0x685f04: 0x0  nop
    ctx->pc = 0x685f04u;
    // NOP
    // 0x685f08: 0x0  nop
    ctx->pc = 0x685f08u;
    // NOP
    // 0x685f0c: 0x14a4fffa  bne         $a1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x685F0Cu;
    {
        const bool branch_taken_0x685f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x685f0c) {
            ctx->pc = 0x685EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685ef8;
        }
    }
    ctx->pc = 0x685F14u;
    // 0x685f14: 0x24c60048  addiu       $a2, $a2, 0x48
    ctx->pc = 0x685f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x685f18: 0x14c3fff5  bne         $a2, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x685F18u;
    {
        const bool branch_taken_0x685f18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x685f18) {
            ctx->pc = 0x685EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685ef0;
        }
    }
    ctx->pc = 0x685F20u;
    // 0x685f20: 0x3e00008  jr          $ra
    ctx->pc = 0x685F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685F28u;
}
