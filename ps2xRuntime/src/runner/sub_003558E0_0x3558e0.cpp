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

// Function: sub_003558E0
// Address: 0x3558e0 - 0x355920
void sub_003558E0_0x3558e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003558E0_0x3558e0");
#endif

    ctx->pc = 0x3558e0u;

    // 0x3558e0: 0x8f838bb0  lw          $v1, -0x7450($gp)
    ctx->pc = 0x3558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x3558e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3558E4u;
    {
        const bool branch_taken_0x3558e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558e4) {
            ctx->pc = 0x355900u;
            goto label_355900;
        }
    }
    ctx->pc = 0x3558ECu;
    // 0x3558ec: 0xac8305b4  sw          $v1, 0x5B4($a0)
    ctx->pc = 0x3558ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 3));
    // 0x3558f0: 0x8f838bb0  lw          $v1, -0x7450($gp)
    ctx->pc = 0x3558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x3558f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3558F4u;
    {
        const bool branch_taken_0x3558f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3558F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558F4u;
        // 0x3558f8: 0xac6405b8  sw          $a0, 0x5B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3558f4) {
            ctx->pc = 0x355908u;
            goto label_355908;
        }
    }
    ctx->pc = 0x3558FCu;
    // 0x3558fc: 0x0  nop
    ctx->pc = 0x3558fcu;
    // NOP
label_355900:
    // 0x355900: 0xaf848bac  sw          $a0, -0x7454($gp)
    ctx->pc = 0x355900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937516), GPR_U32(ctx, 4));
    // 0x355904: 0xac8005b4  sw          $zero, 0x5B4($a0)
    ctx->pc = 0x355904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
label_355908:
    // 0x355908: 0xac8005b8  sw          $zero, 0x5B8($a0)
    ctx->pc = 0x355908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 0));
    // 0x35590c: 0x8f838bb4  lw          $v1, -0x744C($gp)
    ctx->pc = 0x35590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x355910: 0xaf848bb0  sw          $a0, -0x7450($gp)
    ctx->pc = 0x355910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U32(ctx, 4));
    // 0x355914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355918: 0x3e00008  jr          $ra
    ctx->pc = 0x355918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355918u;
        // 0x35591c: 0xaf838bb4  sw          $v1, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355920u;
}
