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

// Function: sub_001F5128
// Address: 0x1f5128 - 0x1f5150
void sub_001F5128_0x1f5128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5128_0x1f5128");
#endif

    switch (ctx->pc) {
        case 0x1f5128u: goto label_1f5128;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f5130u: goto label_1f5130;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5138u: goto label_1f5138;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f5148u: goto label_1f5148;
        case 0x1f514cu: goto label_1f514c;
        default: break;
    }

    ctx->pc = 0x1f5128u;

label_1f5128:
    // 0x1f5128: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f512c:
    // 0x1f512c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f512cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5130:
    // 0x1f5130: 0x8c428118  lw          $v0, -0x7EE8($v0)
    ctx->pc = 0x1f5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934808)));
label_1f5134:
    // 0x1f5134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5138:
    if (ctx->pc == 0x1F5138u) {
        ctx->pc = 0x1F5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5134u;
        // 0x1f5138: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F513Cu;
        goto label_1f513c;
    }
    ctx->pc = 0x1F5134u;
    {
        const bool branch_taken_0x1f5134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5134u;
        // 0x1f5138: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5134) {
            ctx->pc = 0x1F5144u;
            goto label_1f5144;
        }
    }
    ctx->pc = 0x1F513Cu;
label_1f513c:
    // 0x1f513c: 0x40f809  jalr        $v0
label_1f5140:
    if (ctx->pc == 0x1F5140u) {
        ctx->pc = 0x1F5144u;
        goto label_1f5144;
    }
    ctx->pc = 0x1F513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F513Cu, 0x1F5144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5144u;
label_1f5144:
    // 0x1f5144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5148:
    // 0x1f5148: 0x3e00008  jr          $ra
label_1f514c:
    if (ctx->pc == 0x1F514Cu) {
        ctx->pc = 0x1F514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5148u;
        // 0x1f514c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5150u;
        goto label_fallthrough_0x1f5148;
    }
    ctx->pc = 0x1F5148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5148u;
        // 0x1f514c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5148:
    ctx->pc = 0x1F5150u;
}
