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

// Function: sub_00149B80
// Address: 0x149b80 - 0x149bb0
void sub_00149B80_0x149b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B80_0x149b80");
#endif

    switch (ctx->pc) {
        case 0x149b88u: goto label_149b88;
        default: break;
    }

    ctx->pc = 0x149b80u;

    // 0x149b80: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149B80u;
    {
        const bool branch_taken_0x149b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b80) {
            ctx->pc = 0x149BA8u;
            goto label_149ba8;
        }
    }
    ctx->pc = 0x149B88u;
label_149b88:
    // 0x149b88: 0x78a10000  lq          $at, 0x0($a1)
    ctx->pc = 0x149b88u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149b8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x149b90: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149b94: 0x7c810000  sq          $at, 0x0($a0)
    ctx->pc = 0x149b94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 1));
    // 0x149b98: 0x0  nop
    ctx->pc = 0x149b98u;
    // NOP
    // 0x149b9c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x149B9Cu;
    {
        const bool branch_taken_0x149b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x149BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B9Cu;
        // 0x149ba0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149b9c) {
            ctx->pc = 0x149B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149b88;
        }
    }
    ctx->pc = 0x149BA4u;
    // 0x149ba4: 0x0  nop
    ctx->pc = 0x149ba4u;
    // NOP
label_149ba8:
    // 0x149ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x149BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149BB0u;
}
