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

// Function: sub_002B9120
// Address: 0x2b9120 - 0x2b9194
void sub_002B9120_0x2b9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9120_0x2b9120");
#endif

    switch (ctx->pc) {
        case 0x2b9148u: goto label_2b9148;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9170u: goto label_2b9170;
        default: break;
    }

    ctx->pc = 0x2b9120u;

    // 0x2b9120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b9124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b9128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b912c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9134: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2b9134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b9138: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9138u;
    {
        const bool branch_taken_0x2b9138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9138u;
        // 0x2b913c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9138) {
            ctx->pc = 0x2B9148u;
            goto label_2b9148;
        }
    }
    ctx->pc = 0x2B9140u;
    // 0x2b9140: 0xc0a8574  jal         func_2A15D0
    ctx->pc = 0x2B9140u;
    SET_GPR_U32(ctx, 31, 0x2B9148u);
    ctx->pc = 0x2A15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A15D0u, 0x2B9140u, 0x2B9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9148u;
label_2b9148:
    // 0x2b9148: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b9148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b914c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b914cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9150:
    // 0x2b9150: 0x8e030858  lw          $v1, 0x858($s0)
    ctx->pc = 0x2b9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x2b9154: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9154u;
    {
        const bool branch_taken_0x2b9154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9154) {
            ctx->pc = 0x2B9170u;
            goto label_2b9170;
        }
    }
    ctx->pc = 0x2B915Cu;
    // 0x2b915c: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2b915cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b9160: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9160u;
    {
        const bool branch_taken_0x2b9160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9160u;
        // 0x2b9164: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9160) {
            ctx->pc = 0x2B9170u;
            goto label_2b9170;
        }
    }
    ctx->pc = 0x2B9168u;
    // 0x2b9168: 0xc0a8574  jal         func_2A15D0
    ctx->pc = 0x2B9168u;
    SET_GPR_U32(ctx, 31, 0x2B9170u);
    ctx->pc = 0x2A15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A15D0u, 0x2B9168u, 0x2B9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9170u;
label_2b9170:
    // 0x2b9170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b9174: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x2b9174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b9178: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B9178u;
    {
        const bool branch_taken_0x2b9178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9178u;
        // 0x2b917c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9178) {
            ctx->pc = 0x2B9150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9150;
        }
    }
    ctx->pc = 0x2B9180u;
    // 0x2b9180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b9180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b918c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B918Cu;
        // 0x2b9190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9194u;
}
