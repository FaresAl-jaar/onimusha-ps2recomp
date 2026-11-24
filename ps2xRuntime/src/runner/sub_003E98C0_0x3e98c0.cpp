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

// Function: sub_003E98C0
// Address: 0x3e98c0 - 0x3e98e0
void sub_003E98C0_0x3e98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E98C0_0x3e98c0");
#endif

    ctx->pc = 0x3e98c0u;

    // 0x3e98c0: 0x90832b4c  lbu         $v1, 0x2B4C($a0)
    ctx->pc = 0x3e98c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11084)));
    // 0x3e98c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E98C4u;
    {
        const bool branch_taken_0x3e98c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E98C4u;
        // 0x3e98c8: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98c4) {
            ctx->pc = 0x3E98D8u;
            goto label_3e98d8;
        }
    }
    ctx->pc = 0x3E98CCu;
    // 0x3e98cc: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3e98ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e98d0: 0xa0802b4c  sb          $zero, 0x2B4C($a0)
    ctx->pc = 0x3e98d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e98d4: 0x0  nop
    ctx->pc = 0x3e98d4u;
    // NOP
label_3e98d8:
    // 0x3e98d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E98D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E98E0u;
}
