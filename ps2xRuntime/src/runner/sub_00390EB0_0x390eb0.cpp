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

// Function: sub_00390EB0
// Address: 0x390eb0 - 0x390ef4
void sub_00390EB0_0x390eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390EB0_0x390eb0");
#endif

    switch (ctx->pc) {
        case 0x390ed8u: goto label_390ed8;
        case 0x390ee8u: goto label_390ee8;
        default: break;
    }

    ctx->pc = 0x390eb0u;

    // 0x390eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x390eb4: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x390eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x390eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x390ebc: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x390ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x390ec0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390EC0u;
    {
        const bool branch_taken_0x390ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390ec0) {
            ctx->pc = 0x390ED0u;
            goto label_390ed0;
        }
    }
    ctx->pc = 0x390EC8u;
    // 0x390ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x390EC8u;
    {
        const bool branch_taken_0x390ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ec8) {
            ctx->pc = 0x390EE0u;
            goto label_390ee0;
        }
    }
    ctx->pc = 0x390ED0u;
label_390ed0:
    // 0x390ed0: 0xc0e43c0  jal         func_390F00
    ctx->pc = 0x390ED0u;
    SET_GPR_U32(ctx, 31, 0x390ED8u);
    ctx->pc = 0x390F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390F00u, 0x390ED0u, 0x390ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390ED8u;
label_390ed8:
    // 0x390ed8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390ED8u;
    {
        const bool branch_taken_0x390ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ed8) {
            ctx->pc = 0x390EE8u;
            goto label_390ee8;
        }
    }
    ctx->pc = 0x390EE0u;
label_390ee0:
    // 0x390ee0: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x390EE0u;
    SET_GPR_U32(ctx, 31, 0x390EE8u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x390EE0u, 0x390EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EE8u;
label_390ee8:
    // 0x390ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390eec: 0x3e00008  jr          $ra
    ctx->pc = 0x390EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EECu;
        // 0x390ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390EF4u;
}
