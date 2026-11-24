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

// Function: sub_00685F40
// Address: 0x685f40 - 0x685f54
void sub_00685F40_0x685f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685F40_0x685f40");
#endif

    ctx->pc = 0x685f40u;

    // 0x685f40: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x685f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x685f44: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x685f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x685f48: 0x2463a480  addiu       $v1, $v1, -0x5B80
    ctx->pc = 0x685f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943872));
    // 0x685f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x685F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685F4Cu;
        // 0x685f50: 0xac23fd60  sw          $v1, -0x2A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685F54u;
}
