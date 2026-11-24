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

// Function: sub_00216A18
// Address: 0x216a18 - 0x216a40
void sub_00216A18_0x216a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A18_0x216a18");
#endif

    ctx->pc = 0x216a18u;

    // 0x216a18: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x216a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x216a1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x216a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216a20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x216a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216a24: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x216a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x216a28: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x216a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x216a2c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x216a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x216a30: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x216a30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x216a34: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x216a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x216a38: 0x3e00008  jr          $ra
    ctx->pc = 0x216A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A38u;
        // 0x216a3c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A40u;
}
