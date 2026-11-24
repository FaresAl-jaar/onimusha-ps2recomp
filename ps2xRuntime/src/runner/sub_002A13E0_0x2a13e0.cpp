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

// Function: sub_002A13E0
// Address: 0x2a13e0 - 0x2a1420
void sub_002A13E0_0x2a13e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A13E0_0x2a13e0");
#endif

    switch (ctx->pc) {
        case 0x2a13f0u: goto label_2a13f0;
        default: break;
    }

    ctx->pc = 0x2a13e0u;

    // 0x2a13e0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a13e4: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x2a13e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a13e8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2a13e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a13ec: 0x0  nop
    ctx->pc = 0x2a13ecu;
    // NOP
label_2a13f0:
    // 0x2a13f0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2a13f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a13f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a13f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a13fc: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x2a13fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1400: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2a1400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2a1404: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a1408: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a140c: 0xa5230002  sh          $v1, 0x2($t1)
    ctx->pc = 0x2a140cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1410: 0x1c80fff7  bgtz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A1410u;
    {
        const bool branch_taken_0x2a1410 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2A1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1410u;
        // 0x2a1414: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1410) {
            ctx->pc = 0x2A13F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a13f0;
        }
    }
    ctx->pc = 0x2A1418u;
    // 0x2a1418: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1420u;
}
