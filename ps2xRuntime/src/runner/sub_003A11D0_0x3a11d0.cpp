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

// Function: sub_003A11D0
// Address: 0x3a11d0 - 0x3a1208
void sub_003A11D0_0x3a11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A11D0_0x3a11d0");
#endif

    ctx->pc = 0x3a11d0u;

    // 0x3a11d0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11d4: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x3a11d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x3a11d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A11D8u;
    {
        const bool branch_taken_0x3a11d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A11DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11D8u;
        // 0x3a11dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a11d8) {
            ctx->pc = 0x3A1200u;
            goto label_3a1200;
        }
    }
    ctx->pc = 0x3A11E0u;
    // 0x3a11e0: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x3a11e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a11e4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11e8: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a11ec: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11f0: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x3a11f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a11f4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11f8: 0xa46003a4  sh          $zero, 0x3A4($v1)
    ctx->pc = 0x3a11f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 932), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a11fc: 0x0  nop
    ctx->pc = 0x3a11fcu;
    // NOP
label_3a1200:
    // 0x3a1200: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1208u;
}
