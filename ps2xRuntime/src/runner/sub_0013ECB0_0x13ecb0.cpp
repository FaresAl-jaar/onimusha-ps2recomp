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

// Function: sub_0013ECB0
// Address: 0x13ecb0 - 0x13ecd4
void sub_0013ECB0_0x13ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ECB0_0x13ecb0");
#endif

    ctx->pc = 0x13ecb0u;

    // 0x13ecb0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13ecb4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13ecb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13ecbc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ecc0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ecc4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13ecc8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x13ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x13eccc: 0x3e00008  jr          $ra
    ctx->pc = 0x13ECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECCCu;
        // 0x13ecd0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ECD4u;
}
