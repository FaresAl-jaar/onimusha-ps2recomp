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

// Function: sub_0022BE38
// Address: 0x22be38 - 0x22be48
void sub_0022BE38_0x22be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE38_0x22be38");
#endif

    ctx->pc = 0x22be38u;

    // 0x22be38: 0xa48700a4  sh          $a3, 0xA4($a0)
    ctx->pc = 0x22be38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 7));
    // 0x22be3c: 0xa48500a0  sh          $a1, 0xA0($a0)
    ctx->pc = 0x22be3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x22be40: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE40u;
        // 0x22be44: 0xa48600a2  sh          $a2, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE48u;
}
