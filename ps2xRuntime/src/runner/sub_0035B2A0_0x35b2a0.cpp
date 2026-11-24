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

// Function: sub_0035B2A0
// Address: 0x35b2a0 - 0x35b2d0
void sub_0035B2A0_0x35b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B2A0_0x35b2a0");
#endif

    ctx->pc = 0x35b2a0u;

    // 0x35b2a0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b2a4: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x35b2a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x35b2a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B2A8u;
    {
        const bool branch_taken_0x35b2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2A8u;
        // 0x35b2ac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2a8) {
            ctx->pc = 0x35B2C8u;
            goto label_35b2c8;
        }
    }
    ctx->pc = 0x35B2B0u;
    // 0x35b2b0: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x35b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b2b4: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b2b8: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x35b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x35b2bc: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b2c0: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x35b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b2c4: 0x0  nop
    ctx->pc = 0x35b2c4u;
    // NOP
label_35b2c8:
    // 0x35b2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B2D0u;
}
