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

// Function: sub_002F51E0
// Address: 0x2f51e0 - 0x2f5208
void sub_002F51E0_0x2f51e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F51E0_0x2f51e0");
#endif

    ctx->pc = 0x2f51e0u;

    // 0x2f51e0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2f51e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f51e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F51E4u;
    {
        const bool branch_taken_0x2f51e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f51e4) {
            ctx->pc = 0x2F5200u;
            goto label_2f5200;
        }
    }
    ctx->pc = 0x2F51ECu;
    // 0x2f51ec: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x2f51ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f51f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F51F0u;
    {
        const bool branch_taken_0x2f51f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f51f0) {
            ctx->pc = 0x2F5200u;
            goto label_2f5200;
        }
    }
    ctx->pc = 0x2F51F8u;
    // 0x2f51f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F51F8u;
    {
        const bool branch_taken_0x2f51f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51F8u;
        // 0x2f51fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51f8) {
            ctx->pc = 0x2F5200u;
            goto label_2f5200;
        }
    }
    ctx->pc = 0x2F5200u;
label_2f5200:
    // 0x2f5200: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5208u;
}
