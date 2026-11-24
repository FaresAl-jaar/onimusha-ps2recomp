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

// Function: sub_001E19F0
// Address: 0x1e19f0 - 0x1e1a0c
void sub_001E19F0_0x1e19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E19F0_0x1e19f0");
#endif

    ctx->pc = 0x1e19f0u;

    // 0x1e19f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1e19f4: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x1e19f8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1e19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1e19fc: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e1a00: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1e1a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e1a04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A04u;
        // 0x1e1a08: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A0Cu;
}
