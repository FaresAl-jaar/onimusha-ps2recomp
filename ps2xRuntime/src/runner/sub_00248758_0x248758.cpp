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

// Function: sub_00248758
// Address: 0x248758 - 0x248778
void sub_00248758_0x248758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248758_0x248758");
#endif

    ctx->pc = 0x248758u;

    // 0x248758: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x248758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24875c: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x24875cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x248760: 0x2442fe5c  addiu       $v0, $v0, -0x1A4
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966876));
    // 0x248764: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x248764u;
    {
        const bool branch_taken_0x248764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248764u;
        // 0x248768: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248764) {
            ctx->pc = 0x248770u;
            goto label_248770;
        }
    }
    ctx->pc = 0x24876Cu;
    // 0x24876c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24876cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_248770:
    // 0x248770: 0x3e00008  jr          $ra
    ctx->pc = 0x248770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248778u;
}
