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

// Function: sub_003E7E90
// Address: 0x3e7e90 - 0x3e7ec0
void sub_003E7E90_0x3e7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7E90_0x3e7e90");
#endif

    ctx->pc = 0x3e7e90u;

    // 0x3e7e90: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x3e7e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7e94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e7e98: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x3e7e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7e9c: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x3e7e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7ea0: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x3e7ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7ea4: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x3e7ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7ea8: 0xa0800079  sb          $zero, 0x79($a0)
    ctx->pc = 0x3e7ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7eac: 0xa080007d  sb          $zero, 0x7D($a0)
    ctx->pc = 0x3e7eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7eb0: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x3e7eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e7eb4: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x3e7eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e7eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EB8u;
        // 0x3e7ebc: 0xa0800086  sb          $zero, 0x86($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 134), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7EC0u;
}
