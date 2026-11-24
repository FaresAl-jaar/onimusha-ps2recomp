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

// Function: sub_00244638
// Address: 0x244638 - 0x244690
void sub_00244638_0x244638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244638_0x244638");
#endif

    switch (ctx->pc) {
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        default: break;
    }

    ctx->pc = 0x244638u;

label_244638:
    // 0x244638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24463c:
    // 0x24463c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244640:
    if (ctx->pc == 0x244640u) {
        ctx->pc = 0x244640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24463Cu;
        // 0x244640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244644u;
        goto label_244644;
    }
    ctx->pc = 0x24463Cu;
    {
        const bool branch_taken_0x24463c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24463Cu;
        // 0x244640: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24463c) {
            ctx->pc = 0x244658u;
            goto label_244658;
        }
    }
    ctx->pc = 0x244644u;
label_244644:
    // 0x244644: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244648:
    // 0x244648: 0xc090d8a  jal         func_243628
label_24464c:
    if (ctx->pc == 0x24464Cu) {
        ctx->pc = 0x24464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244648u;
        // 0x24464c: 0x2484c010  addiu       $a0, $a0, -0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244650u;
        goto label_244650;
    }
    ctx->pc = 0x244648u;
    SET_GPR_U32(ctx, 31, 0x244650u);
    ctx->pc = 0x24464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244648u;
    // 0x24464c: 0x2484c010  addiu       $a0, $a0, -0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244648u, 0x244650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244650u;
label_244650:
    // 0x244650: 0x1000000c  b           . + 4 + (0xC << 2)
label_244654:
    if (ctx->pc == 0x244654u) {
        ctx->pc = 0x244654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244650u;
        // 0x244654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244658u;
        goto label_244658;
    }
    ctx->pc = 0x244650u;
    {
        const bool branch_taken_0x244650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244650u;
        // 0x244654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244650) {
            ctx->pc = 0x244684u;
            goto label_244684;
        }
    }
    ctx->pc = 0x244658u;
label_244658:
    // 0x244658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24465c:
    // 0x24465c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_244660:
    // 0x244660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244664:
    if (ctx->pc == 0x244664u) {
        ctx->pc = 0x244664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244660u;
        // 0x244664: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244668u;
        goto label_244668;
    }
    ctx->pc = 0x244660u;
    {
        const bool branch_taken_0x244660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244660u;
        // 0x244664: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244660) {
            ctx->pc = 0x244680u;
            goto label_244680;
        }
    }
    ctx->pc = 0x244668u;
label_244668:
    // 0x244668: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24466c:
    // 0x24466c: 0x24050191  addiu       $a1, $zero, 0x191
    ctx->pc = 0x24466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
label_244670:
    // 0x244670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244674:
    // 0x244674: 0x40f809  jalr        $v0
label_244678:
    if (ctx->pc == 0x244678u) {
        ctx->pc = 0x244678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244674u;
        // 0x244678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24467Cu;
        goto label_24467c;
    }
    ctx->pc = 0x244674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24467Cu);
        ctx->pc = 0x244678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244674u;
        // 0x244678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244674u, 0x24467Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24467Cu;
label_24467c:
    // 0x24467c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24467cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244680:
    // 0x244680: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x244680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_244684:
    // 0x244684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244688:
    // 0x244688: 0x3e00008  jr          $ra
label_24468c:
    if (ctx->pc == 0x24468Cu) {
        ctx->pc = 0x24468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244688u;
        // 0x24468c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244690u;
        goto label_fallthrough_0x244688;
    }
    ctx->pc = 0x244688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244688u;
        // 0x24468c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244688:
    ctx->pc = 0x244690u;
}
