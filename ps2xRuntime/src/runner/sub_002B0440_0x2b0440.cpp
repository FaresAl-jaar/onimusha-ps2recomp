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

// Function: sub_002B0440
// Address: 0x2b0440 - 0x2b046c
void sub_002B0440_0x2b0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0440_0x2b0440");
#endif

    switch (ctx->pc) {
        case 0x2b045cu: goto label_2b045c;
        default: break;
    }

    ctx->pc = 0x2b0440u;

    // 0x2b0440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b0444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0448: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b044c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B044Cu;
    {
        const bool branch_taken_0x2b044c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b044c) {
            ctx->pc = 0x2B0460u;
            goto label_2b0460;
        }
    }
    ctx->pc = 0x2B0454u;
    // 0x2b0454: 0xc081308  jal         func_204C20
    ctx->pc = 0x2B0454u;
    SET_GPR_U32(ctx, 31, 0x2B045Cu);
    ctx->pc = 0x2B0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0454u;
    // 0x2b0458: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204C20u, 0x2B0454u, 0x2B045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B045Cu;
label_2b045c:
    // 0x2b045c: 0x0  nop
    ctx->pc = 0x2b045cu;
    // NOP
label_2b0460:
    // 0x2b0460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0464: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0464u;
        // 0x2b0468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B046Cu;
}
