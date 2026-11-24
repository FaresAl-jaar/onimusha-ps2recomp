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

// Function: sub_00178E10
// Address: 0x178e10 - 0x178e28
void sub_00178E10_0x178e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E10_0x178e10");
#endif

    ctx->pc = 0x178e10u;

    // 0x178e10: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x178e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x178e14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178E14u;
    {
        const bool branch_taken_0x178e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E14u;
        // 0x178e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e14) {
            ctx->pc = 0x178E20u;
            goto label_178e20;
        }
    }
    ctx->pc = 0x178E1Cu;
    // 0x178e1c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_178e20:
    // 0x178e20: 0x3e00008  jr          $ra
    ctx->pc = 0x178E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E28u;
}
