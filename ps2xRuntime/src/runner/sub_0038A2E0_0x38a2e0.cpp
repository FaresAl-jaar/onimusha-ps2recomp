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

// Function: sub_0038A2E0
// Address: 0x38a2e0 - 0x38a30c
void sub_0038A2E0_0x38a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A2E0_0x38a2e0");
#endif

    switch (ctx->pc) {
        case 0x38a2f8u: goto label_38a2f8;
        case 0x38a300u: goto label_38a300;
        default: break;
    }

    ctx->pc = 0x38a2e0u;

    // 0x38a2e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a2e8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38a2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a2f0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38A2F0u;
    SET_GPR_U32(ctx, 31, 0x38A2F8u);
    ctx->pc = 0x38A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2F0u;
    // 0x38a2f4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38A2F0u, 0x38A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2F8u;
label_38a2f8:
    // 0x38a2f8: 0xc0e28c4  jal         func_38A310
    ctx->pc = 0x38A2F8u;
    SET_GPR_U32(ctx, 31, 0x38A300u);
    ctx->pc = 0x38A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A2F8u;
    // 0x38a2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A310u, 0x38A2F8u, 0x38A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A300u;
label_38a300:
    // 0x38a300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a304: 0x3e00008  jr          $ra
    ctx->pc = 0x38A304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A304u;
        // 0x38a308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A30Cu;
}
