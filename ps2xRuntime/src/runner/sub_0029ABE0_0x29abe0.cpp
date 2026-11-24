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

// Function: sub_0029ABE0
// Address: 0x29abe0 - 0x29ac00
void sub_0029ABE0_0x29abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ABE0_0x29abe0");
#endif

    ctx->pc = 0x29abe0u;

    // 0x29abe0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29abe4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x29abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x29abe8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ABE8u;
    {
        const bool branch_taken_0x29abe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29abe8) {
            ctx->pc = 0x29ABF8u;
            goto label_29abf8;
        }
    }
    ctx->pc = 0x29ABF0u;
    // 0x29abf0: 0xa0600085  sb          $zero, 0x85($v1)
    ctx->pc = 0x29abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x29abf4: 0x0  nop
    ctx->pc = 0x29abf4u;
    // NOP
label_29abf8:
    // 0x29abf8: 0x3e00008  jr          $ra
    ctx->pc = 0x29ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC00u;
}
