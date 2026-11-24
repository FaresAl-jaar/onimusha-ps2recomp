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

// Function: sub_00392640
// Address: 0x392640 - 0x39269c
void sub_00392640_0x392640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392640_0x392640");
#endif

    switch (ctx->pc) {
        case 0x392660u: goto label_392660;
        case 0x392670u: goto label_392670;
        default: break;
    }

    ctx->pc = 0x392640u;

    // 0x392640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x392640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x392644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x392644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x392648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x392648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39264c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x392650: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x392650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x392658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x392658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39265c: 0x279083b0  addiu       $s0, $gp, -0x7C50
    ctx->pc = 0x39265cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935472));
label_392660:
    // 0x392660: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x392660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x392664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392668: 0xc0e49a8  jal         func_3926A0
    ctx->pc = 0x392668u;
    SET_GPR_U32(ctx, 31, 0x392670u);
    ctx->pc = 0x39266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392668u;
    // 0x39266c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3926A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3926A0u, 0x392668u, 0x392670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392670u;
label_392670:
    // 0x392670: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x392670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x392674: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x392674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x392678: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x392678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39267c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x39267Cu;
    {
        const bool branch_taken_0x39267c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x392680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39267Cu;
        // 0x392680: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39267c) {
            ctx->pc = 0x392660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392660;
        }
    }
    ctx->pc = 0x392684u;
    // 0x392684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x392684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x392688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x392688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39268c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39268cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392694: 0x3e00008  jr          $ra
    ctx->pc = 0x392694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392694u;
        // 0x392698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39269Cu;
}
