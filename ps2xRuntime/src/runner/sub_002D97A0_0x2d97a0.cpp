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

// Function: sub_002D97A0
// Address: 0x2d97a0 - 0x2d97bc
void sub_002D97A0_0x2d97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D97A0_0x2d97a0");
#endif

    ctx->pc = 0x2d97a0u;

    // 0x2d97a0: 0xa085004a  sb          $a1, 0x4A($a0)
    ctx->pc = 0x2d97a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 74), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d97a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d97a8: 0xa0830049  sb          $v1, 0x49($a0)
    ctx->pc = 0x2d97a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d97ac: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x2d97acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2d97b0: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x2d97b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x2d97b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97B4u;
        // 0x2d97b8: 0xa083004b  sb          $v1, 0x4B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D97B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97BCu;
}
