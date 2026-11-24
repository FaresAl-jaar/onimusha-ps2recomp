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

// Function: sub_00244FB0
// Address: 0x244fb0 - 0x244fd8
void sub_00244FB0_0x244fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244FB0_0x244fb0");
#endif

    ctx->pc = 0x244fb0u;

    // 0x244fb0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244FB0u;
    {
        const bool branch_taken_0x244fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FB0u;
        // 0x244fb4: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fb0) {
            ctx->pc = 0x244FC8u;
            goto label_244fc8;
        }
    }
    ctx->pc = 0x244FB8u;
    // 0x244fb8: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x244fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x244fbc: 0xac40e974  sw          $zero, -0x168C($v0)
    ctx->pc = 0x244fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961524), GPR_U32(ctx, 0));
    // 0x244fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x244FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FC0u;
        // 0x244fc4: 0xac60e978  sw          $zero, -0x1688($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244FC8u;
label_244fc8:
    // 0x244fc8: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x244fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x244fcc: 0xac44e974  sw          $a0, -0x168C($v0)
    ctx->pc = 0x244fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961524), GPR_U32(ctx, 4));
    // 0x244fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x244FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FD0u;
        // 0x244fd4: 0xac65e978  sw          $a1, -0x1688($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244FD8u;
}
