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

// Function: sub_002F5D50
// Address: 0x2f5d50 - 0x2f5d7c
void sub_002F5D50_0x2f5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D50_0x2f5d50");
#endif

    switch (ctx->pc) {
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d54u: goto label_2f5d54;
        case 0x2f5d58u: goto label_2f5d58;
        case 0x2f5d5cu: goto label_2f5d5c;
        case 0x2f5d60u: goto label_2f5d60;
        case 0x2f5d64u: goto label_2f5d64;
        case 0x2f5d68u: goto label_2f5d68;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d70u: goto label_2f5d70;
        case 0x2f5d74u: goto label_2f5d74;
        case 0x2f5d78u: goto label_2f5d78;
        default: break;
    }

    ctx->pc = 0x2f5d50u;

label_2f5d50:
    // 0x2f5d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f5d54:
    // 0x2f5d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f5d58:
    // 0x2f5d58: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x2f5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_2f5d5c:
    // 0x2f5d5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f5d60:
    if (ctx->pc == 0x2F5D60u) {
        ctx->pc = 0x2F5D64u;
        goto label_2f5d64;
    }
    ctx->pc = 0x2F5D5Cu;
    {
        const bool branch_taken_0x2f5d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d5c) {
            ctx->pc = 0x2F5D70u;
            goto label_2f5d70;
        }
    }
    ctx->pc = 0x2F5D64u;
label_2f5d64:
    // 0x2f5d64: 0x60f809  jalr        $v1
label_2f5d68:
    if (ctx->pc == 0x2F5D68u) {
        ctx->pc = 0x2F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D64u;
        // 0x2f5d68: 0x8f848acc  lw          $a0, -0x7534($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D6Cu;
        goto label_2f5d6c;
    }
    ctx->pc = 0x2F5D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F5D6Cu);
        ctx->pc = 0x2F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D64u;
        // 0x2f5d68: 0x8f848acc  lw          $a0, -0x7534($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D64u, 0x2F5D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5D6Cu;
label_2f5d6c:
    // 0x2f5d6c: 0xaf808ac8  sw          $zero, -0x7538($gp)
    ctx->pc = 0x2f5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 0));
label_2f5d70:
    // 0x2f5d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5d74:
    // 0x2f5d74: 0x3e00008  jr          $ra
label_2f5d78:
    if (ctx->pc == 0x2F5D78u) {
        ctx->pc = 0x2F5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D74u;
        // 0x2f5d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D7Cu;
        goto label_fallthrough_0x2f5d74;
    }
    ctx->pc = 0x2F5D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D74u;
        // 0x2f5d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f5d74:
    ctx->pc = 0x2F5D7Cu;
}
