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

// Function: sub_003C7B10
// Address: 0x3c7b10 - 0x3c7b50
void sub_003C7B10_0x3c7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7B10_0x3c7b10");
#endif

    switch (ctx->pc) {
        case 0x3c7b28u: goto label_3c7b28;
        default: break;
    }

    ctx->pc = 0x3c7b10u;

    // 0x3c7b10: 0x8f838cb8  lw          $v1, -0x7348($gp)
    ctx->pc = 0x3c7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
    // 0x3c7b14: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C7B14u;
    {
        const bool branch_taken_0x3c7b14 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3c7b14) {
            ctx->pc = 0x3C7B48u;
            goto label_3c7b48;
        }
    }
    ctx->pc = 0x3C7B1Cu;
    // 0x3c7b1c: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x3c7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x3c7b20: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C7B20u;
    {
        const bool branch_taken_0x3c7b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B20u;
        // 0x3c7b24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b20) {
            ctx->pc = 0x3C7B48u;
            goto label_3c7b48;
        }
    }
    ctx->pc = 0x3C7B28u;
label_3c7b28:
    // 0x3c7b28: 0x8ca405bc  lw          $a0, 0x5BC($a1)
    ctx->pc = 0x3c7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1468)));
    // 0x3c7b2c: 0xa0a3053a  sb          $v1, 0x53A($a1)
    ctx->pc = 0x3c7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c7b30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c7b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7b34: 0x0  nop
    ctx->pc = 0x3c7b34u;
    // NOP
    // 0x3c7b38: 0x0  nop
    ctx->pc = 0x3c7b38u;
    // NOP
    // 0x3c7b3c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C7B3Cu;
    {
        const bool branch_taken_0x3c7b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7b3c) {
            ctx->pc = 0x3C7B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7b28;
        }
    }
    ctx->pc = 0x3C7B44u;
    // 0x3c7b44: 0x0  nop
    ctx->pc = 0x3c7b44u;
    // NOP
label_3c7b48:
    // 0x3c7b48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7B50u;
}
