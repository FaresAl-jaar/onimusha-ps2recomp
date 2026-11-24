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

// Function: sub_0018EB50
// Address: 0x18eb50 - 0x18eb8c
void sub_0018EB50_0x18eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EB50_0x18eb50");
#endif

    switch (ctx->pc) {
        case 0x18eb7cu: goto label_18eb7c;
        default: break;
    }

    ctx->pc = 0x18eb50u;

    // 0x18eb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18eb54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18eb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EB58u;
    {
        const bool branch_taken_0x18eb58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB58u;
        // 0x18eb5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb58) {
            ctx->pc = 0x18EB68u;
            goto label_18eb68;
        }
    }
    ctx->pc = 0x18EB60u;
    // 0x18eb60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EB60u;
    {
        const bool branch_taken_0x18eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB60u;
        // 0x18eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb60) {
            ctx->pc = 0x18EB80u;
            goto label_18eb80;
        }
    }
    ctx->pc = 0x18EB68u;
label_18eb68:
    // 0x18eb68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18eb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb6c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x18eb70: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18eb74: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x18EB74u;
    SET_GPR_U32(ctx, 31, 0x18EB7Cu);
    ctx->pc = 0x18EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB74u;
    // 0x18eb78: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x18EB74u, 0x18EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB7Cu;
label_18eb7c:
    // 0x18eb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18eb80:
    // 0x18eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eb84: 0x3e00008  jr          $ra
    ctx->pc = 0x18EB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB84u;
        // 0x18eb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EB8Cu;
}
