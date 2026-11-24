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

// Function: sub_00246C88
// Address: 0x246c88 - 0x246cdc
void sub_00246C88_0x246c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246C88_0x246c88");
#endif

    switch (ctx->pc) {
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca4u: goto label_246ca4;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc8u: goto label_246cc8;
        default: break;
    }

    ctx->pc = 0x246c88u;

    // 0x246c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246c90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246c94: 0xc091a7e  jal         func_2469F8
    ctx->pc = 0x246C94u;
    SET_GPR_U32(ctx, 31, 0x246C9Cu);
    ctx->pc = 0x246C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C94u;
    // 0x246c98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F8u, 0x246C94u, 0x246C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C9Cu;
label_246c9c:
    // 0x246c9c: 0xc044d7e  jal         func_1135F8
    ctx->pc = 0x246C9Cu;
    SET_GPR_U32(ctx, 31, 0x246CA4u);
    ctx->pc = 0x246CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C9Cu;
    // 0x246ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135F8u, 0x246C9Cu, 0x246CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CA4u;
label_246ca4:
    // 0x246ca4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cac: 0x2484cb90  addiu       $a0, $a0, -0x3470
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953872));
    // 0x246cb0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246CB0u;
    {
        const bool branch_taken_0x246cb0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CB0u;
        // 0x246cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cb0) {
            ctx->pc = 0x246CC0u;
            goto label_246cc0;
        }
    }
    ctx->pc = 0x246CB8u;
    // 0x246cb8: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246CB8u;
    SET_GPR_U32(ctx, 31, 0x246CC0u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246CB8u, 0x246CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC0u;
label_246cc0:
    // 0x246cc0: 0xc091a8c  jal         func_246A30
    ctx->pc = 0x246CC0u;
    SET_GPR_U32(ctx, 31, 0x246CC8u);
    ctx->pc = 0x246A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A30u, 0x246CC0u, 0x246CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC8u;
label_246cc8:
    // 0x246cc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x246CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CD4u;
        // 0x246cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246CDCu;
}
