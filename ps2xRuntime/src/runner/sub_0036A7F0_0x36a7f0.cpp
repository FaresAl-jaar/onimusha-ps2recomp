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

// Function: sub_0036A7F0
// Address: 0x36a7f0 - 0x36a810
void sub_0036A7F0_0x36a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A7F0_0x36a7f0");
#endif

    switch (ctx->pc) {
        case 0x36a800u: goto label_36a800;
        default: break;
    }

    ctx->pc = 0x36a7f0u;

    // 0x36a7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a7f8: 0xc0da9cc  jal         func_36A730
    ctx->pc = 0x36A7F8u;
    SET_GPR_U32(ctx, 31, 0x36A800u);
    ctx->pc = 0x36A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A730u, 0x36A7F8u, 0x36A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A800u;
label_36a800:
    // 0x36a800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a804: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x36a804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36a808: 0x3e00008  jr          $ra
    ctx->pc = 0x36A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A808u;
        // 0x36a80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A810u;
}
