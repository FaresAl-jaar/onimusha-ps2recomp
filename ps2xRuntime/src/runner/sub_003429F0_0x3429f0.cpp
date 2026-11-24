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

// Function: sub_003429F0
// Address: 0x3429f0 - 0x342a0c
void sub_003429F0_0x3429f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003429F0_0x3429f0");
#endif

    ctx->pc = 0x3429f0u;

    // 0x3429f0: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x3429f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3429f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3429f8: 0xac820400  sw          $v0, 0x400($a0)
    ctx->pc = 0x3429f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
    // 0x3429fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3429fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342a00: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342a04: 0x3e00008  jr          $ra
    ctx->pc = 0x342A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A04u;
        // 0x342a08: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A0Cu;
}
