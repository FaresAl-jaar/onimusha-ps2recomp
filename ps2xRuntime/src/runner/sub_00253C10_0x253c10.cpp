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

// Function: sub_00253C10
// Address: 0x253c10 - 0x253c40
void sub_00253C10_0x253c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C10_0x253c10");
#endif

    switch (ctx->pc) {
        case 0x253c10u: goto label_253c10;
        case 0x253c14u: goto label_253c14;
        case 0x253c18u: goto label_253c18;
        case 0x253c1cu: goto label_253c1c;
        case 0x253c20u: goto label_253c20;
        case 0x253c24u: goto label_253c24;
        case 0x253c28u: goto label_253c28;
        case 0x253c2cu: goto label_253c2c;
        case 0x253c30u: goto label_253c30;
        case 0x253c34u: goto label_253c34;
        case 0x253c38u: goto label_253c38;
        case 0x253c3cu: goto label_253c3c;
        default: break;
    }

    ctx->pc = 0x253c10u;

label_253c10:
    // 0x253c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_253c14:
    // 0x253c14: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253c18:
    // 0x253c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_253c1c:
    // 0x253c1c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x253c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
label_253c20:
    // 0x253c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253c24:
    // 0x253c24: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_253c28:
    if (ctx->pc == 0x253C28u) {
        ctx->pc = 0x253C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C24u;
        // 0x253c28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C2Cu;
        goto label_253c2c;
    }
    ctx->pc = 0x253C24u;
    {
        const bool branch_taken_0x253c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253c24) {
            ctx->pc = 0x253C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C24u;
            // 0x253c28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C38u;
            goto label_253c38;
        }
    }
    ctx->pc = 0x253C2Cu;
label_253c2c:
    // 0x253c2c: 0x60f809  jalr        $v1
label_253c30:
    if (ctx->pc == 0x253C30u) {
        ctx->pc = 0x253C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C2Cu;
        // 0x253c30: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C34u;
        goto label_253c34;
    }
    ctx->pc = 0x253C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x253C34u);
        ctx->pc = 0x253C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C2Cu;
        // 0x253c30: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C2Cu, 0x253C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253C34u;
label_253c34:
    // 0x253c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253c38:
    // 0x253c38: 0x3e00008  jr          $ra
label_253c3c:
    if (ctx->pc == 0x253C3Cu) {
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C40u;
        goto label_fallthrough_0x253c38;
    }
    ctx->pc = 0x253C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253c38:
    ctx->pc = 0x253C40u;
}
