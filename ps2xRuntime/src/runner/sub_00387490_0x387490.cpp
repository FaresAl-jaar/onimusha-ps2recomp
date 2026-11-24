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

// Function: sub_00387490
// Address: 0x387490 - 0x38749c
void sub_00387490_0x387490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387490_0x387490");
#endif

    ctx->pc = 0x387490u;

    // 0x387490: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x387490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x387494: 0x3e00008  jr          $ra
    ctx->pc = 0x387494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387494u;
        // 0x387498: 0xa483056e  sh          $v1, 0x56E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1390), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38749Cu;
}
