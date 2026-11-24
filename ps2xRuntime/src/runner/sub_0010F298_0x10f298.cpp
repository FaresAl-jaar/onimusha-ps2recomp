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

// Function: sub_0010F298
// Address: 0x10f298 - 0x10f2c0
void sub_0010F298_0x10f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F298_0x10f298");
#endif

    switch (ctx->pc) {
        case 0x10f2a8u: goto label_10f2a8;
        default: break;
    }

    ctx->pc = 0x10f298u;

    // 0x10f298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f2a0: 0xc043804  jal         func_10E010
    ctx->pc = 0x10F2A0u;
    SET_GPR_U32(ctx, 31, 0x10F2A8u);
    ctx->pc = 0x10F2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2A0u;
    // 0x10f2a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x10F2A0u, 0x10F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2A8u;
label_10f2a8:
    // 0x10f2a8: 0xf  sync
    ctx->pc = 0x10f2a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10f2ac: 0x42000038  ei
    ctx->pc = 0x10f2acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10f2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f2b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2B8u;
        // 0x10f2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2C0u;
}
