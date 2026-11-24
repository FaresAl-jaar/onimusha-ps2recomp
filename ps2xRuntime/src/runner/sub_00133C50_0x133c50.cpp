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

// Function: sub_00133C50
// Address: 0x133c50 - 0x133ca0
void sub_00133C50_0x133c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133C50_0x133c50");
#endif

    switch (ctx->pc) {
        case 0x133c58u: goto label_133c58;
        default: break;
    }

    ctx->pc = 0x133c50u;

    // 0x133c50: 0x24820988  addiu       $v0, $a0, 0x988
    ctx->pc = 0x133c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
    // 0x133c54: 0x24841588  addiu       $a0, $a0, 0x1588
    ctx->pc = 0x133c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5512));
label_133c58:
    // 0x133c58: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x133c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x133c5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x133c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x133c60: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133C60u;
    {
        const bool branch_taken_0x133c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C60u;
        // 0x133c64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c60) {
            ctx->pc = 0x133C80u;
            goto label_133c80;
        }
    }
    ctx->pc = 0x133C68u;
    // 0x133c68: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x133c68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x133c6c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x133c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x133c70: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x133c74: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x133c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x133c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133C78u;
    {
        const bool branch_taken_0x133c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133C78u;
        // 0x133c7c: 0xaca20030  sw          $v0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c78) {
            ctx->pc = 0x133C98u;
            goto label_133c98;
        }
    }
    ctx->pc = 0x133C80u;
label_133c80:
    // 0x133c80: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x133c84: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x133c84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x133c88: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x133C88u;
    {
        const bool branch_taken_0x133c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133c88) {
            ctx->pc = 0x133C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133c58;
        }
    }
    ctx->pc = 0x133C90u;
    // 0x133c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c94: 0x0  nop
    ctx->pc = 0x133c94u;
    // NOP
label_133c98:
    // 0x133c98: 0x3e00008  jr          $ra
    ctx->pc = 0x133C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133CA0u;
}
