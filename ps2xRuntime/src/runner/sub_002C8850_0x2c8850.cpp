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

// Function: sub_002C8850
// Address: 0x2c8850 - 0x2c8870
void sub_002C8850_0x2c8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8850_0x2c8850");
#endif

    ctx->pc = 0x2c8850u;

    // 0x2c8850: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8850u;
    {
        const bool branch_taken_0x2c8850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8850) {
            ctx->pc = 0x2C8860u;
            goto label_2c8860;
        }
    }
    ctx->pc = 0x2C8858u;
    // 0x2c8858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8858u;
    {
        const bool branch_taken_0x2c8858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8858u;
        // 0x2c885c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8858) {
            ctx->pc = 0x2C8868u;
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C8860u;
label_2c8860:
    // 0x2c8860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8864: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c8864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8868:
    // 0x2c8868: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8870u;
}
