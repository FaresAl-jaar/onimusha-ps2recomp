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

// Function: sub_002CB620
// Address: 0x2cb620 - 0x2cb648
void sub_002CB620_0x2cb620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB620_0x2cb620");
#endif

    ctx->pc = 0x2cb620u;

    // 0x2cb620: 0x8f828a14  lw          $v0, -0x75EC($gp)
    ctx->pc = 0x2cb620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x2cb624: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2cb624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cb628: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB628u;
    {
        const bool branch_taken_0x2cb628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb628) {
            ctx->pc = 0x2CB638u;
            goto label_2cb638;
        }
    }
    ctx->pc = 0x2CB630u;
    // 0x2cb630: 0xaf848a14  sw          $a0, -0x75EC($gp)
    ctx->pc = 0x2cb630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), GPR_U32(ctx, 4));
    // 0x2cb634: 0x0  nop
    ctx->pc = 0x2cb634u;
    // NOP
label_2cb638:
    // 0x2cb638: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x2cb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x2cb63c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cb640: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB640u;
        // 0x2cb644: 0xaf828a20  sw          $v0, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB648u;
}
