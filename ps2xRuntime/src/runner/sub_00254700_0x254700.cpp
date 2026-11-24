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

// Function: sub_00254700
// Address: 0x254700 - 0x254714
void sub_00254700_0x254700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254700_0x254700");
#endif

    ctx->pc = 0x254700u;

    // 0x254700: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x254700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254704: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x254704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x254708: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x254708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x25470c: 0x3e00008  jr          $ra
    ctx->pc = 0x25470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254714u;
}
