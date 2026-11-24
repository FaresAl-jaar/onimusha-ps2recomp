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

// Function: sub_002CB600
// Address: 0x2cb600 - 0x2cb620
void sub_002CB600_0x2cb600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB600_0x2cb600");
#endif

    ctx->pc = 0x2cb600u;

    // 0x2cb600: 0xaf848a18  sw          $a0, -0x75E8($gp)
    ctx->pc = 0x2cb600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 4));
    // 0x2cb604: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb608: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2cb60c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2cb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2cb610: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2cb610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cb614: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb618: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB618u;
        // 0x2cb61c: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB620u;
}
