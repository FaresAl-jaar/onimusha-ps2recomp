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

// Function: sub_001EA400
// Address: 0x1ea400 - 0x1ea420
void sub_001EA400_0x1ea400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA400_0x1ea400");
#endif

    ctx->pc = 0x1ea400u;

    // 0x1ea400: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea404: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1ea408: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA408u;
    {
        const bool branch_taken_0x1ea408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ea408) {
            ctx->pc = 0x1EA418u;
            goto label_1ea418;
        }
    }
    ctx->pc = 0x1EA410u;
    // 0x1ea410: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1ea410u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ea414: 0x0  nop
    ctx->pc = 0x1ea414u;
    // NOP
label_1ea418:
    // 0x1ea418: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA420u;
}
