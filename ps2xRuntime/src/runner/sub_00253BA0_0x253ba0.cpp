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

// Function: sub_00253BA0
// Address: 0x253ba0 - 0x253bc4
void sub_00253BA0_0x253ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253BA0_0x253ba0");
#endif

    ctx->pc = 0x253ba0u;

    // 0x253ba0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x253ba4: 0x24458978  addiu       $a1, $v0, -0x7688
    ctx->pc = 0x253ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936952));
    // 0x253ba8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x253ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x888978u));
    // 0x253bac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253BACu;
    {
        const bool branch_taken_0x253bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BACu;
        // 0x253bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bac) {
            ctx->pc = 0x253BBCu;
            goto label_253bbc;
        }
    }
    ctx->pc = 0x253BB4u;
    // 0x253bb4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x253bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x253bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253bbc:
    // 0x253bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x253BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253BC4u;
}
