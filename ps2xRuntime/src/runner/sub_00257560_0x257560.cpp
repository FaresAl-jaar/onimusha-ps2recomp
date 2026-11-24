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

// Function: sub_00257560
// Address: 0x257560 - 0x257580
void sub_00257560_0x257560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257560_0x257560");
#endif

    ctx->pc = 0x257560u;

    // 0x257560: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x257560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257568: 0xa06000a0  sb          $zero, 0xA0($v1)
    ctx->pc = 0x257568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x25756c: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x25756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257570: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x257570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x257574: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x257574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x257578: 0x3e00008  jr          $ra
    ctx->pc = 0x257578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257578u;
        // 0x25757c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257580u;
}
