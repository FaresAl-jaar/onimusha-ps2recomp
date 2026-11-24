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

// Function: sub_00218110
// Address: 0x218110 - 0x218128
void sub_00218110_0x218110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218110_0x218110");
#endif

    ctx->pc = 0x218110u;

    // 0x218110: 0x24840a0c  addiu       $a0, $a0, 0xA0C
    ctx->pc = 0x218110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
    // 0x218114: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x218114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x218118: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x218118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x21811c: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x21811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x218120: 0x3e00008  jr          $ra
    ctx->pc = 0x218120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218120u;
        // 0x218124: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218128u;
}
