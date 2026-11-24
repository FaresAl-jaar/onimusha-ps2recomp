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

// Function: sub_0038BDD0
// Address: 0x38bdd0 - 0x38be10
void sub_0038BDD0_0x38bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BDD0_0x38bdd0");
#endif

    switch (ctx->pc) {
        case 0x38bdf4u: goto label_38bdf4;
        case 0x38be00u: goto label_38be00;
        default: break;
    }

    ctx->pc = 0x38bdd0u;

    // 0x38bdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38bdd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38bdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bdd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38bddc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38bde0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38bde4: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x38bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x38bde8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38bde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bdec: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38BDECu;
    SET_GPR_U32(ctx, 31, 0x38BDF4u);
    ctx->pc = 0x38BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BDECu;
    // 0x38bdf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38BDECu, 0x38BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BDF4u;
label_38bdf4:
    // 0x38bdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bdf8: 0xc0e2f84  jal         func_38BE10
    ctx->pc = 0x38BDF8u;
    SET_GPR_U32(ctx, 31, 0x38BE00u);
    ctx->pc = 0x38BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BDF8u;
    // 0x38bdfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BE10u, 0x38BDF8u, 0x38BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE00u;
label_38be00:
    // 0x38be00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38be04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38be04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38be08: 0x3e00008  jr          $ra
    ctx->pc = 0x38BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE08u;
        // 0x38be0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BE10u;
}
