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

// Function: sub_001FD8D8
// Address: 0x1fd8d8 - 0x1fd904
void sub_001FD8D8_0x1fd8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD8D8_0x1fd8d8");
#endif

    ctx->pc = 0x1fd8d8u;

    // 0x1fd8d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd8dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd8e0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1fd8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1fd8e4: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1fd8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1fd8e8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1fd8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1fd8ec: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1fd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1fd8f0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1fd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1fd8f4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1fd8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1fd8f8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1fd8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8FCu;
        // 0x1fd900: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD904u;
}
