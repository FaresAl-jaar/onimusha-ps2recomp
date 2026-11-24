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

// Function: sub_0023EDE0
// Address: 0x23ede0 - 0x23ee10
void sub_0023EDE0_0x23ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EDE0_0x23ede0");
#endif

    ctx->pc = 0x23ede0u;

    // 0x23ede0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x23ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23ede4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x23ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23ede8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23edec: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23edf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23edf4: 0x8c4293b0  lw          $v0, -0x6C50($v0)
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939568)));
    // 0x23edf8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x23edfc: 0x3c01004d  lui         $at, 0x4D
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)77 << 16));
    // 0x23ee00: 0x242193b8  addiu       $at, $at, -0x6C48
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294939576));
    // 0x23ee04: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x23ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x23EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE08u;
        // 0x23ee0c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EE10u;
}
