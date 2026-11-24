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

// Function: sub_001F5758
// Address: 0x1f5758 - 0x1f577c
void sub_001F5758_0x1f5758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5758_0x1f5758");
#endif

    ctx->pc = 0x1f5758u;

    // 0x1f5758: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f575c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f5760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f5764: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f5764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f5768: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x1f576c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1f576cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1f5770: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f5770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1f5774: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5774u;
        // 0x1f5778: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F577Cu;
}
