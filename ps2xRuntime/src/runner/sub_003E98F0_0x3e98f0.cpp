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

// Function: sub_003E98F0
// Address: 0x3e98f0 - 0x3e9910
void sub_003E98F0_0x3e98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E98F0_0x3e98f0");
#endif

    ctx->pc = 0x3e98f0u;

    // 0x3e98f0: 0x90862b2c  lbu         $a2, 0x2B2C($a0)
    ctx->pc = 0x3e98f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11052)));
    // 0x3e98f4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e98f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e98f8: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x3e98f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e98fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E98FCu;
    {
        const bool branch_taken_0x3e98fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e98fc) {
            ctx->pc = 0x3E9908u;
            goto label_3e9908;
        }
    }
    ctx->pc = 0x3E9904u;
    // 0x3e9904: 0xa0852b2c  sb          $a1, 0x2B2C($a0)
    ctx->pc = 0x3e9904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11052), (uint8_t)GPR_U32(ctx, 5));
label_3e9908:
    // 0x3e9908: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9910u;
}
