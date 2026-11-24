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

// Function: sub_00220438
// Address: 0x220438 - 0x22045c
void sub_00220438_0x220438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220438_0x220438");
#endif

    ctx->pc = 0x220438u;

    // 0x220438: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x220438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x22043c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22043cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220440: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x220440u;
    {
        const bool branch_taken_0x220440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x220444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220440u;
        // 0x220444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220440) {
            ctx->pc = 0x220454u;
            goto label_220454;
        }
    }
    ctx->pc = 0x220448u;
    // 0x220448: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x220448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x22044c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x22044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x220450: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x220450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_220454:
    // 0x220454: 0x3e00008  jr          $ra
    ctx->pc = 0x220454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22045Cu;
}
