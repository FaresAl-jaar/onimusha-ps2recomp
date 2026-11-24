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

// Function: sub_00341240
// Address: 0x341240 - 0x341250
void sub_00341240_0x341240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341240_0x341240");
#endif

    ctx->pc = 0x341240u;

    // 0x341240: 0x24a30100  addiu       $v1, $a1, 0x100
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x341244: 0xa4832acc  sh          $v1, 0x2ACC($a0)
    ctx->pc = 0x341244u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10956), (uint16_t)GPR_U32(ctx, 3));
    // 0x341248: 0x3e00008  jr          $ra
    ctx->pc = 0x341248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341248u;
        // 0x34124c: 0xa4862ad4  sh          $a2, 0x2AD4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10964), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341250u;
}
