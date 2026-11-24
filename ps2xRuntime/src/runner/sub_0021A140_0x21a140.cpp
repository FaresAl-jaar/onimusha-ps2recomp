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

// Function: sub_0021A140
// Address: 0x21a140 - 0x21a168
void sub_0021A140_0x21a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A140_0x21a140");
#endif

    ctx->pc = 0x21a140u;

    // 0x21a140: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A140u;
    {
        const bool branch_taken_0x21a140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A140u;
        // 0x21a144: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a140) {
            ctx->pc = 0x21A160u;
            goto label_21a160;
        }
    }
    ctx->pc = 0x21A148u;
    // 0x21a148: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a14c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A14Cu;
    {
        const bool branch_taken_0x21a14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a14c) {
            ctx->pc = 0x21A150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A14Cu;
            // 0x21a150: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A160u;
            goto label_21a160;
        }
    }
    ctx->pc = 0x21A154u;
    // 0x21a154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a158: 0x3e00008  jr          $ra
    ctx->pc = 0x21A158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A158u;
        // 0x21a15c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A160u;
label_21a160:
    // 0x21a160: 0x3e00008  jr          $ra
    ctx->pc = 0x21A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A168u;
}
