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

// Function: sub_003B8DD0
// Address: 0x3b8dd0 - 0x3b8e0c
void sub_003B8DD0_0x3b8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8DD0_0x3b8dd0");
#endif

    switch (ctx->pc) {
        case 0x3b8df8u: goto label_3b8df8;
        default: break;
    }

    ctx->pc = 0x3b8dd0u;

    // 0x3b8dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b8dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b8dd8: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x3b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x3b8ddc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x3b8ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3b8de0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8DE0u;
    {
        const bool branch_taken_0x3b8de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DE0u;
        // 0x3b8de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8de0) {
            ctx->pc = 0x3B8DF0u;
            goto label_3b8df0;
        }
    }
    ctx->pc = 0x3B8DE8u;
    // 0x3b8de8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8DE8u;
    {
        const bool branch_taken_0x3b8de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8de8) {
            ctx->pc = 0x3B8E00u;
            goto label_3b8e00;
        }
    }
    ctx->pc = 0x3B8DF0u;
label_3b8df0:
    // 0x3b8df0: 0xc0f1ec0  jal         func_3C7B00
    ctx->pc = 0x3B8DF0u;
    SET_GPR_U32(ctx, 31, 0x3B8DF8u);
    ctx->pc = 0x3C7B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7B00u, 0x3B8DF0u, 0x3B8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8DF8u;
label_3b8df8:
    // 0x3b8df8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b8df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b8dfc: 0x0  nop
    ctx->pc = 0x3b8dfcu;
    // NOP
label_3b8e00:
    // 0x3b8e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b8e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8e04: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E04u;
        // 0x3b8e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8E0Cu;
}
