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

// Function: sub_00152660
// Address: 0x152660 - 0x15267c
void sub_00152660_0x152660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152660_0x152660");
#endif

    ctx->pc = 0x152660u;

    // 0x152660: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x152660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152664: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x152664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x152668: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x152668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15266c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15266cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x152670: 0xf  sync
    ctx->pc = 0x152670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x152674: 0x3e00008  jr          $ra
    ctx->pc = 0x152674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152674u;
        // 0x152678: 0x42000038  ei (Delay Slot)
        ctx->cop0_status |= 0x10000; // Enable interrupts
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15267Cu;
}
