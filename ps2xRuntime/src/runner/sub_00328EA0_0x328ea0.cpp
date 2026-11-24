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

// Function: sub_00328EA0
// Address: 0x328ea0 - 0x328ec4
void sub_00328EA0_0x328ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328EA0_0x328ea0");
#endif

    ctx->pc = 0x328ea0u;

    // 0x328ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328ea4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x328ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x328ea8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x328ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x328eac: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x328eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x328eb0: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x328eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x328eb4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x328eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x328eb8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x328eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x328ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x328EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EBCu;
        // 0x328ec0: 0xa023feea  sb          $v1, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328EC4u;
}
