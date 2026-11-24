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

// Function: sub_00104A18
// Address: 0x104a18 - 0x104a40
void sub_00104A18_0x104a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A18_0x104a18");
#endif

    ctx->pc = 0x104a18u;

    // 0x104a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104a1c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x104a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x104a20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x104a20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x104a24: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x104a24u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x104a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x104a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x104a2c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x104a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x104a30: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x104a34: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x104a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x104a38: 0x3e00008  jr          $ra
    ctx->pc = 0x104A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A38u;
        // 0x104a3c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A40u;
}
