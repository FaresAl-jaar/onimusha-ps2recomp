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

// Function: sub_00204050
// Address: 0x204050 - 0x204060
void sub_00204050_0x204050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204050_0x204050");
#endif

    ctx->pc = 0x204050u;

    // 0x204050: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x204054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204058: 0x3e00008  jr          $ra
    ctx->pc = 0x204058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204058u;
        // 0x20405c: 0xac820200  sw          $v0, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204060u;
}
