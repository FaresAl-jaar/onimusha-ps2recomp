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

// Function: sub_002BD2F0
// Address: 0x2bd2f0 - 0x2bd308
void sub_002BD2F0_0x2bd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD2F0_0x2bd2f0");
#endif

    ctx->pc = 0x2bd2f0u;

    // 0x2bd2f0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bd2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd2f4: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2bd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2bd2f8: 0xa0830052  sb          $v1, 0x52($a0)
    ctx->pc = 0x2bd2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd2fc: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2bd2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2bd300: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD300u;
        // 0x2bd304: 0xa0830053  sb          $v1, 0x53($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD308u;
}
