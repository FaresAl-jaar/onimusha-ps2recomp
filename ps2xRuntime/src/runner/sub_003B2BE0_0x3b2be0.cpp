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

// Function: sub_003B2BE0
// Address: 0x3b2be0 - 0x3b2c08
void sub_003B2BE0_0x3b2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2BE0_0x3b2be0");
#endif

    ctx->pc = 0x3b2be0u;

    // 0x3b2be0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b2be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b2be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2be8: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x3b2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x3b2bec: 0xaf858c7c  sw          $a1, -0x7384($gp)
    ctx->pc = 0x3b2becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 5));
    // 0x3b2bf0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b2bf4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b2bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b2bf8: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x3b2bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x3b2bfc: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x3b2bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2c00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C00u;
        // 0x3b2c04: 0xa0850121  sb          $a1, 0x121($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 289), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2C08u;
}
