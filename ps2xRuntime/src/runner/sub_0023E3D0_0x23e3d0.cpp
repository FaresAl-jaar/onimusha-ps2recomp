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

// Function: sub_0023E3D0
// Address: 0x23e3d0 - 0x23e3f4
void sub_0023E3D0_0x23e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E3D0_0x23e3d0");
#endif

    ctx->pc = 0x23e3d0u;

    // 0x23e3d0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x23e3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23e3d4: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x23e3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e3d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x23e3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23e3dc: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x23e3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e3e0: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x23e3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x23e3e4: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x23e3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e3e8: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x23e3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x23e3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x23E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3ECu;
        // 0x23e3f0: 0xa482002e  sh          $v0, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E3F4u;
}
