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

// Function: sub_00205FA0
// Address: 0x205fa0 - 0x205fcc
void sub_00205FA0_0x205fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205FA0_0x205fa0");
#endif

    ctx->pc = 0x205fa0u;

    // 0x205fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205fa8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x205FA8u;
    {
        const bool branch_taken_0x205fa8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x205FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FA8u;
        // 0x205fac: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fa8) {
            ctx->pc = 0x205FC0u;
            goto label_205fc0;
        }
    }
    ctx->pc = 0x205FB0u;
    // 0x205fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205fb4: 0x8087808  j           func_21E020
    ctx->pc = 0x205FB4u;
    ctx->pc = 0x205FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FB4u;
    // 0x205fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E020u;
    sub_0021E020_0x21e020(rdram, ctx, runtime); return;
    ctx->pc = 0x205FBCu;
    // 0x205fbc: 0x0  nop
    ctx->pc = 0x205fbcu;
    // NOP
label_205fc0:
    // 0x205fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x205FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FC4u;
        // 0x205fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205FCCu;
}
