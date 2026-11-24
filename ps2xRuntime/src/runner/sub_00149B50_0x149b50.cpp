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

// Function: sub_00149B50
// Address: 0x149b50 - 0x149b80
void sub_00149B50_0x149b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B50_0x149b50");
#endif

    switch (ctx->pc) {
        case 0x149b58u: goto label_149b58;
        default: break;
    }

    ctx->pc = 0x149b50u;

    // 0x149b50: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149B50u;
    {
        const bool branch_taken_0x149b50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b50) {
            ctx->pc = 0x149B78u;
            goto label_149b78;
        }
    }
    ctx->pc = 0x149B58u;
label_149b58:
    // 0x149b58: 0x8ca10000  lw          $at, 0x0($a1)
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149b5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x149b60: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x149b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x149b64: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x149b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x149b68: 0x0  nop
    ctx->pc = 0x149b68u;
    // NOP
    // 0x149b6c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x149B6Cu;
    {
        const bool branch_taken_0x149b6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x149B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B6Cu;
        // 0x149b70: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b6c) {
            ctx->pc = 0x149B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149b58;
        }
    }
    ctx->pc = 0x149B74u;
    // 0x149b74: 0x0  nop
    ctx->pc = 0x149b74u;
    // NOP
label_149b78:
    // 0x149b78: 0x3e00008  jr          $ra
    ctx->pc = 0x149B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B80u;
}
