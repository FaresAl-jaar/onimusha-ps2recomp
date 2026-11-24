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

// Function: sub_001E4010
// Address: 0x1e4010 - 0x1e4078
void sub_001E4010_0x1e4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4010_0x1e4010");
#endif

    switch (ctx->pc) {
        case 0x1e4044u: goto label_1e4044;
        case 0x1e405cu: goto label_1e405c;
        default: break;
    }

    ctx->pc = 0x1e4010u;

    // 0x1e4010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4014: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e4014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e4018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e401c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4024: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e4024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4028: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E4028u;
    {
        const bool branch_taken_0x1e4028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e4028) {
            ctx->pc = 0x1E4068u;
            goto label_1e4068;
        }
    }
    ctx->pc = 0x1E4030u;
    // 0x1e4030: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1e4030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e4034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4034u;
    {
        const bool branch_taken_0x1e4034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4034) {
            ctx->pc = 0x1E4048u;
            goto label_1e4048;
        }
    }
    ctx->pc = 0x1E403Cu;
    // 0x1e403c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E403Cu;
    SET_GPR_U32(ctx, 31, 0x1E4044u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E403Cu, 0x1E4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4044u;
label_1e4044:
    // 0x1e4044: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e4044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e4048:
    // 0x1e4048: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1e4048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1e404c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E404Cu;
    {
        const bool branch_taken_0x1e404c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e404c) {
            ctx->pc = 0x1E4060u;
            goto label_1e4060;
        }
    }
    ctx->pc = 0x1E4054u;
    // 0x1e4054: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E4054u;
    SET_GPR_U32(ctx, 31, 0x1E405Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E4054u, 0x1E405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E405Cu;
label_1e405c:
    // 0x1e405c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_1e4060:
    // 0x1e4060: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e4060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e4064: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e4064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e4068:
    // 0x1e4068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e406c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e406cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4070: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4070u;
        // 0x1e4074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4078u;
}
