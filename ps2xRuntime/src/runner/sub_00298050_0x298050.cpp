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

// Function: sub_00298050
// Address: 0x298050 - 0x298060
void sub_00298050_0x298050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298050_0x298050");
#endif

    ctx->pc = 0x298050u;

    // 0x298050: 0x8c8306b4  lw          $v1, 0x6B4($a0)
    ctx->pc = 0x298050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x298054: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x298054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x298058: 0x3e00008  jr          $ra
    ctx->pc = 0x298058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298058u;
        // 0x29805c: 0xac8306b4  sw          $v1, 0x6B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298060u;
}
