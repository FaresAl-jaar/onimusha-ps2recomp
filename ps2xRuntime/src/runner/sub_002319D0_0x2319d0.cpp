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

// Function: sub_002319D0
// Address: 0x2319d0 - 0x231a00
void sub_002319D0_0x2319d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002319D0_0x2319d0");
#endif

    switch (ctx->pc) {
        case 0x2319f0u: goto label_2319f0;
        default: break;
    }

    ctx->pc = 0x2319d0u;

    // 0x2319d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2319d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2319d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319d8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2319dc: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x2319dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2319e0: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x2319e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2319e4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2319e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2319e8: 0xc08c5d6  jal         func_231758
    ctx->pc = 0x2319E8u;
    SET_GPR_U32(ctx, 31, 0x2319F0u);
    ctx->pc = 0x2319ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319E8u;
    // 0x2319ec: 0x27aa010c  addiu       $t2, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231758u, 0x2319E8u, 0x2319F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319F0u;
label_2319f0:
    // 0x2319f0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2319f4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2319f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2319f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2319F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2319FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319F8u;
        // 0x2319fc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A00u;
}
