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

// Function: sub_00225050
// Address: 0x225050 - 0x225098
void sub_00225050_0x225050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225050_0x225050");
#endif

    switch (ctx->pc) {
        case 0x225050u: goto label_225050;
        case 0x225054u: goto label_225054;
        case 0x225058u: goto label_225058;
        case 0x22505cu: goto label_22505c;
        case 0x225060u: goto label_225060;
        case 0x225064u: goto label_225064;
        case 0x225068u: goto label_225068;
        case 0x22506cu: goto label_22506c;
        case 0x225070u: goto label_225070;
        case 0x225074u: goto label_225074;
        case 0x225078u: goto label_225078;
        case 0x22507cu: goto label_22507c;
        case 0x225080u: goto label_225080;
        case 0x225084u: goto label_225084;
        case 0x225088u: goto label_225088;
        case 0x22508cu: goto label_22508c;
        case 0x225090u: goto label_225090;
        case 0x225094u: goto label_225094;
        default: break;
    }

    ctx->pc = 0x225050u;

label_225050:
    // 0x225050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225054:
    // 0x225054: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x225054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_225058:
    // 0x225058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22505c:
    // 0x22505c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225060:
    // 0x225060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_225064:
    // 0x225064: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x225064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_225068:
    // 0x225068: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x225068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_22506c:
    // 0x22506c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x22506cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_225070:
    // 0x225070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225074:
    // 0x225074: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_225078:
    if (ctx->pc == 0x225078u) {
        ctx->pc = 0x225078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225074u;
        // 0x225078: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22507Cu;
        goto label_22507c;
    }
    ctx->pc = 0x225074u;
    {
        const bool branch_taken_0x225074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225074u;
        // 0x225078: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225074) {
            ctx->pc = 0x225084u;
            goto label_225084;
        }
    }
    ctx->pc = 0x22507Cu;
label_22507c:
    // 0x22507c: 0x60f809  jalr        $v1
label_225080:
    if (ctx->pc == 0x225080u) {
        ctx->pc = 0x225084u;
        goto label_225084;
    }
    ctx->pc = 0x22507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x225084u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22507Cu, 0x225084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225084u;
label_225084:
    // 0x225084: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x225084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_225088:
    // 0x225088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22508c:
    // 0x22508c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22508cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225090:
    // 0x225090: 0x3e00008  jr          $ra
label_225094:
    if (ctx->pc == 0x225094u) {
        ctx->pc = 0x225094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225090u;
        // 0x225094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225098u;
        goto label_fallthrough_0x225090;
    }
    ctx->pc = 0x225090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225090u;
        // 0x225094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225090:
    ctx->pc = 0x225098u;
}
