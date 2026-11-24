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

// Function: sub_00205DF0
// Address: 0x205df0 - 0x205e18
void sub_00205DF0_0x205df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205DF0_0x205df0");
#endif

    switch (ctx->pc) {
        case 0x205e04u: goto label_205e04;
        default: break;
    }

    ctx->pc = 0x205df0u;

    // 0x205df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205dfc: 0xc081544  jal         func_205510
    ctx->pc = 0x205DFCu;
    SET_GPR_U32(ctx, 31, 0x205E04u);
    ctx->pc = 0x205E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205DFCu;
    // 0x205e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205DFCu, 0x205E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E04u;
label_205e04:
    // 0x205e04: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x205e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x205e08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e10: 0x3e00008  jr          $ra
    ctx->pc = 0x205E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E10u;
        // 0x205e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E18u;
}
