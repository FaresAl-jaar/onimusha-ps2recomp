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

// Function: sub_00226940
// Address: 0x226940 - 0x226968
void sub_00226940_0x226940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226940_0x226940");
#endif

    ctx->pc = 0x226940u;

    // 0x226940: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226940u;
    {
        const bool branch_taken_0x226940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226940) {
            ctx->pc = 0x226960u;
            goto label_226960;
        }
    }
    ctx->pc = 0x226948u;
    // 0x226948: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x226948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22694c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x226950: 0x2463a840  addiu       $v1, $v1, -0x57C0
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x226954: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA840u));
    // 0x226958: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22695c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22695cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BA840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA840u, _value); } while (0);
label_226960:
    // 0x226960: 0x3e00008  jr          $ra
    ctx->pc = 0x226960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226968u;
}
