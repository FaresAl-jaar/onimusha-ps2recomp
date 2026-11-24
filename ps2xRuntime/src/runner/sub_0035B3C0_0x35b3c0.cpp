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

// Function: sub_0035B3C0
// Address: 0x35b3c0 - 0x35b3f8
void sub_0035B3C0_0x35b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B3C0_0x35b3c0");
#endif

    ctx->pc = 0x35b3c0u;

    // 0x35b3c0: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b3c4: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x35b3c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x35b3c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35B3C8u;
    {
        const bool branch_taken_0x35b3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3C8u;
        // 0x35b3cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3c8) {
            ctx->pc = 0x35B3F0u;
            goto label_35b3f0;
        }
    }
    ctx->pc = 0x35B3D0u;
    // 0x35b3d0: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x35b3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b3d4: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b3d8: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x35b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x35b3dc: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b3e0: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x35b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b3e4: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b3e8: 0xa46003a4  sh          $zero, 0x3A4($v1)
    ctx->pc = 0x35b3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 932), (uint16_t)GPR_U32(ctx, 0));
    // 0x35b3ec: 0x0  nop
    ctx->pc = 0x35b3ecu;
    // NOP
label_35b3f0:
    // 0x35b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B3F8u;
}
