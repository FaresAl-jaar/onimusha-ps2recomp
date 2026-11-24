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

// Function: sub_0020B518
// Address: 0x20b518 - 0x20b52c
void sub_0020B518_0x20b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B518_0x20b518");
#endif

    ctx->pc = 0x20b518u;

    // 0x20b518: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20b51c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x20b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x20b520: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x20b524: 0x3e00008  jr          $ra
    ctx->pc = 0x20B524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B524u;
        // 0x20b528: 0xac249f88  sw          $a0, -0x6078($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B52Cu;
}
