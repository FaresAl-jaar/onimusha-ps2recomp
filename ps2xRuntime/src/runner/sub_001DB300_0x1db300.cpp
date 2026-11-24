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

// Function: sub_001DB300
// Address: 0x1db300 - 0x1db324
void sub_001DB300_0x1db300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB300_0x1db300");
#endif

    ctx->pc = 0x1db300u;

    // 0x1db300: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1db304: 0x24426120  addiu       $v0, $v0, 0x6120
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24864));
    // 0x1db308: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1db308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1db30c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1db310: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x1db310u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1db314: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1db314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1db318: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1db318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB31Cu;
        // 0x1db320: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB324u;
}
