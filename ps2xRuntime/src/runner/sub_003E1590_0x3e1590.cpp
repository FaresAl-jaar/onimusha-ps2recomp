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

// Function: sub_003E1590
// Address: 0x3e1590 - 0x3e15b8
void sub_003E1590_0x3e1590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1590_0x3e1590");
#endif

    switch (ctx->pc) {
        case 0x3e15a0u: goto label_3e15a0;
        default: break;
    }

    ctx->pc = 0x3e1590u;

    // 0x3e1590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e1594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1598: 0xc0f84d8  jal         func_3E1360
    ctx->pc = 0x3E1598u;
    SET_GPR_U32(ctx, 31, 0x3E15A0u);
    ctx->pc = 0x3E1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1360u, 0x3E1598u, 0x3E15A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15A0u;
label_3e15a0:
    // 0x3e15a0: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e15a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3e15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e15a8: 0xa0640290  sb          $a0, 0x290($v1)
    ctx->pc = 0x3e15a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e15ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e15acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e15b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15B0u;
        // 0x3e15b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E15B8u;
}
