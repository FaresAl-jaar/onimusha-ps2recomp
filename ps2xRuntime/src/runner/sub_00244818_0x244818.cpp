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

// Function: sub_00244818
// Address: 0x244818 - 0x24487c
void sub_00244818_0x244818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244818_0x244818");
#endif

    switch (ctx->pc) {
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        default: break;
    }

    ctx->pc = 0x244818u;

label_244818:
    // 0x244818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24481c:
    // 0x24481c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244820:
    // 0x244820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244824:
    // 0x244824: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244828:
    if (ctx->pc == 0x244828u) {
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244824u;
        // 0x244828: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24482Cu;
        goto label_24482c;
    }
    ctx->pc = 0x244824u;
    {
        const bool branch_taken_0x244824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244824u;
        // 0x244828: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244824) {
            ctx->pc = 0x244840u;
            goto label_244840;
        }
    }
    ctx->pc = 0x24482Cu;
label_24482c:
    // 0x24482c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244830:
    // 0x244830: 0xc090d8a  jal         func_243628
label_244834:
    if (ctx->pc == 0x244834u) {
        ctx->pc = 0x244834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244830u;
        // 0x244834: 0x2484c080  addiu       $a0, $a0, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244838u;
        goto label_244838;
    }
    ctx->pc = 0x244830u;
    SET_GPR_U32(ctx, 31, 0x244838u);
    ctx->pc = 0x244834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244830u;
    // 0x244834: 0x2484c080  addiu       $a0, $a0, -0x3F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244830u, 0x244838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244838u;
label_244838:
    // 0x244838: 0x1000000c  b           . + 4 + (0xC << 2)
label_24483c:
    if (ctx->pc == 0x24483Cu) {
        ctx->pc = 0x24483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244838u;
        // 0x24483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244840u;
        goto label_244840;
    }
    ctx->pc = 0x244838u;
    {
        const bool branch_taken_0x244838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244838u;
        // 0x24483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244838) {
            ctx->pc = 0x24486Cu;
            goto label_24486c;
        }
    }
    ctx->pc = 0x244840u;
label_244840:
    // 0x244840: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244844:
    // 0x244844: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_244848:
    // 0x244848: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_24484c:
    if (ctx->pc == 0x24484Cu) {
        ctx->pc = 0x24484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244848u;
        // 0x24484c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244850u;
        goto label_244850;
    }
    ctx->pc = 0x244848u;
    {
        const bool branch_taken_0x244848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244848) {
            ctx->pc = 0x24484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244848u;
            // 0x24484c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244860u;
            goto label_244860;
        }
    }
    ctx->pc = 0x244850u;
label_244850:
    // 0x244850: 0x40f809  jalr        $v0
label_244854:
    if (ctx->pc == 0x244854u) {
        ctx->pc = 0x244854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244850u;
        // 0x244854: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244858u;
        goto label_244858;
    }
    ctx->pc = 0x244850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244858u);
        ctx->pc = 0x244854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244850u;
        // 0x244854: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244850u, 0x244858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244858u;
label_244858:
    // 0x244858: 0x10000003  b           . + 4 + (0x3 << 2)
label_24485c:
    if (ctx->pc == 0x24485Cu) {
        ctx->pc = 0x24485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244858u;
        // 0x24485c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244860u;
        goto label_244860;
    }
    ctx->pc = 0x244858u;
    {
        const bool branch_taken_0x244858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244858u;
        // 0x24485c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244858) {
            ctx->pc = 0x244868u;
            goto label_244868;
        }
    }
    ctx->pc = 0x244860u;
label_244860:
    // 0x244860: 0xc090d8a  jal         func_243628
label_244864:
    if (ctx->pc == 0x244864u) {
        ctx->pc = 0x244864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244860u;
        // 0x244864: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244868u;
        goto label_244868;
    }
    ctx->pc = 0x244860u;
    SET_GPR_U32(ctx, 31, 0x244868u);
    ctx->pc = 0x244864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244860u;
    // 0x244864: 0x2484c0a0  addiu       $a0, $a0, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244860u, 0x244868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244868u;
label_244868:
    // 0x244868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24486c:
    // 0x24486c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24486cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244870:
    // 0x244870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x244870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244874:
    // 0x244874: 0x3e00008  jr          $ra
label_244878:
    if (ctx->pc == 0x244878u) {
        ctx->pc = 0x244878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244874u;
        // 0x244878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24487Cu;
        goto label_fallthrough_0x244874;
    }
    ctx->pc = 0x244874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244874u;
        // 0x244878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244874:
    ctx->pc = 0x24487Cu;
}
