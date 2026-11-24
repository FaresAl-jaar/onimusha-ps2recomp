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

// Function: sub_00294670
// Address: 0x294670 - 0x2946b8
void sub_00294670_0x294670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294670_0x294670");
#endif

    switch (ctx->pc) {
        case 0x294688u: goto label_294688;
        case 0x294690u: goto label_294690;
        default: break;
    }

    ctx->pc = 0x294670u;

    // 0x294670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29467c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x294680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294688:
    // 0x294688: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x294688u;
    SET_GPR_U32(ctx, 31, 0x294690u);
    ctx->pc = 0x29468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294688u;
    // 0x29468c: 0x8e042950  lw          $a0, 0x2950($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x294688u, 0x294690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294690u;
label_294690:
    // 0x294690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x294694: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x294698: 0x2a23000e  slti        $v1, $s1, 0xE
    ctx->pc = 0x294698u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x29469c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29469Cu;
    {
        const bool branch_taken_0x29469c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29469c) {
            ctx->pc = 0x294688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294688;
        }
    }
    ctx->pc = 0x2946A4u;
    // 0x2946a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2946a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2946a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2946a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2946ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2946acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2946B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2946B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2946B0u;
        // 0x2946b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946B8u;
}
