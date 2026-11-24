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

// Function: sub_002120F0
// Address: 0x2120f0 - 0x212128
void sub_002120F0_0x2120f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002120F0_0x2120f0");
#endif

    ctx->pc = 0x2120f0u;

    // 0x2120f0: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x2120f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x2120f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2120f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2120f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2120F8u;
    {
        const bool branch_taken_0x2120f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2120FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2120F8u;
        // 0x2120fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2120f8) {
            ctx->pc = 0x212120u;
            goto label_212120;
        }
    }
    ctx->pc = 0x212100u;
    // 0x212100: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x212100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x212104: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x212104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x212108: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x212108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21210c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x212110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x212114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21211c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_212120:
    // 0x212120: 0x3e00008  jr          $ra
    ctx->pc = 0x212120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212128u;
}
