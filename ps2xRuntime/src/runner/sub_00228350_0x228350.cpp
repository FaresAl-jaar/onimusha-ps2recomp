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

// Function: sub_00228350
// Address: 0x228350 - 0x228380
void sub_00228350_0x228350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228350_0x228350");
#endif

    switch (ctx->pc) {
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        default: break;
    }

    ctx->pc = 0x228350u;

label_228350:
    // 0x228350: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_228354:
    // 0x228354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_228358:
    // 0x228358: 0x8c43ad6c  lw          $v1, -0x5294($v0)
    ctx->pc = 0x228358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946156)));
label_22835c:
    // 0x22835c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228360:
    // 0x228360: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_228364:
    if (ctx->pc == 0x228364u) {
        ctx->pc = 0x228364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228360u;
        // 0x228364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228368u;
        goto label_228368;
    }
    ctx->pc = 0x228360u;
    {
        const bool branch_taken_0x228360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228360u;
        // 0x228364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228360) {
            ctx->pc = 0x228374u;
            goto label_228374;
        }
    }
    ctx->pc = 0x228368u;
label_228368:
    // 0x228368: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x228368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22836c:
    // 0x22836c: 0x60f809  jalr        $v1
label_228370:
    if (ctx->pc == 0x228370u) {
        ctx->pc = 0x228370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22836Cu;
        // 0x228370: 0x8c44ad70  lw          $a0, -0x5290($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228374u;
        goto label_228374;
    }
    ctx->pc = 0x22836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x228374u);
        ctx->pc = 0x228370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22836Cu;
        // 0x228370: 0x8c44ad70  lw          $a0, -0x5290($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22836Cu, 0x228374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228374u;
label_228374:
    // 0x228374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228378:
    // 0x228378: 0x3e00008  jr          $ra
label_22837c:
    if (ctx->pc == 0x22837Cu) {
        ctx->pc = 0x22837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228378u;
        // 0x22837c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228380u;
        goto label_fallthrough_0x228378;
    }
    ctx->pc = 0x228378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228378u;
        // 0x22837c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228378:
    ctx->pc = 0x228380u;
}
