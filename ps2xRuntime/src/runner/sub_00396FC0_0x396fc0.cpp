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

// Function: sub_00396FC0
// Address: 0x396fc0 - 0x396ffc
void sub_00396FC0_0x396fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396FC0_0x396fc0");
#endif

    switch (ctx->pc) {
        case 0x396fe0u: goto label_396fe0;
        case 0x396ff0u: goto label_396ff0;
        default: break;
    }

    ctx->pc = 0x396fc0u;

    // 0x396fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x396fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396fc8: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x396fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x396fcc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x396fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x396fd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x396FD0u;
    {
        const bool branch_taken_0x396fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396fd0) {
            ctx->pc = 0x396FE8u;
            goto label_396fe8;
        }
    }
    ctx->pc = 0x396FD8u;
    // 0x396fd8: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x396FD8u;
    SET_GPR_U32(ctx, 31, 0x396FE0u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x396FD8u, 0x396FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FE0u;
label_396fe0:
    // 0x396fe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x396FE0u;
    {
        const bool branch_taken_0x396fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fe0) {
            ctx->pc = 0x396FF0u;
            goto label_396ff0;
        }
    }
    ctx->pc = 0x396FE8u;
label_396fe8:
    // 0x396fe8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x396FE8u;
    SET_GPR_U32(ctx, 31, 0x396FF0u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x396FE8u, 0x396FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FF0u;
label_396ff0:
    // 0x396ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x396FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FF4u;
        // 0x396ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396FFCu;
}
