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

// Function: sub_0015A6B0
// Address: 0x15a6b0 - 0x15a6f0
void sub_0015A6B0_0x15a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A6B0_0x15a6b0");
#endif

    switch (ctx->pc) {
        case 0x15a6b8u: goto label_15a6b8;
        default: break;
    }

    ctx->pc = 0x15a6b0u;

    // 0x15a6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6b4: 0x0  nop
    ctx->pc = 0x15a6b4u;
    // NOP
label_15a6b8:
    // 0x15a6b8: 0xac800620  sw          $zero, 0x620($a0)
    ctx->pc = 0x15a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 0));
    // 0x15a6bc: 0xac800624  sw          $zero, 0x624($a0)
    ctx->pc = 0x15a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1572), GPR_U32(ctx, 0));
    // 0x15a6c0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15a6c4: 0xac800628  sw          $zero, 0x628($a0)
    ctx->pc = 0x15a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 0));
    // 0x15a6c8: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x15a6c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x15a6cc: 0xac80062c  sw          $zero, 0x62C($a0)
    ctx->pc = 0x15a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1580), GPR_U32(ctx, 0));
    // 0x15a6d0: 0xac800630  sw          $zero, 0x630($a0)
    ctx->pc = 0x15a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1584), GPR_U32(ctx, 0));
    // 0x15a6d4: 0xac800634  sw          $zero, 0x634($a0)
    ctx->pc = 0x15a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 0));
    // 0x15a6d8: 0xac800638  sw          $zero, 0x638($a0)
    ctx->pc = 0x15a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1592), GPR_U32(ctx, 0));
    // 0x15a6dc: 0xac80063c  sw          $zero, 0x63C($a0)
    ctx->pc = 0x15a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1596), GPR_U32(ctx, 0));
    // 0x15a6e0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15A6E0u;
    {
        const bool branch_taken_0x15a6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6E0u;
        // 0x15a6e4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6e0) {
            ctx->pc = 0x15A6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a6b8;
        }
    }
    ctx->pc = 0x15A6E8u;
    // 0x15a6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A6F0u;
}
