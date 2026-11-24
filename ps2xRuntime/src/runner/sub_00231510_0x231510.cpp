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

// Function: sub_00231510
// Address: 0x231510 - 0x231540
void sub_00231510_0x231510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231510_0x231510");
#endif

    switch (ctx->pc) {
        case 0x231528u: goto label_231528;
        default: break;
    }

    ctx->pc = 0x231510u;

    // 0x231510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231514: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231514u;
    {
        const bool branch_taken_0x231514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231514u;
        // 0x231518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231514) {
            ctx->pc = 0x231530u;
            goto label_231530;
        }
    }
    ctx->pc = 0x23151Cu;
    // 0x23151c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231520: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231520u;
    SET_GPR_U32(ctx, 31, 0x231528u);
    ctx->pc = 0x231524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231520u;
    // 0x231524: 0x2484a938  addiu       $a0, $a0, -0x56C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231520u, 0x231528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231528u;
label_231528:
    // 0x231528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231528u;
    {
        const bool branch_taken_0x231528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231528u;
        // 0x23152c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231528) {
            ctx->pc = 0x231534u;
            goto label_231534;
        }
    }
    ctx->pc = 0x231530u;
label_231530:
    // 0x231530: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x231530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_231534:
    // 0x231534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231538: 0x3e00008  jr          $ra
    ctx->pc = 0x231538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231538u;
        // 0x23153c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231540u;
}
