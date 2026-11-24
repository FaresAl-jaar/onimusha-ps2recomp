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

// Function: sub_00222358
// Address: 0x222358 - 0x2223a8
void sub_00222358_0x222358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222358_0x222358");
#endif

    switch (ctx->pc) {
        case 0x222358u: goto label_222358;
        case 0x22235cu: goto label_22235c;
        case 0x222360u: goto label_222360;
        case 0x222364u: goto label_222364;
        case 0x222368u: goto label_222368;
        case 0x22236cu: goto label_22236c;
        case 0x222370u: goto label_222370;
        case 0x222374u: goto label_222374;
        case 0x222378u: goto label_222378;
        case 0x22237cu: goto label_22237c;
        case 0x222380u: goto label_222380;
        case 0x222384u: goto label_222384;
        case 0x222388u: goto label_222388;
        case 0x22238cu: goto label_22238c;
        case 0x222390u: goto label_222390;
        case 0x222394u: goto label_222394;
        case 0x222398u: goto label_222398;
        case 0x22239cu: goto label_22239c;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223a4u: goto label_2223a4;
        default: break;
    }

    ctx->pc = 0x222358u;

label_222358:
    // 0x222358: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x222358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_22235c:
    // 0x22235c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_222360:
    // 0x222360: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x222360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_222364:
    // 0x222364: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x222364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_222368:
    // 0x222368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22236c:
    // 0x22236c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_222370:
    // 0x222370: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_222374:
    // 0x222374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x222374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222378:
    // 0x222378: 0x8c691f3c  lw          $t1, 0x1F3C($v1)
    ctx->pc = 0x222378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7996)));
label_22237c:
    // 0x22237c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x22237cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_222380:
    // 0x222380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222384:
    // 0x222384: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_222388:
    // 0x222388: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
label_22238c:
    if (ctx->pc == 0x22238Cu) {
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222390u;
        goto label_222390;
    }
    ctx->pc = 0x222388u;
    {
        const bool branch_taken_0x222388 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222388) {
            ctx->pc = 0x22239Cu;
            goto label_22239c;
        }
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_222394:
    // 0x222394: 0x40f809  jalr        $v0
label_222398:
    if (ctx->pc == 0x222398u) {
        ctx->pc = 0x22239Cu;
        goto label_22239c;
    }
    ctx->pc = 0x222394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22239Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222394u, 0x22239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22239Cu;
label_22239c:
    // 0x22239c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22239cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2223a0:
    // 0x2223a0: 0x3e00008  jr          $ra
label_2223a4:
    if (ctx->pc == 0x2223A4u) {
        ctx->pc = 0x2223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A0u;
        // 0x2223a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223A8u;
        goto label_fallthrough_0x2223a0;
    }
    ctx->pc = 0x2223A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A0u;
        // 0x2223a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2223A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2223a0:
    ctx->pc = 0x2223A8u;
}
