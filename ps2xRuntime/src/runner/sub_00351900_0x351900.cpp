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

// Function: sub_00351900
// Address: 0x351900 - 0x351920
void sub_00351900_0x351900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351900_0x351900");
#endif

    ctx->pc = 0x351900u;

    // 0x351900: 0x9085001a  lbu         $a1, 0x1A($a0)
    ctx->pc = 0x351900u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x351904: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x351904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x351908: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x351908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x35190c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x351910: 0xa423a0c0  sh          $v1, -0x5F40($at)
    ctx->pc = 0x351910u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x91A0C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x91A0C0u, _value); } while (0);
    // 0x351914: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x351914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x351918: 0x3e00008  jr          $ra
    ctx->pc = 0x351918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351918u;
        // 0x35191c: 0xa025a0bf  sb          $a1, -0x5F41($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942911), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351920u;
}
