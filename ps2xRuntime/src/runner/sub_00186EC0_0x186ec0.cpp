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

// Function: sub_00186EC0
// Address: 0x186ec0 - 0x186ef4
void sub_00186EC0_0x186ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186EC0_0x186ec0");
#endif

    switch (ctx->pc) {
        case 0x186ed0u: goto label_186ed0;
        default: break;
    }

    ctx->pc = 0x186ec0u;

    // 0x186ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186ec8: 0xc060d40  jal         func_183500
    ctx->pc = 0x186EC8u;
    SET_GPR_U32(ctx, 31, 0x186ED0u);
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x186EC8u, 0x186ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186ED0u;
label_186ed0:
    // 0x186ed0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x186ED0u;
    {
        const bool branch_taken_0x186ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ed0) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186ED8u;
    // 0x186ed8: 0x8c4211e4  lw          $v0, 0x11E4($v0)
    ctx->pc = 0x186ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4580)));
    // 0x186edc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186EDCu;
    {
        const bool branch_taken_0x186edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EDCu;
        // 0x186ee0: 0x21202  srl         $v0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186edc) {
            ctx->pc = 0x186EE8u;
            goto label_186ee8;
        }
    }
    ctx->pc = 0x186EE4u;
label_186ee4:
    // 0x186ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_186ee8:
    // 0x186ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186eec: 0x3e00008  jr          $ra
    ctx->pc = 0x186EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EECu;
        // 0x186ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186EF4u;
}
