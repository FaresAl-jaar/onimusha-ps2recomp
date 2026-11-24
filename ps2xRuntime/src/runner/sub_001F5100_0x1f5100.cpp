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

// Function: sub_001F5100
// Address: 0x1f5100 - 0x1f5128
void sub_001F5100_0x1f5100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5100_0x1f5100");
#endif

    switch (ctx->pc) {
        case 0x1f5100u: goto label_1f5100;
        case 0x1f5104u: goto label_1f5104;
        case 0x1f5108u: goto label_1f5108;
        case 0x1f510cu: goto label_1f510c;
        case 0x1f5110u: goto label_1f5110;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5118u: goto label_1f5118;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f5120u: goto label_1f5120;
        case 0x1f5124u: goto label_1f5124;
        default: break;
    }

    ctx->pc = 0x1f5100u;

label_1f5100:
    // 0x1f5100: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f5104:
    // 0x1f5104: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5108:
    // 0x1f5108: 0x8c428114  lw          $v0, -0x7EEC($v0)
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934804)));
label_1f510c:
    // 0x1f510c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5110:
    if (ctx->pc == 0x1F5110u) {
        ctx->pc = 0x1F5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F510Cu;
        // 0x1f5110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5114u;
        goto label_1f5114;
    }
    ctx->pc = 0x1F510Cu;
    {
        const bool branch_taken_0x1f510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F510Cu;
        // 0x1f5110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f510c) {
            ctx->pc = 0x1F511Cu;
            goto label_1f511c;
        }
    }
    ctx->pc = 0x1F5114u;
label_1f5114:
    // 0x1f5114: 0x40f809  jalr        $v0
label_1f5118:
    if (ctx->pc == 0x1F5118u) {
        ctx->pc = 0x1F511Cu;
        goto label_1f511c;
    }
    ctx->pc = 0x1F5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F511Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5114u, 0x1F511Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F511Cu;
label_1f511c:
    // 0x1f511c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5120:
    // 0x1f5120: 0x3e00008  jr          $ra
label_1f5124:
    if (ctx->pc == 0x1F5124u) {
        ctx->pc = 0x1F5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5120u;
        // 0x1f5124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5128u;
        goto label_fallthrough_0x1f5120;
    }
    ctx->pc = 0x1F5120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5120u;
        // 0x1f5124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5120:
    ctx->pc = 0x1F5128u;
}
