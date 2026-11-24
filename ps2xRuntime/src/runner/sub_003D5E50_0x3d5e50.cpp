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

// Function: sub_003D5E50
// Address: 0x3d5e50 - 0x3d5e74
void sub_003D5E50_0x3d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5E50_0x3d5e50");
#endif

    ctx->pc = 0x3d5e50u;

    // 0x3d5e50: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5e54: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3d5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3d5e58: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3d5e58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3d5e5c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3d5e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3d5e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d5e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d5e68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E6Cu;
        // 0x3d5e70: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5E74u;
}
