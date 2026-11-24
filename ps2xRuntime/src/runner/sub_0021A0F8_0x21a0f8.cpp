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

// Function: sub_0021A0F8
// Address: 0x21a0f8 - 0x21a10c
void sub_0021A0F8_0x21a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A0F8_0x21a0f8");
#endif

    ctx->pc = 0x21a0f8u;

    // 0x21a0f8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A0F8u;
    {
        const bool branch_taken_0x21a0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F8u;
        // 0x21a0fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0f8) {
            ctx->pc = 0x21A104u;
            goto label_21a104;
        }
    }
    ctx->pc = 0x21A100u;
    // 0x21a100: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21a104:
    // 0x21a104: 0x3e00008  jr          $ra
    ctx->pc = 0x21A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A10Cu;
}
