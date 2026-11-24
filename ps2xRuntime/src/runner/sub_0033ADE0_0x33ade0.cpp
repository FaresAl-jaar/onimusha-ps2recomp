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

// Function: sub_0033ADE0
// Address: 0x33ade0 - 0x33ae04
void sub_0033ADE0_0x33ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ADE0_0x33ade0");
#endif

    ctx->pc = 0x33ade0u;

    // 0x33ade0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x33ade0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ade4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33ade4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33ade8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33adec: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x33adecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x33adf0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x33adf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33adf4: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x33adf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33adf8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x33adf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x33adfc: 0x3e00008  jr          $ra
    ctx->pc = 0x33ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADFCu;
        // 0x33ae00: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AE04u;
}
