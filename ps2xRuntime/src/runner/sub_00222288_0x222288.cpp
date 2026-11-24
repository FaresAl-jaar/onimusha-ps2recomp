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

// Function: sub_00222288
// Address: 0x222288 - 0x2222bc
void sub_00222288_0x222288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222288_0x222288");
#endif

    ctx->pc = 0x222288u;

    // 0x222288: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x22228c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x22228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x222290: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x222290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x222294: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x222294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x222298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x222298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22229c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2222a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2222a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2222a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2222a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2222a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2222ac: 0xac651f40  sw          $a1, 0x1F40($v1)
    ctx->pc = 0x2222acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8000), GPR_U32(ctx, 5));
    // 0x2222b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2222b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2222B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222B4u;
        // 0x2222b8: 0xac861360  sw          $a2, 0x1360($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4960), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2222B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2222BCu;
}
