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

// Function: sub_003A12E0
// Address: 0x3a12e0 - 0x3a1318
void sub_003A12E0_0x3a12e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A12E0_0x3a12e0");
#endif

    ctx->pc = 0x3a12e0u;

    // 0x3a12e0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a12e4: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x3a12e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x3a12e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A12E8u;
    {
        const bool branch_taken_0x3a12e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12E8u;
        // 0x3a12ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12e8) {
            ctx->pc = 0x3A1310u;
            goto label_3a1310;
        }
    }
    ctx->pc = 0x3A12F0u;
    // 0x3a12f0: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x3a12f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a12f4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a12f8: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a12fc: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1300: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x3a1300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1304: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1308: 0xa46003a4  sh          $zero, 0x3A4($v1)
    ctx->pc = 0x3a1308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 932), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a130c: 0x0  nop
    ctx->pc = 0x3a130cu;
    // NOP
label_3a1310:
    // 0x3a1310: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1318u;
}
