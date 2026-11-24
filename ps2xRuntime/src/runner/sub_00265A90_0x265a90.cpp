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

// Function: sub_00265A90
// Address: 0x265a90 - 0x265ad8
void sub_00265A90_0x265a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265A90_0x265a90");
#endif

    ctx->pc = 0x265a90u;

    // 0x265a90: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x265a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x265a94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x265a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a98: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x265a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x265a9c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x265a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x265aa0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x265aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x265aa4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x265aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x265aa8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x265aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x265aac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x265aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x265ab0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x265ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x265ab4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x265ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x265ab8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x265ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x265abc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x265abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x265ac0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x265ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x265ac4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x265ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x265ac8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x265ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x265acc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x265accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x265ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x265AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AD0u;
        // 0x265ad4: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265AD8u;
}
