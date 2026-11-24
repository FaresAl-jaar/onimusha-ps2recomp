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

// Function: sub_0024E028
// Address: 0x24e028 - 0x24e084
void sub_0024E028_0x24e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E028_0x24e028");
#endif

    switch (ctx->pc) {
        case 0x24e030u: goto label_24e030;
        case 0x24e060u: goto label_24e060;
        default: break;
    }

    ctx->pc = 0x24e028u;

    // 0x24e028: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E028u;
    {
        const bool branch_taken_0x24e028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e028) {
            ctx->pc = 0x24E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E028u;
            // 0x24e02c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E050u;
            goto label_24e050;
        }
    }
    ctx->pc = 0x24E030u;
label_24e030:
    // 0x24e030: 0x0  nop
    ctx->pc = 0x24e030u;
    // NOP
    // 0x24e034: 0x0  nop
    ctx->pc = 0x24e034u;
    // NOP
    // 0x24e038: 0x0  nop
    ctx->pc = 0x24e038u;
    // NOP
    // 0x24e03c: 0x0  nop
    ctx->pc = 0x24e03cu;
    // NOP
    // 0x24e040: 0x0  nop
    ctx->pc = 0x24e040u;
    // NOP
    // 0x24e044: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E044u;
    {
        const bool branch_taken_0x24e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e044) {
            ctx->pc = 0x24E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e030;
        }
    }
    ctx->pc = 0x24E04Cu;
    // 0x24e04c: 0x0  nop
    ctx->pc = 0x24e04cu;
    // NOP
label_24e050:
    // 0x24e050: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x24E050u;
    {
        const bool branch_taken_0x24e050 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x24e050) {
            ctx->pc = 0x24E07Cu;
            goto label_24e07c;
        }
    }
    ctx->pc = 0x24E058u;
    // 0x24e058: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x24e058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24e05c: 0x0  nop
    ctx->pc = 0x24e05cu;
    // NOP
label_24e060:
    // 0x24e060: 0x0  nop
    ctx->pc = 0x24e060u;
    // NOP
    // 0x24e064: 0x0  nop
    ctx->pc = 0x24e064u;
    // NOP
    // 0x24e068: 0x0  nop
    ctx->pc = 0x24e068u;
    // NOP
    // 0x24e06c: 0x0  nop
    ctx->pc = 0x24e06cu;
    // NOP
    // 0x24e070: 0x0  nop
    ctx->pc = 0x24e070u;
    // NOP
    // 0x24e074: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24E074u;
    {
        const bool branch_taken_0x24e074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e074) {
            ctx->pc = 0x24E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E074u;
            // 0x24e078: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e060;
        }
    }
    ctx->pc = 0x24E07Cu;
label_24e07c:
    // 0x24e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E084u;
}
