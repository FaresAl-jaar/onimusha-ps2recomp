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

// Function: sub_002567D0
// Address: 0x2567d0 - 0x2567f8
void sub_002567D0_0x2567d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002567D0_0x2567d0");
#endif

    ctx->pc = 0x2567d0u;

    // 0x2567d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2567d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2567d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2567d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2567d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2567D8u;
    {
        const bool branch_taken_0x2567d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2567d8) {
            ctx->pc = 0x2567E8u;
            goto label_2567e8;
        }
    }
    ctx->pc = 0x2567E0u;
    // 0x2567e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2567E0u;
    {
        const bool branch_taken_0x2567e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567E0u;
        // 0x2567e4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567e0) {
            ctx->pc = 0x2567F0u;
            goto label_2567f0;
        }
    }
    ctx->pc = 0x2567E8u;
label_2567e8:
    // 0x2567e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2567e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2567ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2567f0:
    // 0x2567f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2567F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2567F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2567F8u;
}
