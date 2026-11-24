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

// Function: sub_002CB7B0
// Address: 0x2cb7b0 - 0x2cb7e8
void sub_002CB7B0_0x2cb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB7B0_0x2cb7b0");
#endif

    ctx->pc = 0x2cb7b0u;

    // 0x2cb7b0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB7B0u;
    {
        const bool branch_taken_0x2cb7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7b0) {
            ctx->pc = 0x2CB7C0u;
            goto label_2cb7c0;
        }
    }
    ctx->pc = 0x2CB7B8u;
    // 0x2cb7b8: 0xaf808a10  sw          $zero, -0x75F0($gp)
    ctx->pc = 0x2cb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 0));
    // 0x2cb7bc: 0x0  nop
    ctx->pc = 0x2cb7bcu;
    // NOP
label_2cb7c0:
    // 0x2cb7c0: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x2cb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x2cb7c4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2cb7c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cb7c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB7C8u;
    {
        const bool branch_taken_0x2cb7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7c8) {
            ctx->pc = 0x2CB7D8u;
            goto label_2cb7d8;
        }
    }
    ctx->pc = 0x2CB7D0u;
    // 0x2cb7d0: 0xaf848a10  sw          $a0, -0x75F0($gp)
    ctx->pc = 0x2cb7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 4));
    // 0x2cb7d4: 0x0  nop
    ctx->pc = 0x2cb7d4u;
    // NOP
label_2cb7d8:
    // 0x2cb7d8: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x2cb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x2cb7dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7E0u;
        // 0x2cb7e4: 0xaf828a20  sw          $v0, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB7E8u;
}
