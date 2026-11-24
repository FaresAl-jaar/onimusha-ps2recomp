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

// Function: sub_0025B0E0
// Address: 0x25b0e0 - 0x25b0f0
void sub_0025B0E0_0x25b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B0E0_0x25b0e0");
#endif

    ctx->pc = 0x25b0e0u;

    // 0x25b0e0: 0x90830050  lbu         $v1, 0x50($a0)
    ctx->pc = 0x25b0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25b0e4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x25b0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x25b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0E8u;
        // 0x25b0ec: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B0F0u;
}
