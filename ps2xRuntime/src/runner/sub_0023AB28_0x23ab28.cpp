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

// Function: sub_0023AB28
// Address: 0x23ab28 - 0x23ab44
void sub_0023AB28_0x23ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB28_0x23ab28");
#endif

    switch (ctx->pc) {
        case 0x23ab38u: goto label_23ab38;
        default: break;
    }

    ctx->pc = 0x23ab28u;

    // 0x23ab28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ab2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ab30: 0xc08db5c  jal         func_236D70
    ctx->pc = 0x23AB30u;
    SET_GPR_U32(ctx, 31, 0x23AB38u);
    ctx->pc = 0x23AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB30u;
    // 0x23ab34: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D70u, 0x23AB30u, 0x23AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB38u;
label_23ab38:
    // 0x23ab38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB3Cu;
        // 0x23ab40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB44u;
}
