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

// Function: sub_00390AB0
// Address: 0x390ab0 - 0x390ad4
void sub_00390AB0_0x390ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390AB0_0x390ab0");
#endif

    switch (ctx->pc) {
        case 0x390ac0u: goto label_390ac0;
        case 0x390ac8u: goto label_390ac8;
        default: break;
    }

    ctx->pc = 0x390ab0u;

    // 0x390ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x390ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x390ab8: 0xc0e4050  jal         func_390140
    ctx->pc = 0x390AB8u;
    SET_GPR_U32(ctx, 31, 0x390AC0u);
    ctx->pc = 0x390140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390140u, 0x390AB8u, 0x390AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AC0u;
label_390ac0:
    // 0x390ac0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x390AC0u;
    SET_GPR_U32(ctx, 31, 0x390AC8u);
    ctx->pc = 0x390AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AC0u;
    // 0x390ac4: 0x8c850554  lw          $a1, 0x554($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x390AC0u, 0x390AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AC8u;
label_390ac8:
    // 0x390ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390acc: 0x3e00008  jr          $ra
    ctx->pc = 0x390ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390ACCu;
        // 0x390ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390AD4u;
}
