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

// Function: sub_00132B60
// Address: 0x132b60 - 0x132b98
void sub_00132B60_0x132b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132B60_0x132b60");
#endif

    switch (ctx->pc) {
        case 0x132b68u: goto label_132b68;
        default: break;
    }

    ctx->pc = 0x132b60u;

    // 0x132b60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132B60u;
    {
        const bool branch_taken_0x132b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B60u;
        // 0x132b64: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b60) {
            ctx->pc = 0x132B70u;
            goto label_132b70;
        }
    }
    ctx->pc = 0x132B68u;
label_132b68:
    // 0x132b68: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x132b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x132b6c: 0x0  nop
    ctx->pc = 0x132b6cu;
    // NOP
label_132b70:
    // 0x132b70: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x132b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x132b74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x132b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x132b78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x132b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x132b7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132B7Cu;
    {
        const bool branch_taken_0x132b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132b7c) {
            ctx->pc = 0x132B90u;
            goto label_132b90;
        }
    }
    ctx->pc = 0x132B84u;
    // 0x132b84: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x132b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x132b88: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132B88u;
    {
        const bool branch_taken_0x132b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132b88) {
            ctx->pc = 0x132B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132b68;
        }
    }
    ctx->pc = 0x132B90u;
label_132b90:
    // 0x132b90: 0x3e00008  jr          $ra
    ctx->pc = 0x132B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B90u;
        // 0x132b94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B98u;
}
