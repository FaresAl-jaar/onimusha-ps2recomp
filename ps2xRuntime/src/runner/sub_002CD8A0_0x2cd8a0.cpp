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

// Function: sub_002CD8A0
// Address: 0x2cd8a0 - 0x2cd8c8
void sub_002CD8A0_0x2cd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD8A0_0x2cd8a0");
#endif

    ctx->pc = 0x2cd8a0u;

    // 0x2cd8a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD8A0u;
    {
        const bool branch_taken_0x2cd8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8A0u;
        // 0x2cd8a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8a0) {
            ctx->pc = 0x2CD8B8u;
            goto label_2cd8b8;
        }
    }
    ctx->pc = 0x2CD8A8u;
    // 0x2cd8a8: 0xa3848a9c  sb          $a0, -0x7564($gp)
    ctx->pc = 0x2cd8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937244), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD8ACu;
    {
        const bool branch_taken_0x2cd8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8ACu;
        // 0x2cd8b0: 0xa3838aa0  sb          $v1, -0x7560($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937248), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8ac) {
            ctx->pc = 0x2CD8C0u;
            goto label_2cd8c0;
        }
    }
    ctx->pc = 0x2CD8B4u;
    // 0x2cd8b4: 0x0  nop
    ctx->pc = 0x2cd8b4u;
    // NOP
label_2cd8b8:
    // 0x2cd8b8: 0xa3808aa0  sb          $zero, -0x7560($gp)
    ctx->pc = 0x2cd8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937248), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd8bc: 0x0  nop
    ctx->pc = 0x2cd8bcu;
    // NOP
label_2cd8c0:
    // 0x2cd8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD8C8u;
}
