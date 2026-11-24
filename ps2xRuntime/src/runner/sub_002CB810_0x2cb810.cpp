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

// Function: sub_002CB810
// Address: 0x2cb810 - 0x2cb840
void sub_002CB810_0x2cb810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB810_0x2cb810");
#endif

    ctx->pc = 0x2cb810u;

    // 0x2cb810: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb814: 0x24636bd0  addiu       $v1, $v1, 0x6BD0
    ctx->pc = 0x2cb814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27600));
    // 0x2cb818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cb818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb81c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB81Cu;
    {
        const bool branch_taken_0x2cb81c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB81Cu;
        // 0x2cb820: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb81c) {
            ctx->pc = 0x2CB838u;
            goto label_2cb838;
        }
    }
    ctx->pc = 0x2CB824u;
    // 0x2cb824: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2cb824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2cb828: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb82c: 0x24636ad0  addiu       $v1, $v1, 0x6AD0
    ctx->pc = 0x2cb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27344));
    // 0x2cb830: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cb830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb834: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cb834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2cb838:
    // 0x2cb838: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB840u;
}
