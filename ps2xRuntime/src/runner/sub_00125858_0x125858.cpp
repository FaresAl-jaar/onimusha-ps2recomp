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

// Function: sub_00125858
// Address: 0x125858 - 0x125884
void sub_00125858_0x125858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125858_0x125858");
#endif

    ctx->pc = 0x125858u;

    // 0x125858: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x125858u;
    {
        const bool branch_taken_0x125858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x125858) {
            ctx->pc = 0x12587Cu;
            goto label_12587c;
        }
    }
    ctx->pc = 0x125860u;
    // 0x125860: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x125860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125864: 0x8c8d004c  lw          $t5, 0x4C($a0)
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x125868: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x125868u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12586c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x125870: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x125874: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x125874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x125878: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x125878u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
label_12587c:
    // 0x12587c: 0x3e00008  jr          $ra
    ctx->pc = 0x12587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125884u;
}
