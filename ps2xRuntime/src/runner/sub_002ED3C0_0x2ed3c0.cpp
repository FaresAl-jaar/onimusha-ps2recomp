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

// Function: sub_002ED3C0
// Address: 0x2ed3c0 - 0x2ed3e8
void sub_002ED3C0_0x2ed3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED3C0_0x2ed3c0");
#endif

    ctx->pc = 0x2ed3c0u;

    // 0x2ed3c0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2ed3c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed3c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed3c8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED3C8u;
    {
        const bool branch_taken_0x2ed3c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed3c8) {
            ctx->pc = 0x2ED3E0u;
            goto label_2ed3e0;
        }
    }
    ctx->pc = 0x2ED3D0u;
    // 0x2ed3d0: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2ed3d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed3d4: 0x80a32b07  lb          $v1, 0x2B07($a1)
    ctx->pc = 0x2ed3d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 11015)));
    // 0x2ed3d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ed3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ed3dc: 0xa0a32b07  sb          $v1, 0x2B07($a1)
    ctx->pc = 0x2ed3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11015), (uint8_t)GPR_U32(ctx, 3));
label_2ed3e0:
    // 0x2ed3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED3E8u;
}
