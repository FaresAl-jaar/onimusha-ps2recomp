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

// Function: sub_0037AA00
// Address: 0x37aa00 - 0x37aa20
void sub_0037AA00_0x37aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AA00_0x37aa00");
#endif

    ctx->pc = 0x37aa00u;

    // 0x37aa00: 0x84832b90  lh          $v1, 0x2B90($a0)
    ctx->pc = 0x37aa00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11152)));
    // 0x37aa04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AA04u;
    {
        const bool branch_taken_0x37aa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa04) {
            ctx->pc = 0x37AA18u;
            goto label_37aa18;
        }
    }
    ctx->pc = 0x37AA0Cu;
    // 0x37aa0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37aa10: 0xa4832b90  sh          $v1, 0x2B90($a0)
    ctx->pc = 0x37aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11152), (uint16_t)GPR_U32(ctx, 3));
    // 0x37aa14: 0x0  nop
    ctx->pc = 0x37aa14u;
    // NOP
label_37aa18:
    // 0x37aa18: 0x3e00008  jr          $ra
    ctx->pc = 0x37AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AA20u;
}
