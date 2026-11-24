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

// Function: sub_002ED350
// Address: 0x2ed350 - 0x2ed360
void sub_002ED350_0x2ed350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED350_0x2ed350");
#endif

    ctx->pc = 0x2ed350u;

    // 0x2ed350: 0x8ca306cc  lw          $v1, 0x6CC($a1)
    ctx->pc = 0x2ed350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1740)));
    // 0x2ed354: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2ed354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2ed358: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED358u;
        // 0x2ed35c: 0xaca306cc  sw          $v1, 0x6CC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED360u;
}
