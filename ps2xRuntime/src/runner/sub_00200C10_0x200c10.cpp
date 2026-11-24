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

// Function: sub_00200C10
// Address: 0x200c10 - 0x200c98
void sub_00200C10_0x200c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C10_0x200c10");
#endif

    switch (ctx->pc) {
        case 0x200c20u: goto label_200c20;
        case 0x200c40u: goto label_200c40;
        case 0x200c68u: goto label_200c68;
        default: break;
    }

    ctx->pc = 0x200c10u;

    // 0x200c10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x200c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x200c14: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x200c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x200c18: 0x24448168  addiu       $a0, $v0, -0x7E98
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
    // 0x200c1c: 0x0  nop
    ctx->pc = 0x200c1cu;
    // NOP
label_200c20:
    // 0x200c20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200c24: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x200c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x200c28: 0x0  nop
    ctx->pc = 0x200c28u;
    // NOP
    // 0x200c2c: 0x0  nop
    ctx->pc = 0x200c2cu;
    // NOP
    // 0x200c30: 0x0  nop
    ctx->pc = 0x200c30u;
    // NOP
    // 0x200c34: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200C34u;
    {
        const bool branch_taken_0x200c34 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c34) {
            ctx->pc = 0x200C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200c20;
        }
    }
    ctx->pc = 0x200C3Cu;
    // 0x200c3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200c40:
    // 0x200c40: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x200c40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x200c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200c48: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x200c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x200c4c: 0x0  nop
    ctx->pc = 0x200c4cu;
    // NOP
    // 0x200c50: 0x0  nop
    ctx->pc = 0x200c50u;
    // NOP
    // 0x200c54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200C54u;
    {
        const bool branch_taken_0x200c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C54u;
        // 0x200c58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c54) {
            ctx->pc = 0x200C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200c40;
        }
    }
    ctx->pc = 0x200C5Cu;
    // 0x200c5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200c60: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x200c64: 0x0  nop
    ctx->pc = 0x200c64u;
    // NOP
label_200c68:
    // 0x200c68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200c6c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x200c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x200c70: 0x0  nop
    ctx->pc = 0x200c70u;
    // NOP
    // 0x200c74: 0x0  nop
    ctx->pc = 0x200c74u;
    // NOP
    // 0x200c78: 0x0  nop
    ctx->pc = 0x200c78u;
    // NOP
    // 0x200c7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200C7Cu;
    {
        const bool branch_taken_0x200c7c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x200C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C7Cu;
        // 0x200c80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c7c) {
            ctx->pc = 0x200C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200c68;
        }
    }
    ctx->pc = 0x200C84u;
    // 0x200c84: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x200c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x200c88: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x200c8c: 0x244282e8  addiu       $v0, $v0, -0x7D18
    ctx->pc = 0x200c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935272));
    // 0x200c90: 0x3e00008  jr          $ra
    ctx->pc = 0x200C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C90u;
        // 0x200c94: 0xac62815c  sw          $v0, -0x7EA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294934876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200C98u;
}
