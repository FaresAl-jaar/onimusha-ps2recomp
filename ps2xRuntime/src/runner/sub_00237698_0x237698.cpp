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

// Function: sub_00237698
// Address: 0x237698 - 0x2376b4
void sub_00237698_0x237698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237698_0x237698");
#endif

    ctx->pc = 0x237698u;

    // 0x237698: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x237698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x23769c: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x23769cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x2376a0: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x2376a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2376a4: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2376A4u;
    {
        const bool branch_taken_0x2376a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2376a4) {
            ctx->pc = 0x2376A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2376A4u;
            // 0x2376a8: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376ACu;
            goto label_2376ac;
        }
    }
    ctx->pc = 0x2376ACu;
label_2376ac:
    // 0x2376ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2376ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376ACu;
        // 0x2376b0: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2376B4u;
}
