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

// Function: sub_0023B838
// Address: 0x23b838 - 0x23b868
void sub_0023B838_0x23b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B838_0x23b838");
#endif

    switch (ctx->pc) {
        case 0x23b850u: goto label_23b850;
        default: break;
    }

    ctx->pc = 0x23b838u;

    // 0x23b838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b83c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B83Cu;
    {
        const bool branch_taken_0x23b83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B83Cu;
        // 0x23b840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b83c) {
            ctx->pc = 0x23B858u;
            goto label_23b858;
        }
    }
    ctx->pc = 0x23B844u;
    // 0x23b844: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23b848: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23B848u;
    SET_GPR_U32(ctx, 31, 0x23B850u);
    ctx->pc = 0x23B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B848u;
    // 0x23b84c: 0x2484b5b0  addiu       $a0, $a0, -0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B848u, 0x23B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B850u;
label_23b850:
    // 0x23b850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23B850u;
    {
        const bool branch_taken_0x23b850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B850u;
        // 0x23b854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b850) {
            ctx->pc = 0x23B85Cu;
            goto label_23b85c;
        }
    }
    ctx->pc = 0x23B858u;
label_23b858:
    // 0x23b858: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x23b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23b85c:
    // 0x23b85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b860: 0x3e00008  jr          $ra
    ctx->pc = 0x23B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B860u;
        // 0x23b864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B868u;
}
