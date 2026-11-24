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

// Function: sub_0031FC10
// Address: 0x31fc10 - 0x31fc2c
void sub_0031FC10_0x31fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FC10_0x31fc10");
#endif

    ctx->pc = 0x31fc10u;

    // 0x31fc10: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x31fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31fc14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31fc18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31fc1c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x31fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x31fc20: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x31fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x31fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x31FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FC24u;
        // 0x31fc28: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FC2Cu;
}
