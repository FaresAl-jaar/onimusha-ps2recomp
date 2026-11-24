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

// Function: sub_002753F0
// Address: 0x2753f0 - 0x275410
void sub_002753F0_0x2753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753F0_0x2753f0");
#endif

    ctx->pc = 0x2753f0u;

    // 0x2753f0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2753F0u;
    {
        const bool branch_taken_0x2753f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2753f0) {
            ctx->pc = 0x275400u;
            goto label_275400;
        }
    }
    ctx->pc = 0x2753F8u;
    // 0x2753f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2753F8u;
    {
        const bool branch_taken_0x2753f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2753FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2753F8u;
        // 0x2753fc: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2753f8) {
            ctx->pc = 0x275408u;
            goto label_275408;
        }
    }
    ctx->pc = 0x275400u;
label_275400:
    // 0x275400: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x275400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x275404: 0x0  nop
    ctx->pc = 0x275404u;
    // NOP
label_275408:
    // 0x275408: 0x3e00008  jr          $ra
    ctx->pc = 0x275408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275410u;
}
