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

// Function: sub_002EBF70
// Address: 0x2ebf70 - 0x2ebfa0
void sub_002EBF70_0x2ebf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBF70_0x2ebf70");
#endif

    ctx->pc = 0x2ebf70u;

    // 0x2ebf70: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBF70u;
    {
        const bool branch_taken_0x2ebf70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebf70) {
            ctx->pc = 0x2EBF88u;
            goto label_2ebf88;
        }
    }
    ctx->pc = 0x2EBF78u;
    // 0x2ebf78: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2ebf7c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2ebf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2ebf80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EBF80u;
    {
        const bool branch_taken_0x2ebf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF80u;
        // 0x2ebf84: 0xac830278  sw          $v1, 0x278($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf80) {
            ctx->pc = 0x2EBF98u;
            goto label_2ebf98;
        }
    }
    ctx->pc = 0x2EBF88u;
label_2ebf88:
    // 0x2ebf88: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2ebf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2ebf8c: 0xc02827  not         $a1, $a2
    ctx->pc = 0x2ebf8cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x2ebf90: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ebf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ebf94: 0xac830278  sw          $v1, 0x278($a0)
    ctx->pc = 0x2ebf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 3));
label_2ebf98:
    // 0x2ebf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBFA0u;
}
