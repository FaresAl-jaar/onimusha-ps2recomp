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

// Function: sub_002FE8B0
// Address: 0x2fe8b0 - 0x2fe8d4
void sub_002FE8B0_0x2fe8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE8B0_0x2fe8b0");
#endif

    ctx->pc = 0x2fe8b0u;

    // 0x2fe8b0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2fe8b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe8b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fe8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fe8b8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2fe8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fe8bc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2fe8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2fe8c0: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2fe8c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2fe8c4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2fe8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2fe8c8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2fe8c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2fe8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE8CCu;
        // 0x2fe8d0: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE8D4u;
}
