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

// Function: sub_0023AB90
// Address: 0x23ab90 - 0x23abac
void sub_0023AB90_0x23ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB90_0x23ab90");
#endif

    switch (ctx->pc) {
        case 0x23aba0u: goto label_23aba0;
        default: break;
    }

    ctx->pc = 0x23ab90u;

    // 0x23ab90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ab94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ab98: 0xc08db72  jal         func_236DC8
    ctx->pc = 0x23AB98u;
    SET_GPR_U32(ctx, 31, 0x23ABA0u);
    ctx->pc = 0x23AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB98u;
    // 0x23ab9c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DC8u, 0x23AB98u, 0x23ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABA0u;
label_23aba0:
    // 0x23aba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aba4: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABA4u;
        // 0x23aba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABACu;
}
