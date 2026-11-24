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

// Function: sub_00367DA0
// Address: 0x367da0 - 0x367de0
void sub_00367DA0_0x367da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367DA0_0x367da0");
#endif

    ctx->pc = 0x367da0u;

    // 0x367da0: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x367da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x367da4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x367da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x367da8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x367DA8u;
    {
        const bool branch_taken_0x367da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x367da8) {
            ctx->pc = 0x367DD8u;
            goto label_367dd8;
        }
    }
    ctx->pc = 0x367DB0u;
    // 0x367db0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x367db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x367db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x367db8: 0xac650160  sw          $a1, 0x160($v1)
    ctx->pc = 0x367db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 5));
    // 0x367dbc: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x367dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x367dc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x367dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x367dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x367dc8: 0xac660164  sw          $a2, 0x164($v1)
    ctx->pc = 0x367dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 6));
    // 0x367dcc: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x367dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x367dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367dd4: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x367dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_367dd8:
    // 0x367dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x367DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367DE0u;
}
