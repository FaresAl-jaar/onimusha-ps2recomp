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

// Function: sub_00159540
// Address: 0x159540 - 0x15959c
void sub_00159540_0x159540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159540_0x159540");
#endif

    switch (ctx->pc) {
        case 0x159540u: goto label_159540;
        case 0x159544u: goto label_159544;
        case 0x159548u: goto label_159548;
        case 0x15954cu: goto label_15954c;
        case 0x159550u: goto label_159550;
        case 0x159554u: goto label_159554;
        case 0x159558u: goto label_159558;
        case 0x15955cu: goto label_15955c;
        case 0x159560u: goto label_159560;
        case 0x159564u: goto label_159564;
        case 0x159568u: goto label_159568;
        case 0x15956cu: goto label_15956c;
        case 0x159570u: goto label_159570;
        case 0x159574u: goto label_159574;
        case 0x159578u: goto label_159578;
        case 0x15957cu: goto label_15957c;
        case 0x159580u: goto label_159580;
        case 0x159584u: goto label_159584;
        case 0x159588u: goto label_159588;
        case 0x15958cu: goto label_15958c;
        case 0x159590u: goto label_159590;
        case 0x159594u: goto label_159594;
        case 0x159598u: goto label_159598;
        default: break;
    }

    ctx->pc = 0x159540u;

label_159540:
    // 0x159540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_159544:
    // 0x159544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_159548:
    // 0x159548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15954c:
    // 0x15954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159550:
    // 0x159550: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x159550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_159554:
    // 0x159554: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_159558:
    if (ctx->pc == 0x159558u) {
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15955Cu;
        goto label_15955c;
    }
    ctx->pc = 0x159554u;
    {
        const bool branch_taken_0x159554 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159554) {
            ctx->pc = 0x159588u;
            goto label_159588;
        }
    }
    ctx->pc = 0x15955Cu;
label_15955c:
    // 0x15955c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x15955cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159560:
    // 0x159560: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_159564:
    // 0x159564: 0x40f809  jalr        $v0
label_159568:
    if (ctx->pc == 0x159568u) {
        ctx->pc = 0x15956Cu;
        goto label_15956c;
    }
    ctx->pc = 0x159564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15956Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159564u, 0x15956Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15956Cu;
label_15956c:
    // 0x15956c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x15956cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_159570:
    // 0x159570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_159574:
    // 0x159574: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x159574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_159578:
    // 0x159578: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x159578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_15957c:
    // 0x15957c: 0x1c60fff8  bgtz        $v1, . + 4 + (-0x8 << 2)
label_159580:
    if (ctx->pc == 0x159580u) {
        ctx->pc = 0x159580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15957Cu;
        // 0x159580: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159584u;
        goto label_159584;
    }
    ctx->pc = 0x15957Cu;
    {
        const bool branch_taken_0x15957c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x159580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15957Cu;
        // 0x159580: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15957c) {
            ctx->pc = 0x159560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159560;
        }
    }
    ctx->pc = 0x159584u;
label_159584:
    // 0x159584: 0x0  nop
    ctx->pc = 0x159584u;
    // NOP
label_159588:
    // 0x159588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15958c:
    // 0x15958c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15958cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159590:
    // 0x159590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159594:
    // 0x159594: 0x3e00008  jr          $ra
label_159598:
    if (ctx->pc == 0x159598u) {
        ctx->pc = 0x159598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159594u;
        // 0x159598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15959Cu;
        goto label_fallthrough_0x159594;
    }
    ctx->pc = 0x159594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159594u;
        // 0x159598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159594:
    ctx->pc = 0x15959Cu;
}
