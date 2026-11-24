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

// Function: sub_00311850
// Address: 0x311850 - 0x31186c
void sub_00311850_0x311850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311850_0x311850");
#endif

    ctx->pc = 0x311850u;

    // 0x311850: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x311850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x311854: 0x3465ff0b  ori         $a1, $v1, 0xFF0B
    ctx->pc = 0x311854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65291);
    // 0x311858: 0xac85200c  sw          $a1, 0x200C($a0)
    ctx->pc = 0x311858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8204), GPR_U32(ctx, 5));
    // 0x31185c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311860: 0xa0802010  sb          $zero, 0x2010($a0)
    ctx->pc = 0x311860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8208), (uint8_t)GPR_U32(ctx, 0));
    // 0x311864: 0x3e00008  jr          $ra
    ctx->pc = 0x311864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311864u;
        // 0x311868: 0xa0832011  sb          $v1, 0x2011($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8209), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31186Cu;
}
