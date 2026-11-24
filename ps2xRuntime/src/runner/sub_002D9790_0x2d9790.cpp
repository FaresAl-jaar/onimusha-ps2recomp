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

// Function: sub_002D9790
// Address: 0x2d9790 - 0x2d97a0
void sub_002D9790_0x2d9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9790_0x2d9790");
#endif

    ctx->pc = 0x2d9790u;

    // 0x2d9790: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x2d9790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2d9794: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d9794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d9798: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9798u;
        // 0x2d979c: 0xa083004b  sb          $v1, 0x4B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97A0u;
}
