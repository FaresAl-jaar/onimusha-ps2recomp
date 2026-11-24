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

// Function: sub_00389CD0
// Address: 0x389cd0 - 0x389d08
void sub_00389CD0_0x389cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389CD0_0x389cd0");
#endif

    ctx->pc = 0x389cd0u;

    // 0x389cd0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x389cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x389cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389cd8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x389CD8u;
    {
        const bool branch_taken_0x389cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x389cd8) {
            ctx->pc = 0x389CF8u;
            goto label_389cf8;
        }
    }
    ctx->pc = 0x389CE0u;
    // 0x389ce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389CE0u;
    {
        const bool branch_taken_0x389ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ce0) {
            ctx->pc = 0x389CF0u;
            goto label_389cf0;
        }
    }
    ctx->pc = 0x389CE8u;
    // 0x389ce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x389CE8u;
    {
        const bool branch_taken_0x389ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389ce8) {
            ctx->pc = 0x389D00u;
            goto label_389d00;
        }
    }
    ctx->pc = 0x389CF0u;
label_389cf0:
    // 0x389cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x389CF0u;
    {
        const bool branch_taken_0x389cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CF0u;
        // 0x389cf4: 0xa3838c3c  sb          $v1, -0x73C4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937660), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cf0) {
            ctx->pc = 0x389D00u;
            goto label_389d00;
        }
    }
    ctx->pc = 0x389CF8u;
label_389cf8:
    // 0x389cf8: 0xa3808c3c  sb          $zero, -0x73C4($gp)
    ctx->pc = 0x389cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937660), (uint8_t)GPR_U32(ctx, 0));
    // 0x389cfc: 0x0  nop
    ctx->pc = 0x389cfcu;
    // NOP
label_389d00:
    // 0x389d00: 0x3e00008  jr          $ra
    ctx->pc = 0x389D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D08u;
}
