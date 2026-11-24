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

// Function: sub_00207048
// Address: 0x207048 - 0x207094
void sub_00207048_0x207048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207048_0x207048");
#endif

    switch (ctx->pc) {
        case 0x20705cu: goto label_20705c;
        case 0x207074u: goto label_207074;
        default: break;
    }

    ctx->pc = 0x207048u;

    // 0x207048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20704c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x207050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x207054: 0xc081d84  jal         func_207610
    ctx->pc = 0x207054u;
    SET_GPR_U32(ctx, 31, 0x20705Cu);
    ctx->pc = 0x207058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207054u;
    // 0x207058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207054u, 0x20705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20705Cu;
label_20705c:
    // 0x20705c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207064: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207064u;
    {
        const bool branch_taken_0x207064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207064u;
        // 0x207068: 0x24847588  addiu       $a0, $a0, 0x7588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207064) {
            ctx->pc = 0x207080u;
            goto label_207080;
        }
    }
    ctx->pc = 0x20706Cu;
    // 0x20706c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20706Cu;
    SET_GPR_U32(ctx, 31, 0x207074u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20706Cu, 0x207074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207074u;
label_207074:
    // 0x207074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207074u;
    {
        const bool branch_taken_0x207074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207074u;
        // 0x207078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207074) {
            ctx->pc = 0x207084u;
            goto label_207084;
        }
    }
    ctx->pc = 0x20707Cu;
    // 0x20707c: 0x0  nop
    ctx->pc = 0x20707cu;
    // NOP
label_207080:
    // 0x207080: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_207084:
    // 0x207084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x207088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20708c: 0x3e00008  jr          $ra
    ctx->pc = 0x20708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20708Cu;
        // 0x207090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20708Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207094u;
}
