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

// Function: sub_00190450
// Address: 0x190450 - 0x190460
void sub_00190450_0x190450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190450_0x190450");
#endif

    ctx->pc = 0x190450u;

    // 0x190450: 0x9783873c  lhu         $v1, -0x78C4($gp)
    ctx->pc = 0x190450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x190454: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x190458: 0x3e00008  jr          $ra
    ctx->pc = 0x190458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190458u;
        // 0x19045c: 0xa783873c  sh          $v1, -0x78C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190460u;
}
