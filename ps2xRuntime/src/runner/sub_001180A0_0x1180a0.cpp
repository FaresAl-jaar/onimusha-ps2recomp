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

// Function: sub_001180A0
// Address: 0x1180a0 - 0x1180f0
void sub_001180A0_0x1180a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001180A0_0x1180a0");
#endif

    switch (ctx->pc) {
        case 0x1180b8u: goto label_1180b8;
        default: break;
    }

    ctx->pc = 0x1180a0u;

    // 0x1180a0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1180a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1180a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1180a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1180a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1180ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1180ACu;
    {
        const bool branch_taken_0x1180ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180ACu;
        // 0x1180b0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180ac) {
            ctx->pc = 0x1180E4u;
            goto label_1180e4;
        }
    }
    ctx->pc = 0x1180B4u;
    // 0x1180b4: 0x0  nop
    ctx->pc = 0x1180b4u;
    // NOP
label_1180b8:
    // 0x1180b8: 0x42000039  di
    ctx->pc = 0x1180b8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1180bc: 0x40f  sync.p
    ctx->pc = 0x1180bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1180c0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1180c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1180c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1180c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1180c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1180cc: 0x0  nop
    ctx->pc = 0x1180ccu;
    // NOP
    // 0x1180d0: 0x0  nop
    ctx->pc = 0x1180d0u;
    // NOP
    // 0x1180d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1180D4u;
    {
        const bool branch_taken_0x1180d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180d4) {
            ctx->pc = 0x1180B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1180b8;
        }
    }
    ctx->pc = 0x1180DCu;
    // 0x1180dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1180DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180DCu;
        // 0x1180e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1180DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1180E4u;
label_1180e4:
    // 0x1180e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1180e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1180E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180E8u;
        // 0x1180ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1180E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1180F0u;
}
