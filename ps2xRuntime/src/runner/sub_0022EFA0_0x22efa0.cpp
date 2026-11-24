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

// Function: sub_0022EFA0
// Address: 0x22efa0 - 0x22efcc
void sub_0022EFA0_0x22efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EFA0_0x22efa0");
#endif

    switch (ctx->pc) {
        case 0x22efa8u: goto label_22efa8;
        default: break;
    }

    ctx->pc = 0x22efa0u;

    // 0x22efa0: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x22efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x22efa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22efa8:
    // 0x22efa8: 0x0  nop
    ctx->pc = 0x22efa8u;
    // NOP
    // 0x22efac: 0x0  nop
    ctx->pc = 0x22efacu;
    // NOP
    // 0x22efb0: 0x0  nop
    ctx->pc = 0x22efb0u;
    // NOP
    // 0x22efb4: 0x0  nop
    ctx->pc = 0x22efb4u;
    // NOP
    // 0x22efb8: 0x0  nop
    ctx->pc = 0x22efb8u;
    // NOP
    // 0x22efbc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22EFBCu;
    {
        const bool branch_taken_0x22efbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22efbc) {
            ctx->pc = 0x22EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EFBCu;
            // 0x22efc0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22efa8;
        }
    }
    ctx->pc = 0x22EFC4u;
    // 0x22efc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EFCCu;
}
