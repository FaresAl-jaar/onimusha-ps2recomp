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

// Function: sub_0021C498
// Address: 0x21c498 - 0x21c4c8
void sub_0021C498_0x21c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C498_0x21c498");
#endif

    ctx->pc = 0x21c498u;

    // 0x21c498: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x21c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x21c49c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x21c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x21c4a0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x21c4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21c4a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C4A4u;
    {
        const bool branch_taken_0x21c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4A4u;
        // 0x21c4a8: 0x28640005  slti        $a0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4a4) {
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4ACu;
    // 0x21c4ac: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C4ACu;
    {
        const bool branch_taken_0x21c4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c4ac) {
            ctx->pc = 0x21C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C4ACu;
            // 0x21c4b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4B4u;
    // 0x21c4b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c4b8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C4B8u;
    {
        const bool branch_taken_0x21c4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21c4b8) {
            ctx->pc = 0x21C4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C4B8u;
            // 0x21c4bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4C0u;
label_21c4c0:
    // 0x21c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4C0u;
        // 0x21c4c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C4C8u;
}
