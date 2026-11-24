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

// Function: sub_00385030
// Address: 0x385030 - 0x385048
void sub_00385030_0x385030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385030_0x385030");
#endif

    ctx->pc = 0x385030u;

    // 0x385030: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x385030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x385034: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x385034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x385038: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x385038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x38503c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x38503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x385040: 0x3e00008  jr          $ra
    ctx->pc = 0x385040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385040u;
        // 0x385044: 0xa023feea  sb          $v1, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385048u;
}
