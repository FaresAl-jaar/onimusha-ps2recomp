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

// Function: sub_00133710
// Address: 0x133710 - 0x133740
void sub_00133710_0x133710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133710_0x133710");
#endif

    switch (ctx->pc) {
        case 0x133718u: goto label_133718;
        default: break;
    }

    ctx->pc = 0x133710u;

    // 0x133710: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133710u;
    {
        const bool branch_taken_0x133710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133710) {
            ctx->pc = 0x133738u;
            goto label_133738;
        }
    }
    ctx->pc = 0x133718u;
label_133718:
    // 0x133718: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x133718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x13371c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133720: 0x0  nop
    ctx->pc = 0x133720u;
    // NOP
    // 0x133724: 0x0  nop
    ctx->pc = 0x133724u;
    // NOP
    // 0x133728: 0x0  nop
    ctx->pc = 0x133728u;
    // NOP
    // 0x13372c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13372Cu;
    {
        const bool branch_taken_0x13372c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13372c) {
            ctx->pc = 0x133718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133718;
        }
    }
    ctx->pc = 0x133734u;
    // 0x133734: 0x0  nop
    ctx->pc = 0x133734u;
    // NOP
label_133738:
    // 0x133738: 0x3e00008  jr          $ra
    ctx->pc = 0x133738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133740u;
}
