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

// Function: sub_0023BDC0
// Address: 0x23bdc0 - 0x23bdf8
void sub_0023BDC0_0x23bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BDC0_0x23bdc0");
#endif

    switch (ctx->pc) {
        case 0x23bdd4u: goto label_23bdd4;
        case 0x23bddcu: goto label_23bddc;
        case 0x23bde4u: goto label_23bde4;
        default: break;
    }

    ctx->pc = 0x23bdc0u;

    // 0x23bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bdc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bdcc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BDCCu;
    SET_GPR_U32(ctx, 31, 0x23BDD4u);
    ctx->pc = 0x23BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDCCu;
    // 0x23bdd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BDCCu, 0x23BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDD4u;
label_23bdd4:
    // 0x23bdd4: 0xc08ef7e  jal         func_23BDF8
    ctx->pc = 0x23BDD4u;
    SET_GPR_U32(ctx, 31, 0x23BDDCu);
    ctx->pc = 0x23BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDD4u;
    // 0x23bdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BDF8u, 0x23BDD4u, 0x23BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDDCu;
label_23bddc:
    // 0x23bddc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BDDCu;
    SET_GPR_U32(ctx, 31, 0x23BDE4u);
    ctx->pc = 0x23BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BDDCu;
    // 0x23bde0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BDDCu, 0x23BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDE4u;
label_23bde4:
    // 0x23bde4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bde8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bdec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bdecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDF0u;
        // 0x23bdf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BDF8u;
}
