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

// Function: sub_0023E430
// Address: 0x23e430 - 0x23e44c
void sub_0023E430_0x23e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E430_0x23e430");
#endif

    ctx->pc = 0x23e430u;

    // 0x23e430: 0x94820034  lhu         $v0, 0x34($a0)
    ctx->pc = 0x23e430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23e434: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x23e434u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e438: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x23e438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x23e43c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x23e43cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e440: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x23e440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23e444: 0x3e00008  jr          $ra
    ctx->pc = 0x23E444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E444u;
        // 0x23e448: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E44Cu;
}
