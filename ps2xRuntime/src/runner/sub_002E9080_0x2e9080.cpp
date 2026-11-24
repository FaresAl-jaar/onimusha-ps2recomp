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

// Function: sub_002E9080
// Address: 0x2e9080 - 0x2e90a4
void sub_002E9080_0x2e9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9080_0x2e9080");
#endif

    ctx->pc = 0x2e9080u;

    // 0x2e9080: 0xa0800232  sb          $zero, 0x232($a0)
    ctx->pc = 0x2e9080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 562), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9084: 0x27838290  addiu       $v1, $gp, -0x7D70
    ctx->pc = 0x2e9084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935184));
    // 0x2e9088: 0xa0850233  sb          $a1, 0x233($a0)
    ctx->pc = 0x2e9088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e908c: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x2e908cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2e9090: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2e9090u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2e9094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e9094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e9098: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2e9098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e909c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E909Cu;
        // 0x2e90a0: 0xa0830235  sb          $v1, 0x235($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E909Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E90A4u;
}
