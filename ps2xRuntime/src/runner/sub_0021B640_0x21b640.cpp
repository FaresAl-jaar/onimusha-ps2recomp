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

// Function: sub_0021B640
// Address: 0x21b640 - 0x21b664
void sub_0021B640_0x21b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B640_0x21b640");
#endif

    switch (ctx->pc) {
        case 0x21b654u: goto label_21b654;
        default: break;
    }

    ctx->pc = 0x21b640u;

    // 0x21b640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b648: 0x8cc41fc0  lw          $a0, 0x1FC0($a2)
    ctx->pc = 0x21b648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x21b64c: 0xc086b36  jal         func_21ACD8
    ctx->pc = 0x21B64Cu;
    SET_GPR_U32(ctx, 31, 0x21B654u);
    ctx->pc = 0x21B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B64Cu;
    // 0x21b650: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ACD8u, 0x21B64Cu, 0x21B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B654u;
label_21b654:
    // 0x21b654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x21B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B65Cu;
        // 0x21b660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B664u;
}
