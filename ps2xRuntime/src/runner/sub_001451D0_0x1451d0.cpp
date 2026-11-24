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

// Function: sub_001451D0
// Address: 0x1451d0 - 0x145208
void sub_001451D0_0x1451d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451D0_0x1451d0");
#endif

    switch (ctx->pc) {
        case 0x1451e0u: goto label_1451e0;
        default: break;
    }

    ctx->pc = 0x1451d0u;

    // 0x1451d0: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1451D0u;
    {
        const bool branch_taken_0x1451d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1451d0) {
            ctx->pc = 0x145200u;
            goto label_145200;
        }
    }
    ctx->pc = 0x1451D8u;
    // 0x1451d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1451D8u;
    {
        const bool branch_taken_0x1451d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1451d8) {
            ctx->pc = 0x145200u;
            goto label_145200;
        }
    }
    ctx->pc = 0x1451E0u;
label_1451e0:
    // 0x1451e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1451e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1451e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1451e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1451e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1451e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1451ec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1451ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1451f0: 0x0  nop
    ctx->pc = 0x1451f0u;
    // NOP
    // 0x1451f4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1451F4u;
    {
        const bool branch_taken_0x1451f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1451f4) {
            ctx->pc = 0x1451E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1451e0;
        }
    }
    ctx->pc = 0x1451FCu;
    // 0x1451fc: 0x0  nop
    ctx->pc = 0x1451fcu;
    // NOP
label_145200:
    // 0x145200: 0x3e00008  jr          $ra
    ctx->pc = 0x145200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145208u;
}
