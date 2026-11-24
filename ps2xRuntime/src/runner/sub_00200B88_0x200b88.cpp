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

// Function: sub_00200B88
// Address: 0x200b88 - 0x200ba8
void sub_00200B88_0x200b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200B88_0x200b88");
#endif

    ctx->pc = 0x200b88u;

    // 0x200b88: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x200b8c: 0x8c623f84  lw          $v0, 0x3F84($v1)
    ctx->pc = 0x200b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x873F84u));
    // 0x200b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200B90u;
    {
        const bool branch_taken_0x200b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b90) {
            ctx->pc = 0x200BA0u;
            goto label_200ba0;
        }
    }
    ctx->pc = 0x200B98u;
    // 0x200b98: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x200b9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x200b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_200ba0:
    // 0x200ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x200BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BA0u;
        // 0x200ba4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200BA8u;
}
