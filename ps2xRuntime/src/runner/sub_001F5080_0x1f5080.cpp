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

// Function: sub_001F5080
// Address: 0x1f5080 - 0x1f50ac
void sub_001F5080_0x1f5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5080_0x1f5080");
#endif

    switch (ctx->pc) {
        case 0x1f5080u: goto label_1f5080;
        case 0x1f5084u: goto label_1f5084;
        case 0x1f5088u: goto label_1f5088;
        case 0x1f508cu: goto label_1f508c;
        case 0x1f5090u: goto label_1f5090;
        case 0x1f5094u: goto label_1f5094;
        case 0x1f5098u: goto label_1f5098;
        case 0x1f509cu: goto label_1f509c;
        case 0x1f50a0u: goto label_1f50a0;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50a8u: goto label_1f50a8;
        default: break;
    }

    ctx->pc = 0x1f5080u;

label_1f5080:
    // 0x1f5080: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1f5080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1f5084:
    // 0x1f5084: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5088:
    // 0x1f5088: 0x8c638108  lw          $v1, -0x7EF8($v1)
    ctx->pc = 0x1f5088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934792)));
label_1f508c:
    // 0x1f508c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5090:
    // 0x1f5090: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f5094:
    if (ctx->pc == 0x1F5094u) {
        ctx->pc = 0x1F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5090u;
        // 0x1f5094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5098u;
        goto label_1f5098;
    }
    ctx->pc = 0x1F5090u;
    {
        const bool branch_taken_0x1f5090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5090u;
        // 0x1f5094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5090) {
            ctx->pc = 0x1F50A0u;
            goto label_1f50a0;
        }
    }
    ctx->pc = 0x1F5098u;
label_1f5098:
    // 0x1f5098: 0x60f809  jalr        $v1
label_1f509c:
    if (ctx->pc == 0x1F509Cu) {
        ctx->pc = 0x1F50A0u;
        goto label_1f50a0;
    }
    ctx->pc = 0x1F5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F50A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5098u, 0x1F50A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F50A0u;
label_1f50a0:
    // 0x1f50a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f50a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f50a4:
    // 0x1f50a4: 0x3e00008  jr          $ra
label_1f50a8:
    if (ctx->pc == 0x1F50A8u) {
        ctx->pc = 0x1F50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50A4u;
        // 0x1f50a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50ACu;
        goto label_fallthrough_0x1f50a4;
    }
    ctx->pc = 0x1F50A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50A4u;
        // 0x1f50a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f50a4:
    ctx->pc = 0x1F50ACu;
}
