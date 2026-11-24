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

// Function: sub_0036A7B0
// Address: 0x36a7b0 - 0x36a7e4
void sub_0036A7B0_0x36a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A7B0_0x36a7b0");
#endif

    switch (ctx->pc) {
        case 0x36a7c0u: goto label_36a7c0;
        default: break;
    }

    ctx->pc = 0x36a7b0u;

    // 0x36a7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a7b8: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x36A7B8u;
    SET_GPR_U32(ctx, 31, 0x36A7C0u);
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x36A7B8u, 0x36A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7C0u;
label_36a7c0:
    // 0x36a7c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A7C0u;
    {
        const bool branch_taken_0x36a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a7c0) {
            ctx->pc = 0x36A7D8u;
            goto label_36a7d8;
        }
    }
    ctx->pc = 0x36A7C8u;
    // 0x36a7c8: 0x90430043  lbu         $v1, 0x43($v0)
    ctx->pc = 0x36a7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x36a7cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a7d0: 0xa0430043  sb          $v1, 0x43($v0)
    ctx->pc = 0x36a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a7d4: 0x0  nop
    ctx->pc = 0x36a7d4u;
    // NOP
label_36a7d8:
    // 0x36a7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7DCu;
        // 0x36a7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A7E4u;
}
