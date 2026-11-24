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

// Function: sub_0037C2E0
// Address: 0x37c2e0 - 0x37c32c
void sub_0037C2E0_0x37c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C2E0_0x37c2e0");
#endif

    switch (ctx->pc) {
        case 0x37c320u: goto label_37c320;
        default: break;
    }

    ctx->pc = 0x37c2e0u;

    // 0x37c2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c2e4: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x37c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x37c2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c2ec: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x37c2ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x37c2f0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37C2F0u;
    {
        const bool branch_taken_0x37c2f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2F0u;
        // 0x37c2f4: 0x24030095  addiu       $v1, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c2f0) {
            ctx->pc = 0x37C318u;
            goto label_37c318;
        }
    }
    ctx->pc = 0x37C2F8u;
    // 0x37c2f8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C2F8u;
    {
        const bool branch_taken_0x37c2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c2f8) {
            ctx->pc = 0x37C318u;
            goto label_37c318;
        }
    }
    ctx->pc = 0x37C300u;
    // 0x37c300: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x37c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x37c304: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C304u;
    {
        const bool branch_taken_0x37c304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c304) {
            ctx->pc = 0x37C318u;
            goto label_37c318;
        }
    }
    ctx->pc = 0x37C30Cu;
    // 0x37c30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37C30Cu;
    {
        const bool branch_taken_0x37c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c30c) {
            ctx->pc = 0x37C320u;
            goto label_37c320;
        }
    }
    ctx->pc = 0x37C314u;
    // 0x37c314: 0x0  nop
    ctx->pc = 0x37c314u;
    // NOP
label_37c318:
    // 0x37c318: 0xc0df0cc  jal         func_37C330
    ctx->pc = 0x37C318u;
    SET_GPR_U32(ctx, 31, 0x37C320u);
    ctx->pc = 0x37C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C330u, 0x37C318u, 0x37C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C320u;
label_37c320:
    // 0x37c320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c324: 0x3e00008  jr          $ra
    ctx->pc = 0x37C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C324u;
        // 0x37c328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C32Cu;
}
