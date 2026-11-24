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

// Function: sub_00237A00
// Address: 0x237a00 - 0x237a18
void sub_00237A00_0x237a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A00_0x237a00");
#endif

    ctx->pc = 0x237a00u;

    // 0x237a00: 0x4a20003  bltzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x237A00u;
    {
        const bool branch_taken_0x237a00 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x237a00) {
            ctx->pc = 0x237A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A00u;
            // 0x237a04: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A10u;
            goto label_237a10;
        }
    }
    ctx->pc = 0x237A08u;
    // 0x237a08: 0x3e00008  jr          $ra
    ctx->pc = 0x237A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A10u;
label_237a10:
    // 0x237a10: 0x3e00008  jr          $ra
    ctx->pc = 0x237A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A10u;
        // 0x237a14: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A18u;
}
