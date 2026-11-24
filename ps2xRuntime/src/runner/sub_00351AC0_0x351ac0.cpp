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

// Function: sub_00351AC0
// Address: 0x351ac0 - 0x351ae4
void sub_00351AC0_0x351ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351AC0_0x351ac0");
#endif

    ctx->pc = 0x351ac0u;

    // 0x351ac0: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x351ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ac4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x351ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x351ac8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x351ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x351acc: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x351accu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ad0: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x351ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ad4: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x351ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x351ad8: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x351ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x351adc: 0x3e00008  jr          $ra
    ctx->pc = 0x351ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351ADCu;
        // 0x351ae0: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351AE4u;
}
