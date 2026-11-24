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

// Function: sub_001DB990
// Address: 0x1db990 - 0x1db9a8
void sub_001DB990_0x1db990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB990_0x1db990");
#endif

    ctx->pc = 0x1db990u;

    // 0x1db990: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB990u;
    {
        const bool branch_taken_0x1db990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB990u;
        // 0x1db994: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db990) {
            ctx->pc = 0x1DB9A0u;
            goto label_1db9a0;
        }
    }
    ctx->pc = 0x1DB998u;
    // 0x1db998: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1db998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x1db99c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1db99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_1db9a0:
    // 0x1db9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9A0u;
        // 0x1db9a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9A8u;
}
