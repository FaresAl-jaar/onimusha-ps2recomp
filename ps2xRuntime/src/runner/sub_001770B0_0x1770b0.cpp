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

// Function: sub_001770B0
// Address: 0x1770b0 - 0x1770e4
void sub_001770B0_0x1770b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001770B0_0x1770b0");
#endif

    ctx->pc = 0x1770b0u;

    // 0x1770b0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1770B0u;
    {
        const bool branch_taken_0x1770b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1770B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770B0u;
        // 0x1770b4: 0x240300e0  addiu       $v1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770b0) {
            ctx->pc = 0x1770C0u;
            goto label_1770c0;
        }
    }
    ctx->pc = 0x1770B8u;
    // 0x1770b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1770B8u;
    {
        const bool branch_taken_0x1770b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1770BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770B8u;
        // 0x1770bc: 0xaf838068  sw          $v1, -0x7F98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770b8) {
            ctx->pc = 0x1770C8u;
            goto label_1770c8;
        }
    }
    ctx->pc = 0x1770C0u;
label_1770c0:
    // 0x1770c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1770c4: 0xaf838068  sw          $v1, -0x7F98($gp)
    ctx->pc = 0x1770c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934632), GPR_U32(ctx, 3));
label_1770c8:
    // 0x1770c8: 0x24030790  addiu       $v1, $zero, 0x790
    ctx->pc = 0x1770c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x1770cc: 0xaf83806c  sw          $v1, -0x7F94($gp)
    ctx->pc = 0x1770ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934636), GPR_U32(ctx, 3));
    // 0x1770d0: 0x24030f20  addiu       $v1, $zero, 0xF20
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3872));
    // 0x1770d4: 0xaf838070  sw          $v1, -0x7F90($gp)
    ctx->pc = 0x1770d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934640), GPR_U32(ctx, 3));
    // 0x1770d8: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1770d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1770dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1770DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770DCu;
        // 0x1770e0: 0xaf838074  sw          $v1, -0x7F8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1770DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1770E4u;
}
