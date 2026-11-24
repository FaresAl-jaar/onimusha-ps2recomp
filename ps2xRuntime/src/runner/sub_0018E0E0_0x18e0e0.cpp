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

// Function: sub_0018E0E0
// Address: 0x18e0e0 - 0x18e0f0
void sub_0018E0E0_0x18e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E0E0_0x18e0e0");
#endif

    ctx->pc = 0x18e0e0u;

    // 0x18e0e0: 0xaf84867c  sw          $a0, -0x7984($gp)
    ctx->pc = 0x18e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 4));
    // 0x18e0e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0E8u;
        // 0x18e0ec: 0xaf848680  sw          $a0, -0x7980($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E0F0u;
}
