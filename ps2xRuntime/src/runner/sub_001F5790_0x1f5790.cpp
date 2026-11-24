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

// Function: sub_001F5790
// Address: 0x1f5790 - 0x1f57b8
void sub_001F5790_0x1f5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5790_0x1f5790");
#endif

    ctx->pc = 0x1f5790u;

    // 0x1f5790: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5790u;
    {
        const bool branch_taken_0x1f5790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5790u;
        // 0x1f5794: 0x2484014c  addiu       $a0, $a0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5790) {
            ctx->pc = 0x1F57A0u;
            goto label_1f57a0;
        }
    }
    ctx->pc = 0x1F5798u;
    // 0x1f5798: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f5798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f579c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f579cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1f57a0:
    // 0x1f57a0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F57A0u;
    {
        const bool branch_taken_0x1f57a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57a0) {
            ctx->pc = 0x1F57B0u;
            goto label_1f57b0;
        }
    }
    ctx->pc = 0x1F57A8u;
    // 0x1f57a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f57ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f57acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f57b0:
    // 0x1f57b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F57B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F57B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F57B8u;
}
