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

// Function: sub_0032D7B0
// Address: 0x32d7b0 - 0x32d7d4
void sub_0032D7B0_0x32d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D7B0_0x32d7b0");
#endif

    ctx->pc = 0x32d7b0u;

    // 0x32d7b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d7b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x32d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32d7b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x32d7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d7bc: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x32d7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d7c0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x32d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32d7c4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x32d7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d7c8: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x32d7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x32d7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D7CCu;
        // 0x32d7d0: 0xa0830006  sb          $v1, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D7D4u;
}
