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

// Function: sub_003ED830
// Address: 0x3ed830 - 0x3ed870
void sub_003ED830_0x3ed830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED830_0x3ed830");
#endif

    ctx->pc = 0x3ed830u;

    // 0x3ed830: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x3ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
    // 0x3ed834: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED834u;
    {
        const bool branch_taken_0x3ed834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed834) {
            ctx->pc = 0x3ED850u;
            goto label_3ed850;
        }
    }
    ctx->pc = 0x3ED83Cu;
    // 0x3ed83c: 0xac832b20  sw          $v1, 0x2B20($a0)
    ctx->pc = 0x3ed83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11040), GPR_U32(ctx, 3));
    // 0x3ed840: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x3ed840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
    // 0x3ed844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED844u;
    {
        const bool branch_taken_0x3ed844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED844u;
        // 0x3ed848: 0xac642b24  sw          $a0, 0x2B24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed844) {
            ctx->pc = 0x3ED858u;
            goto label_3ed858;
        }
    }
    ctx->pc = 0x3ED84Cu;
    // 0x3ed84c: 0x0  nop
    ctx->pc = 0x3ed84cu;
    // NOP
label_3ed850:
    // 0x3ed850: 0xaf848d14  sw          $a0, -0x72EC($gp)
    ctx->pc = 0x3ed850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 4));
    // 0x3ed854: 0xac802b20  sw          $zero, 0x2B20($a0)
    ctx->pc = 0x3ed854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11040), GPR_U32(ctx, 0));
label_3ed858:
    // 0x3ed858: 0xac802b24  sw          $zero, 0x2B24($a0)
    ctx->pc = 0x3ed858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11044), GPR_U32(ctx, 0));
    // 0x3ed85c: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x3ed85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x3ed860: 0xaf848d18  sw          $a0, -0x72E8($gp)
    ctx->pc = 0x3ed860u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 4));
    // 0x3ed864: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ed864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ed868: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED868u;
        // 0x3ed86c: 0xaf838d1c  sw          $v1, -0x72E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED870u;
}
