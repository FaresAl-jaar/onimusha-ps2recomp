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

// Function: sub_0025D650
// Address: 0x25d650 - 0x25d670
void sub_0025D650_0x25d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D650_0x25d650");
#endif

    ctx->pc = 0x25d650u;

    // 0x25d650: 0x8c8429c0  lw          $a0, 0x29C0($a0)
    ctx->pc = 0x25d650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x25d654: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x25d654u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d658: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D658u;
    {
        const bool branch_taken_0x25d658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d658) {
            ctx->pc = 0x25D668u;
            goto label_25d668;
        }
    }
    ctx->pc = 0x25D660u;
    // 0x25d660: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x25d660u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d664: 0x0  nop
    ctx->pc = 0x25d664u;
    // NOP
label_25d668:
    // 0x25d668: 0x3e00008  jr          $ra
    ctx->pc = 0x25D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D670u;
}
