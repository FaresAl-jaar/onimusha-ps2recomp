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

// Function: sub_002D1660
// Address: 0x2d1660 - 0x2d167c
void sub_002D1660_0x2d1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1660_0x2d1660");
#endif

    ctx->pc = 0x2d1660u;

    // 0x2d1660: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d1664: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2d1668: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d1668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d166c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d166cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d1670: 0xac800200  sw          $zero, 0x200($a0)
    ctx->pc = 0x2d1670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
    // 0x2d1674: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1674u;
        // 0x2d1678: 0xac800204  sw          $zero, 0x204($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D167Cu;
}
