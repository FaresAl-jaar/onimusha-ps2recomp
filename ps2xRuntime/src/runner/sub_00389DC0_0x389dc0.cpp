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

// Function: sub_00389DC0
// Address: 0x389dc0 - 0x389e00
void sub_00389DC0_0x389dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389DC0_0x389dc0");
#endif

    switch (ctx->pc) {
        case 0x389dc8u: goto label_389dc8;
        default: break;
    }

    ctx->pc = 0x389dc0u;

    // 0x389dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389dc4: 0x0  nop
    ctx->pc = 0x389dc4u;
    // NOP
label_389dc8:
    // 0x389dc8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x389dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x389dcc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x389dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x389dd0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x389dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x389dd4: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x389dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x389dd8: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x389dd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x389ddc: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x389ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x389de0: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x389de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x389de4: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x389de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x389de8: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x389de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x389dec: 0xac800170  sw          $zero, 0x170($a0)
    ctx->pc = 0x389decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 0));
    // 0x389df0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x389DF0u;
    {
        const bool branch_taken_0x389df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389DF0u;
        // 0x389df4: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389df0) {
            ctx->pc = 0x389DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389dc8;
        }
    }
    ctx->pc = 0x389DF8u;
    // 0x389df8: 0x3e00008  jr          $ra
    ctx->pc = 0x389DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389E00u;
}
