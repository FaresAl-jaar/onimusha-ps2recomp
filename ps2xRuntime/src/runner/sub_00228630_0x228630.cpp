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

// Function: sub_00228630
// Address: 0x228630 - 0x228664
void sub_00228630_0x228630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228630_0x228630");
#endif

    switch (ctx->pc) {
        case 0x228658u: goto label_228658;
        default: break;
    }

    ctx->pc = 0x228630u;

    // 0x228630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228634: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x228638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22863c: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x228640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x228644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BAD78u));
    // 0x228648: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228648u;
    {
        const bool branch_taken_0x228648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228648) {
            ctx->pc = 0x22864Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228648u;
            // 0x22864c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22865Cu;
            goto label_22865c;
        }
    }
    ctx->pc = 0x228650u;
    // 0x228650: 0xc08a19a  jal         func_228668
    ctx->pc = 0x228650u;
    SET_GPR_U32(ctx, 31, 0x228658u);
    ctx->pc = 0x228668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228668u, 0x228650u, 0x228658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228658u;
label_228658:
    // 0x228658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22865c:
    // 0x22865c: 0x3e00008  jr          $ra
    ctx->pc = 0x22865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22865Cu;
        // 0x228660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228664u;
}
