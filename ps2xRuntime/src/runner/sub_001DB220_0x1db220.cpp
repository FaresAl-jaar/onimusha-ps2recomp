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

// Function: sub_001DB220
// Address: 0x1db220 - 0x1db268
void sub_001DB220_0x1db220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB220_0x1db220");
#endif

    ctx->pc = 0x1db220u;

    // 0x1db220: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1db220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1db224: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1db224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1db228: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1db228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1db22c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1db22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1db230: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1db230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1db234: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1db234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db238: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1db238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1db23c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1db23cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1db240: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1db240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1db244: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1db244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db248: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x1db248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1db24c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1db24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db250: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1db250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1db254: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1db254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1db258: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1db258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1db25c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1db25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db260: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB260u;
        // 0x1db264: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB268u;
}
