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

// Function: sub_002B42B0
// Address: 0x2b42b0 - 0x2b42e8
void sub_002B42B0_0x2b42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B42B0_0x2b42b0");
#endif

    ctx->pc = 0x2b42b0u;

    // 0x2b42b0: 0xac8001e0  sw          $zero, 0x1E0($a0)
    ctx->pc = 0x2b42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 0));
    // 0x2b42b4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2b42b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b42bc: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x2b42bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42c0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x2b42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2b42c4: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x2b42c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42c8: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x2b42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x2b42cc: 0xa08000f0  sb          $zero, 0xF0($a0)
    ctx->pc = 0x2b42ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42d0: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x2b42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x2b42d4: 0xa0800140  sb          $zero, 0x140($a0)
    ctx->pc = 0x2b42d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42d8: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x2b42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x2b42dc: 0xa0800190  sb          $zero, 0x190($a0)
    ctx->pc = 0x2b42dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b42e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E0u;
        // 0x2b42e4: 0xac800194  sw          $zero, 0x194($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42E8u;
}
