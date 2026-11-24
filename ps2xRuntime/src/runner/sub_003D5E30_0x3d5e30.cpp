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

// Function: sub_003D5E30
// Address: 0x3d5e30 - 0x3d5e50
void sub_003D5E30_0x3d5e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5E30_0x3d5e30");
#endif

    ctx->pc = 0x3d5e30u;

    // 0x3d5e30: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5e34: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3d5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3d5e38: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3d5e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3d5e3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d5e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d5e44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E48u;
        // 0x3d5e4c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5E50u;
}
