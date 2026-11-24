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

// Function: sub_002B2560
// Address: 0x2b2560 - 0x2b2590
void sub_002B2560_0x2b2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2560_0x2b2560");
#endif

    ctx->pc = 0x2b2560u;

    // 0x2b2560: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2b2560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2b2564: 0xa0a0002c  sb          $zero, 0x2C($a1)
    ctx->pc = 0x2b2564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2568: 0xa0a0002d  sb          $zero, 0x2D($a1)
    ctx->pc = 0x2b2568u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b256c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2b256cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x2b2570: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2b2570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2b2574: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2b2574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x2b2578: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x2b2578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x2b257c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2b257cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2b2580: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2b2580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2b2584: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2b2584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2b2588: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2588u;
        // 0x2b258c: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2590u;
}
