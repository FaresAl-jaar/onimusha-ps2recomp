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

// Function: sub_0022C2A0
// Address: 0x22c2a0 - 0x22c2cc
void sub_0022C2A0_0x22c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C2A0_0x22c2a0");
#endif

    switch (ctx->pc) {
        case 0x22c2a8u: goto label_22c2a8;
        default: break;
    }

    ctx->pc = 0x22c2a0u;

    // 0x22c2a0: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C2A0u;
    {
        const bool branch_taken_0x22c2a0 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x22c2a0) {
            ctx->pc = 0x22C2C4u;
            goto label_22c2c4;
        }
    }
    ctx->pc = 0x22C2A8u;
label_22c2a8:
    // 0x22c2a8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x22c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c2ac: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x22c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x22c2b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22c2b4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x22c2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c2b8: 0x0  nop
    ctx->pc = 0x22c2b8u;
    // NOP
    // 0x22c2bc: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C2BCu;
    {
        const bool branch_taken_0x22c2bc = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x22C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2BCu;
        // 0x22c2c0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2bc) {
            ctx->pc = 0x22C2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c2a8;
        }
    }
    ctx->pc = 0x22C2C4u;
label_22c2c4:
    // 0x22c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C2CCu;
}
