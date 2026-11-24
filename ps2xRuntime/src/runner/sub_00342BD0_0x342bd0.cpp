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

// Function: sub_00342BD0
// Address: 0x342bd0 - 0x342c00
void sub_00342BD0_0x342bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342BD0_0x342bd0");
#endif

    ctx->pc = 0x342bd0u;

    // 0x342bd0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x342bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x342BD4u;
    {
        const bool branch_taken_0x342bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342bd4) {
            ctx->pc = 0x342BF0u;
            goto label_342bf0;
        }
    }
    ctx->pc = 0x342BDCu;
    // 0x342bdc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x342bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342be0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342BE0u;
    {
        const bool branch_taken_0x342be0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x342BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BE0u;
        // 0x342be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342be0) {
            ctx->pc = 0x342BF0u;
            goto label_342bf0;
        }
    }
    ctx->pc = 0x342BE8u;
    // 0x342be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x342BE8u;
    {
        const bool branch_taken_0x342be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342be8) {
            ctx->pc = 0x342BF8u;
            goto label_342bf8;
        }
    }
    ctx->pc = 0x342BF0u;
label_342bf0:
    // 0x342bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bf4: 0x0  nop
    ctx->pc = 0x342bf4u;
    // NOP
label_342bf8:
    // 0x342bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x342BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C00u;
}
