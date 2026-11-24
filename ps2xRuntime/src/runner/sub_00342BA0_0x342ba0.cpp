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

// Function: sub_00342BA0
// Address: 0x342ba0 - 0x342bd0
void sub_00342BA0_0x342ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342BA0_0x342ba0");
#endif

    ctx->pc = 0x342ba0u;

    // 0x342ba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x342ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x342ba4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x342BA4u;
    {
        const bool branch_taken_0x342ba4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x342ba4) {
            ctx->pc = 0x342BB8u;
            goto label_342bb8;
        }
    }
    ctx->pc = 0x342BACu;
    // 0x342bac: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x342bacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x342bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342BB0u;
    {
        const bool branch_taken_0x342bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BB0u;
        // 0x342bb4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bb0) {
            ctx->pc = 0x342BC8u;
            goto label_342bc8;
        }
    }
    ctx->pc = 0x342BB8u;
label_342bb8:
    // 0x342bb8: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342BB8u;
    {
        const bool branch_taken_0x342bb8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x342BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BB8u;
        // 0x342bbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bb8) {
            ctx->pc = 0x342BC8u;
            goto label_342bc8;
        }
    }
    ctx->pc = 0x342BC0u;
    // 0x342bc0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x342bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x342bc4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x342bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_342bc8:
    // 0x342bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x342BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342BD0u;
}
