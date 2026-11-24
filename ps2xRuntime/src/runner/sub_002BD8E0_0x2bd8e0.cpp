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

// Function: sub_002BD8E0
// Address: 0x2bd8e0 - 0x2bd8f4
void sub_002BD8E0_0x2bd8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD8E0_0x2bd8e0");
#endif

    ctx->pc = 0x2bd8e0u;

    // 0x2bd8e0: 0x8ca329c0  lw          $v1, 0x29C0($a1)
    ctx->pc = 0x2bd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10688)));
    // 0x2bd8e4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bd8e8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2bd8e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8ECu;
        // 0x2bd8f0: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8F4u;
}
