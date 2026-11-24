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

// Function: sub_00685C90
// Address: 0x685c90 - 0x685cdc
void sub_00685C90_0x685c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685C90_0x685c90");
#endif

    switch (ctx->pc) {
        case 0x685cb4u: goto label_685cb4;
        case 0x685cd0u: goto label_685cd0;
        default: break;
    }

    ctx->pc = 0x685c90u;

    // 0x685c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685c94: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x685c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x685c98: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x685c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x685c9c: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x685c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x685ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685ca4: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x685ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x685ca8: 0x24a504e0  addiu       $a1, $a1, 0x4E0
    ctx->pc = 0x685ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    // 0x685cac: 0xc040244  jal         func_100910
    ctx->pc = 0x685CACu;
    SET_GPR_U32(ctx, 31, 0x685CB4u);
    ctx->pc = 0x685CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685CACu;
    // 0x685cb0: 0x24c681a0  addiu       $a2, $a2, -0x7E60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685CACu, 0x685CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685CB4u;
label_685cb4:
    // 0x685cb4: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x685cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x685cb8: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x685cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x685cbc: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x685cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x685cc0: 0x248481d0  addiu       $a0, $a0, -0x7E30
    ctx->pc = 0x685cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    // 0x685cc4: 0x24a55690  addiu       $a1, $a1, 0x5690
    ctx->pc = 0x685cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22160));
    // 0x685cc8: 0xc040244  jal         func_100910
    ctx->pc = 0x685CC8u;
    SET_GPR_U32(ctx, 31, 0x685CD0u);
    ctx->pc = 0x685CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685CC8u;
    // 0x685ccc: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685CC8u, 0x685CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685CD0u;
label_685cd0:
    // 0x685cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x685CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685CD4u;
        // 0x685cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685CDCu;
}
