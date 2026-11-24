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

// Function: sub_00257540
// Address: 0x257540 - 0x257560
void sub_00257540_0x257540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257540_0x257540");
#endif

    ctx->pc = 0x257540u;

    // 0x257540: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x257540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257548: 0xa06200a0  sb          $v0, 0xA0($v1)
    ctx->pc = 0x257548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x25754c: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x25754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257550: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x257550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x257554: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x257554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x257558: 0x3e00008  jr          $ra
    ctx->pc = 0x257558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257558u;
        // 0x25755c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257560u;
}
