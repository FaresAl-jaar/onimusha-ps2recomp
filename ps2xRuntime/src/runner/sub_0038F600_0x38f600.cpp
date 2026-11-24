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

// Function: sub_0038F600
// Address: 0x38f600 - 0x38f62c
void sub_0038F600_0x38f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F600_0x38f600");
#endif

    switch (ctx->pc) {
        case 0x38f610u: goto label_38f610;
        default: break;
    }

    ctx->pc = 0x38f600u;

    // 0x38f600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f608: 0xc0c0890  jal         func_302240
    ctx->pc = 0x38F608u;
    SET_GPR_U32(ctx, 31, 0x38F610u);
    ctx->pc = 0x38F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F608u;
    // 0x38f60c: 0x8c842b48  lw          $a0, 0x2B48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x38F608u, 0x38F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F610u;
label_38f610:
    // 0x38f610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F610u;
    {
        const bool branch_taken_0x38f610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F610u;
        // 0x38f614: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f610) {
            ctx->pc = 0x38F620u;
            goto label_38f620;
        }
    }
    ctx->pc = 0x38F618u;
    // 0x38f618: 0xa043053a  sb          $v1, 0x53A($v0)
    ctx->pc = 0x38f618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1338), (uint8_t)GPR_U32(ctx, 3));
    // 0x38f61c: 0x0  nop
    ctx->pc = 0x38f61cu;
    // NOP
label_38f620:
    // 0x38f620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f624: 0x3e00008  jr          $ra
    ctx->pc = 0x38F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F624u;
        // 0x38f628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F62Cu;
}
