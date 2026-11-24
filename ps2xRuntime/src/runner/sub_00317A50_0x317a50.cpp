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

// Function: sub_00317A50
// Address: 0x317a50 - 0x317a68
void sub_00317A50_0x317a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317A50_0x317a50");
#endif

    ctx->pc = 0x317a50u;

    // 0x317a50: 0xac802000  sw          $zero, 0x2000($a0)
    ctx->pc = 0x317a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8192), GPR_U32(ctx, 0));
    // 0x317a54: 0xa0802014  sb          $zero, 0x2014($a0)
    ctx->pc = 0x317a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8212), (uint8_t)GPR_U32(ctx, 0));
    // 0x317a58: 0xa0802015  sb          $zero, 0x2015($a0)
    ctx->pc = 0x317a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8213), (uint8_t)GPR_U32(ctx, 0));
    // 0x317a5c: 0xa0802016  sb          $zero, 0x2016($a0)
    ctx->pc = 0x317a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8214), (uint8_t)GPR_U32(ctx, 0));
    // 0x317a60: 0x3e00008  jr          $ra
    ctx->pc = 0x317A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A60u;
        // 0x317a64: 0xa0802017  sb          $zero, 0x2017($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8215), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317A68u;
}
