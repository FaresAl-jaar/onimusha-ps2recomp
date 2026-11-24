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

// Function: sub_0025B220
// Address: 0x25b220 - 0x25b248
void sub_0025B220_0x25b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B220_0x25b220");
#endif

    ctx->pc = 0x25b220u;

    // 0x25b220: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25b224: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x25b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x25b228: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x25b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x25b22c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x25b22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25b230: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x25b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25b234: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25b234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x25b238: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25b23c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b240: 0x3e00008  jr          $ra
    ctx->pc = 0x25B240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B240u;
        // 0x25b244: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B248u;
}
