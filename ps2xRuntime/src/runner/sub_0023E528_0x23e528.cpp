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

// Function: sub_0023E528
// Address: 0x23e528 - 0x23e544
void sub_0023E528_0x23e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E528_0x23e528");
#endif

    ctx->pc = 0x23e528u;

    // 0x23e528: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23e52c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E52Cu;
    {
        const bool branch_taken_0x23e52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e52c) {
            ctx->pc = 0x23E53Cu;
            goto label_23e53c;
        }
    }
    ctx->pc = 0x23E534u;
    // 0x23e534: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x23e534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x23e538: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x23e538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_23e53c:
    // 0x23e53c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E544u;
}
