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

// Function: sub_001E24A0
// Address: 0x1e24a0 - 0x1e24c0
void sub_001E24A0_0x1e24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24A0_0x1e24a0");
#endif

    ctx->pc = 0x1e24a0u;

    // 0x1e24a0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1e24a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e24a4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e24a8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E24A8u;
    {
        const bool branch_taken_0x1e24a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e24a8) {
            ctx->pc = 0x1E24B8u;
            goto label_1e24b8;
        }
    }
    ctx->pc = 0x1E24B0u;
    // 0x1e24b0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1e24b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e24b4: 0x0  nop
    ctx->pc = 0x1e24b4u;
    // NOP
label_1e24b8:
    // 0x1e24b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E24C0u;
}
