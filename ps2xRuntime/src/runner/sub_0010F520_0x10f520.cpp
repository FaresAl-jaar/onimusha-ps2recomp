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

// Function: sub_0010F520
// Address: 0x10f520 - 0x10f55c
void sub_0010F520_0x10f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F520_0x10f520");
#endif

    ctx->pc = 0x10f520u;

    // 0x10f520: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f524: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10f528: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10f52c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10f534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10f534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10f538: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10f538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10f53c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10f540: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10f544: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F544u;
    {
        const bool branch_taken_0x10f544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F544u;
        // 0x10f548: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f544) {
            ctx->pc = 0x10F554u;
            goto label_10f554;
        }
    }
    ctx->pc = 0x10F54Cu;
    // 0x10f54c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10f550: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x10f550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_10f554:
    // 0x10f554: 0x3e00008  jr          $ra
    ctx->pc = 0x10F554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F55Cu;
}
