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

// Function: sub_003873C0
// Address: 0x3873c0 - 0x3873e0
void sub_003873C0_0x3873c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003873C0_0x3873c0");
#endif

    ctx->pc = 0x3873c0u;

    // 0x3873c0: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x3873c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3873c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3873c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3873c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3873c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3873cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3873ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3873d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3873d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3873d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3873d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3873d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3873D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3873DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873D8u;
        // 0x3873dc: 0x8042012b  lb          $v0, 0x12B($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 299)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3873D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3873E0u;
}
