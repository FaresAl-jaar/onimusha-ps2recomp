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

// Function: sub_003C04E0
// Address: 0x3c04e0 - 0x3c04fc
void sub_003C04E0_0x3c04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C04E0_0x3c04e0");
#endif

    ctx->pc = 0x3c04e0u;

    // 0x3c04e0: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x3c04e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c04e4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x3c04e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c04e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c04ec: 0xa0860008  sb          $a2, 0x8($a0)
    ctx->pc = 0x3c04ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c04f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c04f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C04F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04F4u;
        // 0x3c04f8: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C04F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C04FCu;
}
