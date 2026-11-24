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

// Function: sub_00255350
// Address: 0x255350 - 0x255388
void sub_00255350_0x255350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255350_0x255350");
#endif

    ctx->pc = 0x255350u;

    // 0x255350: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255354: 0xa060003c  sb          $zero, 0x3C($v1)
    ctx->pc = 0x255354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x255358: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25535c: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x25535cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x255360: 0xa4a3003e  sh          $v1, 0x3E($a1)
    ctx->pc = 0x255360u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x255364: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255368: 0x84a30040  lh          $v1, 0x40($a1)
    ctx->pc = 0x255368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25536c: 0xa4a30044  sh          $v1, 0x44($a1)
    ctx->pc = 0x25536cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x255370: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255374: 0x84a30042  lh          $v1, 0x42($a1)
    ctx->pc = 0x255374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x255378: 0xa4a30046  sh          $v1, 0x46($a1)
    ctx->pc = 0x255378u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x25537c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x25537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255380: 0x3e00008  jr          $ra
    ctx->pc = 0x255380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255380u;
        // 0x255384: 0xa4600048  sh          $zero, 0x48($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255388u;
}
