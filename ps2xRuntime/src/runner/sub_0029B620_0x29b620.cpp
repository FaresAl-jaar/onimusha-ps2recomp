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

// Function: sub_0029B620
// Address: 0x29b620 - 0x29b678
void sub_0029B620_0x29b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B620_0x29b620");
#endif

    ctx->pc = 0x29b620u;

    // 0x29b620: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x29b620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x29b624: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x29b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x29b628: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29b628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x29b62c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29b630: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29b634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29b634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29b638: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B638u;
    {
        const bool branch_taken_0x29b638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b638) {
            ctx->pc = 0x29B650u;
            goto label_29b650;
        }
    }
    ctx->pc = 0x29B640u;
    // 0x29b640: 0xac850150  sw          $a1, 0x150($a0)
    ctx->pc = 0x29b640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 5));
    // 0x29b644: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x29b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x29b648: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29B648u;
    {
        const bool branch_taken_0x29b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B648u;
        // 0x29b64c: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b648) {
            ctx->pc = 0x29B670u;
            goto label_29b670;
        }
    }
    ctx->pc = 0x29B650u;
label_29b650:
    // 0x29b650: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x29b654: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29b654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x29b658: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x29b658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x29b65c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x29b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x29b660: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x29b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x29b664: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x29b664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29b668: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x29b668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x29b66c: 0x0  nop
    ctx->pc = 0x29b66cu;
    // NOP
label_29b670:
    // 0x29b670: 0x3e00008  jr          $ra
    ctx->pc = 0x29B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B678u;
}
