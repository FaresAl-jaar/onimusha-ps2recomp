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

// Function: sub_0018E640
// Address: 0x18e640 - 0x18e668
void sub_0018E640_0x18e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E640_0x18e640");
#endif

    ctx->pc = 0x18e640u;

    // 0x18e640: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x18e640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e644: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18e644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18e648: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18e648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18e64c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18e650: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18e650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18e654: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x18e654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x18e658: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x18e658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x18e65c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x18e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x18e660: 0x3e00008  jr          $ra
    ctx->pc = 0x18E660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E660u;
        // 0x18e664: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E668u;
}
