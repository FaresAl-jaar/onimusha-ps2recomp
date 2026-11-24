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

// Function: sub_0029CE70
// Address: 0x29ce70 - 0x29ceb0
void sub_0029CE70_0x29ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE70_0x29ce70");
#endif

    ctx->pc = 0x29ce70u;

    // 0x29ce70: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x29ce74: 0x248600f0  addiu       $a2, $a0, 0xF0
    ctx->pc = 0x29ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x29ce78: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29ce7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ce80: 0xace80014  sw          $t0, 0x14($a3)
    ctx->pc = 0x29ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 8));
    // 0x29ce84: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x29ce84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29ce88: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x29ce88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x29ce8c: 0xace80010  sw          $t0, 0x10($a3)
    ctx->pc = 0x29ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 8));
    // 0x29ce90: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x29ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x29ce94: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x29ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x29ce98: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x29ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x29ce9c: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x29ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x29cea0: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x29cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x29cea4: 0xac850104  sw          $a1, 0x104($a0)
    ctx->pc = 0x29cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
    // 0x29cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x29CEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEA8u;
        // 0x29ceac: 0xa0a30009  sb          $v1, 0x9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CEB0u;
}
