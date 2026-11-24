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

// Function: sub_00392190
// Address: 0x392190 - 0x3921b8
void sub_00392190_0x392190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392190_0x392190");
#endif

    ctx->pc = 0x392190u;

    // 0x392190: 0x8485026e  lh          $a1, 0x26E($a0)
    ctx->pc = 0x392190u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 622)));
    // 0x392194: 0x8482026c  lh          $v0, 0x26C($a0)
    ctx->pc = 0x392194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x392198: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x392198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x39219c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x39219cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3921a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3921a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3921a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3921a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3921a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3921a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3921ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3921acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3921b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3921B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3921B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921B0u;
        // 0x3921b4: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3921B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3921B8u;
}
