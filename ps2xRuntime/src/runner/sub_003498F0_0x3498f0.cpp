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

// Function: sub_003498F0
// Address: 0x3498f0 - 0x34992c
void sub_003498F0_0x3498f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003498F0_0x3498f0");
#endif

    ctx->pc = 0x3498f0u;

    // 0x3498f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3498f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3498f4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x3498f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3498f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3498F8u;
    {
        const bool branch_taken_0x3498f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3498FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498F8u;
        // 0x3498fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498f8) {
            ctx->pc = 0x349908u;
            goto label_349908;
        }
    }
    ctx->pc = 0x349900u;
    // 0x349900: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x349900u;
    {
        const bool branch_taken_0x349900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349900) {
            ctx->pc = 0x349924u;
            goto label_349924;
        }
    }
    ctx->pc = 0x349908u;
label_349908:
    // 0x349908: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x349908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34990c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34990cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x349910: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x349910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x349914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x349918: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x349918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34991c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34991cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_349924:
    // 0x349924: 0x3e00008  jr          $ra
    ctx->pc = 0x349924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34992Cu;
}
