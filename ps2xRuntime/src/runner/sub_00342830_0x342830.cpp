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

// Function: sub_00342830
// Address: 0x342830 - 0x342870
void sub_00342830_0x342830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342830_0x342830");
#endif

    switch (ctx->pc) {
        case 0x342838u: goto label_342838;
        default: break;
    }

    ctx->pc = 0x342830u;

    // 0x342830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342834: 0x0  nop
    ctx->pc = 0x342834u;
    // NOP
label_342838:
    // 0x342838: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x342838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x34283c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x34283cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x342840: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x342840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x342844: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x342844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x342848: 0x28a30018  slti        $v1, $a1, 0x18
    ctx->pc = 0x342848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34284c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x34284cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x342850: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x342850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x342854: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x342854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x342858: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x342858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x34285c: 0xac8001f8  sw          $zero, 0x1F8($a0)
    ctx->pc = 0x34285cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
    // 0x342860: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x342860u;
    {
        const bool branch_taken_0x342860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342860u;
        // 0x342864: 0x24840240  addiu       $a0, $a0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342860) {
            ctx->pc = 0x342838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342838;
        }
    }
    ctx->pc = 0x342868u;
    // 0x342868: 0x3e00008  jr          $ra
    ctx->pc = 0x342868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342870u;
}
