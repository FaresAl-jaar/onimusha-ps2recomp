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

// Function: sub_0034D440
// Address: 0x34d440 - 0x34d460
void sub_0034D440_0x34d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D440_0x34d440");
#endif

    switch (ctx->pc) {
        case 0x34d450u: goto label_34d450;
        default: break;
    }

    ctx->pc = 0x34d440u;

    // 0x34d440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d448: 0xc0d34f4  jal         func_34D3D0
    ctx->pc = 0x34D448u;
    SET_GPR_U32(ctx, 31, 0x34D450u);
    ctx->pc = 0x34D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D3D0u, 0x34D448u, 0x34D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D450u;
label_34d450:
    // 0x34d450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d454: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x34d454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x34d458: 0x3e00008  jr          $ra
    ctx->pc = 0x34D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D458u;
        // 0x34d45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D460u;
}
