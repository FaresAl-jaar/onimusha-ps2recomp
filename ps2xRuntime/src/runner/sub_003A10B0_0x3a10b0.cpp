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

// Function: sub_003A10B0
// Address: 0x3a10b0 - 0x3a10e0
void sub_003A10B0_0x3a10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A10B0_0x3a10b0");
#endif

    ctx->pc = 0x3a10b0u;

    // 0x3a10b0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a10b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a10b4: 0x808303a2  lb          $v1, 0x3A2($a0)
    ctx->pc = 0x3a10b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 930)));
    // 0x3a10b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A10B8u;
    {
        const bool branch_taken_0x3a10b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10B8u;
        // 0x3a10bc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a10b8) {
            ctx->pc = 0x3A10D8u;
            goto label_3a10d8;
        }
    }
    ctx->pc = 0x3A10C0u;
    // 0x3a10c0: 0xa0830390  sb          $v1, 0x390($a0)
    ctx->pc = 0x3a10c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a10c4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a10c8: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a10cc: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a10d0: 0xa0600391  sb          $zero, 0x391($v1)
    ctx->pc = 0x3a10d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a10d4: 0x0  nop
    ctx->pc = 0x3a10d4u;
    // NOP
label_3a10d8:
    // 0x3a10d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A10D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A10E0u;
}
