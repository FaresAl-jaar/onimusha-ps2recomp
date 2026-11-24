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

// Function: sub_002E6F90
// Address: 0x2e6f90 - 0x2e6fc0
void sub_002E6F90_0x2e6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6F90_0x2e6f90");
#endif

    switch (ctx->pc) {
        case 0x2e6fb0u: goto label_2e6fb0;
        default: break;
    }

    ctx->pc = 0x2e6f90u;

    // 0x2e6f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e6f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fa0: 0x90862b64  lbu         $a2, 0x2B64($a0)
    ctx->pc = 0x2e6fa0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11108)));
    // 0x2e6fa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e6fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fa8: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x2E6FA8u;
    SET_GPR_U32(ctx, 31, 0x2E6FB0u);
    ctx->pc = 0x2E6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FA8u;
    // 0x2e6fac: 0x27848548  addiu       $a0, $gp, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2E6FA8u, 0x2E6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FB0u;
label_2e6fb0:
    // 0x2e6fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6fb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e6fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e6fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB8u;
        // 0x2e6fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6FC0u;
}
