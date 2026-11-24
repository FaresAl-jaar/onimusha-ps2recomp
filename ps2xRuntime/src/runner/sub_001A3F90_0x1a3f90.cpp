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

// Function: sub_001A3F90
// Address: 0x1a3f90 - 0x1a3fc4
void sub_001A3F90_0x1a3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3F90_0x1a3f90");
#endif

    switch (ctx->pc) {
        case 0x1a3fb4u: goto label_1a3fb4;
        default: break;
    }

    ctx->pc = 0x1a3f90u;

    // 0x1a3f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3f98: 0x8f858794  lw          $a1, -0x786C($gp)
    ctx->pc = 0x1a3f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x1a3f9c: 0xaf808798  sw          $zero, -0x7868($gp)
    ctx->pc = 0x1a3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 0));
    // 0x1a3fa0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3FA0u;
    {
        const bool branch_taken_0x1a3fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FA0u;
        // 0x1a3fa4: 0xaf808794  sw          $zero, -0x786C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fa0) {
            ctx->pc = 0x1A3FB8u;
            goto label_1a3fb8;
        }
    }
    ctx->pc = 0x1A3FA8u;
    // 0x1a3fa8: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1a3fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1a3fac: 0xc068b48  jal         func_1A2D20
    ctx->pc = 0x1A3FACu;
    SET_GPR_U32(ctx, 31, 0x1A3FB4u);
    ctx->pc = 0x1A3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FACu;
    // 0x1a3fb0: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D20u, 0x1A3FACu, 0x1A3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FB4u;
label_1a3fb4:
    // 0x1a3fb4: 0x0  nop
    ctx->pc = 0x1a3fb4u;
    // NOP
label_1a3fb8:
    // 0x1a3fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FBCu;
        // 0x1a3fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3FC4u;
}
