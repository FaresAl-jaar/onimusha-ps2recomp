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

// Function: sub_00225028
// Address: 0x225028 - 0x225050
void sub_00225028_0x225028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225028_0x225028");
#endif

    ctx->pc = 0x225028u;

    // 0x225028: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225028u;
    {
        const bool branch_taken_0x225028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225028) {
            ctx->pc = 0x225048u;
            goto label_225048;
        }
    }
    ctx->pc = 0x225030u;
    // 0x225030: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x225030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x225034: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x225034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x225038: 0x2463a248  addiu       $v1, $v1, -0x5DB8
    ctx->pc = 0x225038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943304));
    // 0x22503c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22503cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA248u));
    // 0x225040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x225044: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x225044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BA248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA248u, _value); } while (0);
label_225048:
    // 0x225048: 0x3e00008  jr          $ra
    ctx->pc = 0x225048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225050u;
}
