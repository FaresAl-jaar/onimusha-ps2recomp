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

// Function: sub_0026B880
// Address: 0x26b880 - 0x26b8ac
void sub_0026B880_0x26b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B880_0x26b880");
#endif

    ctx->pc = 0x26b880u;

    // 0x26b880: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x26b880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x26b884: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x26b884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x26b888: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x26b888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x26b88c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x26b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x26b890: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x26b890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x26b894: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x26b894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x26b898: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x26b898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x26b89c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x26b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x26b8a0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x26b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x26b8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8A4u;
        // 0x26b8a8: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B8ACu;
}
