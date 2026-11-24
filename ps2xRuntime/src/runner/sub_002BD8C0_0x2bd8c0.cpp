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

// Function: sub_002BD8C0
// Address: 0x2bd8c0 - 0x2bd8d0
void sub_002BD8C0_0x2bd8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD8C0_0x2bd8c0");
#endif

    ctx->pc = 0x2bd8c0u;

    // 0x2bd8c0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bd8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd8c4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bd8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C8u;
        // 0x2bd8cc: 0xa0a30231  sb          $v1, 0x231($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8D0u;
}
