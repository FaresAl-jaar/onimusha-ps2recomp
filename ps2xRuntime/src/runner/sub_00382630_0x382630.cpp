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

// Function: sub_00382630
// Address: 0x382630 - 0x3826bc
void sub_00382630_0x382630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382630_0x382630");
#endif

    switch (ctx->pc) {
        case 0x382650u: goto label_382650;
        case 0x382658u: goto label_382658;
        case 0x382668u: goto label_382668;
        case 0x382688u: goto label_382688;
        case 0x382698u: goto label_382698;
        default: break;
    }

    ctx->pc = 0x382630u;

    // 0x382630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x382638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38263c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382640: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x382640u;
    {
        const bool branch_taken_0x382640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x382644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382640u;
        // 0x382644: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382640) {
            ctx->pc = 0x382680u;
            goto label_382680;
        }
    }
    ctx->pc = 0x382648u;
    // 0x382648: 0xc0e097c  jal         func_3825F0
    ctx->pc = 0x382648u;
    SET_GPR_U32(ctx, 31, 0x382650u);
    ctx->pc = 0x3825F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3825F0u, 0x382648u, 0x382650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382650u;
label_382650:
    // 0x382650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x382650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382654: 0x0  nop
    ctx->pc = 0x382654u;
    // NOP
label_382658:
    // 0x382658: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x382658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38265c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382660: 0xc0e09b0  jal         func_3826C0
    ctx->pc = 0x382660u;
    SET_GPR_U32(ctx, 31, 0x382668u);
    ctx->pc = 0x382664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382660u;
    // 0x382664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3826C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3826C0u, 0x382660u, 0x382668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382668u;
label_382668:
    // 0x382668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x382668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38266c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x38266cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x382670: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x382670u;
    {
        const bool branch_taken_0x382670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382670) {
            ctx->pc = 0x382658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382658;
        }
    }
    ctx->pc = 0x382678u;
    // 0x382678: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x382678u;
    {
        const bool branch_taken_0x382678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382678) {
            ctx->pc = 0x3826A8u;
            goto label_3826a8;
        }
    }
    ctx->pc = 0x382680u;
label_382680:
    // 0x382680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x382680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382684: 0x0  nop
    ctx->pc = 0x382684u;
    // NOP
label_382688:
    // 0x382688: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x382688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x38268c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382690: 0xc0e09b0  jal         func_3826C0
    ctx->pc = 0x382690u;
    SET_GPR_U32(ctx, 31, 0x382698u);
    ctx->pc = 0x382694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382690u;
    // 0x382694: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3826C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3826C0u, 0x382690u, 0x382698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382698u;
label_382698:
    // 0x382698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x382698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38269c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x38269cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3826a0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3826A0u;
    {
        const bool branch_taken_0x3826a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3826a0) {
            ctx->pc = 0x382688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382688;
        }
    }
    ctx->pc = 0x3826A8u;
label_3826a8:
    // 0x3826a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3826a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3826ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3826acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3826b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3826b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3826b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3826B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3826B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826B4u;
        // 0x3826b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3826B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3826BCu;
}
