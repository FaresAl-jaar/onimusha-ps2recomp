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

// Function: sub_0023E4F8
// Address: 0x23e4f8 - 0x23e528
void sub_0023E4F8_0x23e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E4F8_0x23e4f8");
#endif

    ctx->pc = 0x23e4f8u;

    // 0x23e4f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23e4fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E4FCu;
    {
        const bool branch_taken_0x23e4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4FCu;
        // 0x23e500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4fc) {
            ctx->pc = 0x23E520u;
            goto label_23e520;
        }
    }
    ctx->pc = 0x23E504u;
    // 0x23e504: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x23e504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x23e508: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x23e508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x23e50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e510: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x23e510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x23e514: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x23e514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x23e518: 0x3e00008  jr          $ra
    ctx->pc = 0x23E518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E518u;
        // 0x23e51c: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E520u;
label_23e520:
    // 0x23e520: 0x3e00008  jr          $ra
    ctx->pc = 0x23E520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E520u;
        // 0x23e524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E528u;
}
