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

// Function: sub_00396F90
// Address: 0x396f90 - 0x396fbc
void sub_00396F90_0x396f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396F90_0x396f90");
#endif

    switch (ctx->pc) {
        case 0x396fa4u: goto label_396fa4;
        case 0x396facu: goto label_396fac;
        default: break;
    }

    ctx->pc = 0x396f90u;

    // 0x396f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x396f9c: 0xc0e58e0  jal         func_396380
    ctx->pc = 0x396F9Cu;
    SET_GPR_U32(ctx, 31, 0x396FA4u);
    ctx->pc = 0x396FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F9Cu;
    // 0x396fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396380u, 0x396F9Cu, 0x396FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FA4u;
label_396fa4:
    // 0x396fa4: 0xc0a6038  jal         func_2980E0
    ctx->pc = 0x396FA4u;
    SET_GPR_U32(ctx, 31, 0x396FACu);
    ctx->pc = 0x396FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396FA4u;
    // 0x396fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2980E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2980E0u, 0x396FA4u, 0x396FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396FACu;
label_396fac:
    // 0x396fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x396FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FB4u;
        // 0x396fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396FBCu;
}
