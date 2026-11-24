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

// Function: sub_003B2C10
// Address: 0x3b2c10 - 0x3b2c3c
void sub_003B2C10_0x3b2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2C10_0x3b2c10");
#endif

    ctx->pc = 0x3b2c10u;

    // 0x3b2c10: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b2c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b2c14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2c18: 0x8c25fe84  lw          $a1, -0x17C($at)
    ctx->pc = 0x3b2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x92FE84u));
    // 0x3b2c1c: 0xaf838c7c  sw          $v1, -0x7384($gp)
    ctx->pc = 0x3b2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 3));
    // 0x3b2c20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2c24: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x3b2c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x3b2c28: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b2c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b2c2c: 0xac25fe84  sw          $a1, -0x17C($at)
    ctx->pc = 0x3b2c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x3b2c30: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x3b2c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2c34: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C34u;
        // 0x3b2c38: 0xa0830121  sb          $v1, 0x121($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 289), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2C3Cu;
}
