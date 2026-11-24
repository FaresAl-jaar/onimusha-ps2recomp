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

// Function: sub_003E9C50
// Address: 0x3e9c50 - 0x3e9cb0
void sub_003E9C50_0x3e9c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9C50_0x3e9c50");
#endif

    ctx->pc = 0x3e9c50u;

    // 0x3e9c50: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e9c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3e9c54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e9c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9c58: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3E9C58u;
    {
        const bool branch_taken_0x3e9c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e9c58) {
            ctx->pc = 0x3E9C98u;
            goto label_3e9c98;
        }
    }
    ctx->pc = 0x3E9C60u;
    // 0x3e9c60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9C60u;
    {
        const bool branch_taken_0x3e9c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c60) {
            ctx->pc = 0x3E9C70u;
            goto label_3e9c70;
        }
    }
    ctx->pc = 0x3E9C68u;
    // 0x3e9c68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E9C68u;
    {
        const bool branch_taken_0x3e9c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c68) {
            ctx->pc = 0x3E9CA8u;
            goto label_3e9ca8;
        }
    }
    ctx->pc = 0x3E9C70u;
label_3e9c70:
    // 0x3e9c70: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e9c70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9c74: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e9c74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9c78: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3e9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e9c7c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x3e9c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e9c80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9c84: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x3e9c84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9c88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9c8c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e9c90: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3e9c94: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x3e9c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_3e9c98:
    // 0x3e9c98: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3e9c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3e9c9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E9C9Cu;
    {
        const bool branch_taken_0x3e9c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C9Cu;
        // 0x3e9ca0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c9c) {
            ctx->pc = 0x3E9CA8u;
            goto label_3e9ca8;
        }
    }
    ctx->pc = 0x3E9CA4u;
    // 0x3e9ca4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3e9ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3e9ca8:
    // 0x3e9ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9CB0u;
}
