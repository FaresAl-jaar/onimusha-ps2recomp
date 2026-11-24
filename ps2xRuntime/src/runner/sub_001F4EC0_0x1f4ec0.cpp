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

// Function: sub_001F4EC0
// Address: 0x1f4ec0 - 0x1f4eec
void sub_001F4EC0_0x1f4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4EC0_0x1f4ec0");
#endif

    switch (ctx->pc) {
        case 0x1f4ec0u: goto label_1f4ec0;
        case 0x1f4ec4u: goto label_1f4ec4;
        case 0x1f4ec8u: goto label_1f4ec8;
        case 0x1f4eccu: goto label_1f4ecc;
        case 0x1f4ed0u: goto label_1f4ed0;
        case 0x1f4ed4u: goto label_1f4ed4;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4edcu: goto label_1f4edc;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ee8u: goto label_1f4ee8;
        default: break;
    }

    ctx->pc = 0x1f4ec0u;

label_1f4ec0:
    // 0x1f4ec0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1f4ec4:
    // 0x1f4ec4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4ec8:
    // 0x1f4ec8: 0x8c6380dc  lw          $v1, -0x7F24($v1)
    ctx->pc = 0x1f4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934748)));
label_1f4ecc:
    // 0x1f4ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ed0:
    // 0x1f4ed0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f4ed4:
    if (ctx->pc == 0x1F4ED4u) {
        ctx->pc = 0x1F4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED0u;
        // 0x1f4ed4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4ED8u;
        goto label_1f4ed8;
    }
    ctx->pc = 0x1F4ED0u;
    {
        const bool branch_taken_0x1f4ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED0u;
        // 0x1f4ed4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ed0) {
            ctx->pc = 0x1F4EE0u;
            goto label_1f4ee0;
        }
    }
    ctx->pc = 0x1F4ED8u;
label_1f4ed8:
    // 0x1f4ed8: 0x60f809  jalr        $v1
label_1f4edc:
    if (ctx->pc == 0x1F4EDCu) {
        ctx->pc = 0x1F4EE0u;
        goto label_1f4ee0;
    }
    ctx->pc = 0x1F4ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F4EE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4ED8u, 0x1F4EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4EE0u;
label_1f4ee0:
    // 0x1f4ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4ee4:
    // 0x1f4ee4: 0x3e00008  jr          $ra
label_1f4ee8:
    if (ctx->pc == 0x1F4EE8u) {
        ctx->pc = 0x1F4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EE4u;
        // 0x1f4ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4EECu;
        goto label_fallthrough_0x1f4ee4;
    }
    ctx->pc = 0x1F4EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EE4u;
        // 0x1f4ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f4ee4:
    ctx->pc = 0x1F4EECu;
}
