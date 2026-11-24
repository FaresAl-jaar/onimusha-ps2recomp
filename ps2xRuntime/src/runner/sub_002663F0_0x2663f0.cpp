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

// Function: sub_002663F0
// Address: 0x2663f0 - 0x266418
void sub_002663F0_0x2663f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002663F0_0x2663f0");
#endif

    ctx->pc = 0x2663f0u;

    // 0x2663f0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2663f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2663f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2663f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2663f8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x2663f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x2663fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2663fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x266400: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x266400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x266404: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x266404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x266408: 0x97838868  lhu         $v1, -0x7798($gp)
    ctx->pc = 0x266408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936680)));
    // 0x26640c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x266410: 0x3e00008  jr          $ra
    ctx->pc = 0x266410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266410u;
        // 0x266414: 0xa7838868  sh          $v1, -0x7798($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266418u;
}
