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

// Function: sub_0033EB80
// Address: 0x33eb80 - 0x33ebbc
void sub_0033EB80_0x33eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EB80_0x33eb80");
#endif

    switch (ctx->pc) {
        case 0x33eba4u: goto label_33eba4;
        case 0x33ebacu: goto label_33ebac;
        default: break;
    }

    ctx->pc = 0x33eb80u;

    // 0x33eb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33eb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33eb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33eb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33eb8c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x33eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x33eb90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33eb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb94: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x33eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x33eb98: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x33eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x33eb9c: 0xc0cfad0  jal         func_33EB40
    ctx->pc = 0x33EB9Cu;
    SET_GPR_U32(ctx, 31, 0x33EBA4u);
    ctx->pc = 0x33EBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB9Cu;
    // 0x33eba0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB40u, 0x33EB9Cu, 0x33EBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBA4u;
label_33eba4:
    // 0x33eba4: 0xc0cfad0  jal         func_33EB40
    ctx->pc = 0x33EBA4u;
    SET_GPR_U32(ctx, 31, 0x33EBACu);
    ctx->pc = 0x33EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EBA4u;
    // 0x33eba8: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB40u, 0x33EBA4u, 0x33EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EBACu;
label_33ebac:
    // 0x33ebac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ebb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ebb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x33EBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBB4u;
        // 0x33ebb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBBCu;
}
