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

// Function: sub_002A0A10
// Address: 0x2a0a10 - 0x2a0a58
void sub_002A0A10_0x2a0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0A10_0x2a0a10");
#endif

    switch (ctx->pc) {
        case 0x2a0a20u: goto label_2a0a20;
        default: break;
    }

    ctx->pc = 0x2a0a10u;

    // 0x2a0a10: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2a0a14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0A14u;
    {
        const bool branch_taken_0x2a0a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A14u;
        // 0x2a0a18: 0x24870028  addiu       $a3, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a14) {
            ctx->pc = 0x2A0A40u;
            goto label_2a0a40;
        }
    }
    ctx->pc = 0x2A0A1Cu;
    // 0x2a0a1c: 0x0  nop
    ctx->pc = 0x2a0a1cu;
    // NOP
label_2a0a20:
    // 0x2a0a20: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a0a24: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2a0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a0a28: 0x0  nop
    ctx->pc = 0x2a0a28u;
    // NOP
    // 0x2a0a2c: 0x0  nop
    ctx->pc = 0x2a0a2cu;
    // NOP
    // 0x2a0a30: 0x0  nop
    ctx->pc = 0x2a0a30u;
    // NOP
    // 0x2a0a34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0A34u;
    {
        const bool branch_taken_0x2a0a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a34) {
            ctx->pc = 0x2A0A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0a20;
        }
    }
    ctx->pc = 0x2A0A3Cu;
    // 0x2a0a3c: 0x0  nop
    ctx->pc = 0x2a0a3cu;
    // NOP
label_2a0a40:
    // 0x2a0a40: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2a0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2a0a44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2a0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a0a48: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2a0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2a0a4c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2a0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a0a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A50u;
        // 0x2a0a54: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0A58u;
}
