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

// Function: sub_0020ED68
// Address: 0x20ed68 - 0x20eda4
void sub_0020ED68_0x20ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED68_0x20ed68");
#endif

    switch (ctx->pc) {
        case 0x20ed78u: goto label_20ed78;
        default: break;
    }

    ctx->pc = 0x20ed68u;

    // 0x20ed68: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x20ed68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed6c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x20ed6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ed70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed74: 0x0  nop
    ctx->pc = 0x20ed74u;
    // NOP
label_20ed78:
    // 0x20ed78: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x20ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20ed7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20ed7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20ed80: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x20ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20ed84: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x20ed88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ed8c: 0x28e50008  slti        $a1, $a3, 0x8
    ctx->pc = 0x20ed8cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20ed90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x20ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x20ed94: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20ED94u;
    {
        const bool branch_taken_0x20ed94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED94u;
        // 0x20ed98: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed94) {
            ctx->pc = 0x20ED78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ed78;
        }
    }
    ctx->pc = 0x20ED9Cu;
    // 0x20ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x20ED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EDA4u;
}
