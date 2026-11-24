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

// Function: sub_0010F560
// Address: 0x10f560 - 0x10f59c
void sub_0010F560_0x10f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F560_0x10f560");
#endif

    ctx->pc = 0x10f560u;

    // 0x10f560: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f564: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10f568: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x10f568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10f56c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10f574: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10f578: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10f578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10f57c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10f580: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10f584: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F584u;
    {
        const bool branch_taken_0x10f584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F584u;
        // 0x10f588: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f584) {
            ctx->pc = 0x10F594u;
            goto label_10f594;
        }
    }
    ctx->pc = 0x10F58Cu;
    // 0x10f58c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10f590: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x10f590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_10f594:
    // 0x10f594: 0x3e00008  jr          $ra
    ctx->pc = 0x10F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F59Cu;
}
