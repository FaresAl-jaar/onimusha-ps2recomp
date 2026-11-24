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

// Function: sub_00167380
// Address: 0x167380 - 0x1673a0
void sub_00167380_0x167380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167380_0x167380");
#endif

    ctx->pc = 0x167380u;

    // 0x167380: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167384: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x167388: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x16738c: 0x9c25f9a0  lwu         $a1, -0x660($at)
    ctx->pc = 0x16738cu;
    SET_GPR_ZE32(ctx, 5, FAST_READ32(0x6AF9A0u));
    // 0x167390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167394: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x167394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x167398: 0x3e00008  jr          $ra
    ctx->pc = 0x167398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167398u;
        // 0x16739c: 0xfc650010  sd          $a1, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673A0u;
}
