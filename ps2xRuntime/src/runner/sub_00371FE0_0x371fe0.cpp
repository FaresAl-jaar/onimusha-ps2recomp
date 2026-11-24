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

// Function: sub_00371FE0
// Address: 0x371fe0 - 0x372004
void sub_00371FE0_0x371fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371FE0_0x371fe0");
#endif

    ctx->pc = 0x371fe0u;

    // 0x371fe0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x371fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371fe4: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x371fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x371fe8: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x371fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x371fec: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x371fecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x371ff0: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x371ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x371ff4: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x371ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x371ff8: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x371ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x371ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x371FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FFCu;
        // 0x372000: 0xa480008c  sh          $zero, 0x8C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372004u;
}
