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

// Function: sub_003C57B0
// Address: 0x3c57b0 - 0x3c57c8
void sub_003C57B0_0x3c57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C57B0_0x3c57b0");
#endif

    ctx->pc = 0x3c57b0u;

    // 0x3c57b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c57b4: 0xa0830506  sb          $v1, 0x506($a0)
    ctx->pc = 0x3c57b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1286), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c57b8: 0xa0800507  sb          $zero, 0x507($a0)
    ctx->pc = 0x3c57b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1287), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c57bc: 0xa0800509  sb          $zero, 0x509($a0)
    ctx->pc = 0x3c57bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1289), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c57c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57C0u;
        // 0x3c57c4: 0xac8505b0  sw          $a1, 0x5B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C57C8u;
}
