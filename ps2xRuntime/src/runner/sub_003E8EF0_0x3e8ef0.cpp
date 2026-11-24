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

// Function: sub_003E8EF0
// Address: 0x3e8ef0 - 0x3e8f00
void sub_003E8EF0_0x3e8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8EF0_0x3e8ef0");
#endif

    ctx->pc = 0x3e8ef0u;

    // 0x3e8ef0: 0xa4852ba8  sh          $a1, 0x2BA8($a0)
    ctx->pc = 0x3e8ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11176), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e8ef4: 0xa4862baa  sh          $a2, 0x2BAA($a0)
    ctx->pc = 0x3e8ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11178), (uint16_t)GPR_U32(ctx, 6));
    // 0x3e8ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF8u;
        // 0x3e8efc: 0xa4802bac  sh          $zero, 0x2BAC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 11180), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8F00u;
}
