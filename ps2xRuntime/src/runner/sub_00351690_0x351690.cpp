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

// Function: sub_00351690
// Address: 0x351690 - 0x3516b4
void sub_00351690_0x351690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351690_0x351690");
#endif

    ctx->pc = 0x351690u;

    // 0x351690: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x351690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x351694: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x351694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x351698: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x351698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x35169c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x35169cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3516a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3516a4: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x3516a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x3516a8: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x3516a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x3516ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3516ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3516B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516ACu;
        // 0x3516b0: 0xa0830013  sb          $v1, 0x13($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3516ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3516B4u;
}
