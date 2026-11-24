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

// Function: sub_002A0A60
// Address: 0x2a0a60 - 0x2a0ac0
void sub_002A0A60_0x2a0a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0A60_0x2a0a60");
#endif

    switch (ctx->pc) {
        case 0x2a0a70u: goto label_2a0a70;
        default: break;
    }

    ctx->pc = 0x2a0a60u;

    // 0x2a0a60: 0x24870028  addiu       $a3, $a0, 0x28
    ctx->pc = 0x2a0a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2a0a64: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2a0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2a0a68: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0A68u;
    {
        const bool branch_taken_0x2a0a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a68) {
            ctx->pc = 0x2A0AB8u;
            goto label_2a0ab8;
        }
    }
    ctx->pc = 0x2A0A70u;
label_2a0a70:
    // 0x2a0a70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a0a74: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0A74u;
    {
        const bool branch_taken_0x2a0a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a0a74) {
            ctx->pc = 0x2A0AA0u;
            goto label_2a0aa0;
        }
    }
    ctx->pc = 0x2A0A7Cu;
    // 0x2a0a7c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A7Cu;
    {
        const bool branch_taken_0x2a0a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a7c) {
            ctx->pc = 0x2A0A90u;
            goto label_2a0a90;
        }
    }
    ctx->pc = 0x2A0A84u;
    // 0x2a0a84: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0A84u;
    {
        const bool branch_taken_0x2a0a84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a0a84) {
            ctx->pc = 0x2A0AA0u;
            goto label_2a0aa0;
        }
    }
    ctx->pc = 0x2A0A8Cu;
    // 0x2a0a8c: 0x0  nop
    ctx->pc = 0x2a0a8cu;
    // NOP
label_2a0a90:
    // 0x2a0a90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a0a94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0A94u;
    {
        const bool branch_taken_0x2a0a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0A94u;
        // 0x2a0a98: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a94) {
            ctx->pc = 0x2A0AA8u;
            goto label_2a0aa8;
        }
    }
    ctx->pc = 0x2A0A9Cu;
    // 0x2a0a9c: 0x0  nop
    ctx->pc = 0x2a0a9cu;
    // NOP
label_2a0aa0:
    // 0x2a0aa0: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x2a0aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a0aa4: 0x0  nop
    ctx->pc = 0x2a0aa4u;
    // NOP
label_2a0aa8:
    // 0x2a0aa8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2a0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a0aac: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A0AACu;
    {
        const bool branch_taken_0x2a0aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0aac) {
            ctx->pc = 0x2A0A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0a70;
        }
    }
    ctx->pc = 0x2A0AB4u;
    // 0x2a0ab4: 0x0  nop
    ctx->pc = 0x2a0ab4u;
    // NOP
label_2a0ab8:
    // 0x2a0ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0AC0u;
}
