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

// Function: sub_001EE630
// Address: 0x1ee630 - 0x1ee64c
void sub_001EE630_0x1ee630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE630_0x1ee630");
#endif

    ctx->pc = 0x1ee630u;

    // 0x1ee630: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1ee630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1ee634: 0x24427350  addiu       $v0, $v0, 0x7350
    ctx->pc = 0x1ee634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29520));
    // 0x1ee638: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1ee638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1ee63c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ee63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ee640: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1ee640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ee644: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE644u;
        // 0x1ee648: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE64Cu;
}
