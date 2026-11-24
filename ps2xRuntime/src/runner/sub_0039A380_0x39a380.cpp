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

// Function: sub_0039A380
// Address: 0x39a380 - 0x39a3a0
void sub_0039A380_0x39a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A380_0x39a380");
#endif

    ctx->pc = 0x39a380u;

    // 0x39a380: 0x94862b20  lhu         $a2, 0x2B20($a0)
    ctx->pc = 0x39a380u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x39a384: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x39a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x39a388: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A388u;
    {
        const bool branch_taken_0x39a388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a388) {
            ctx->pc = 0x39A398u;
            goto label_39a398;
        }
    }
    ctx->pc = 0x39A390u;
    // 0x39a390: 0xa4852b20  sh          $a1, 0x2B20($a0)
    ctx->pc = 0x39a390u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11040), (uint16_t)GPR_U32(ctx, 5));
    // 0x39a394: 0xa0800821  sb          $zero, 0x821($a0)
    ctx->pc = 0x39a394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 0));
label_39a398:
    // 0x39a398: 0x3e00008  jr          $ra
    ctx->pc = 0x39A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A3A0u;
}
