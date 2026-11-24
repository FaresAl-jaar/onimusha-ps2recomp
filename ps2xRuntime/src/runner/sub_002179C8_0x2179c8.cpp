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

// Function: sub_002179C8
// Address: 0x2179c8 - 0x2179fc
void sub_002179C8_0x2179c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179C8_0x2179c8");
#endif

    ctx->pc = 0x2179c8u;

    // 0x2179c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2179c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2179cc: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x2179ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2179d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2179d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2179d4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2179d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2179d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2179d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2179dc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2179e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2179e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2179e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2179e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2179e8: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2179e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2179ec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2179ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2179f0: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x2179f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x2179f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2179F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179F4u;
        // 0x2179f8: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179FCu;
}
