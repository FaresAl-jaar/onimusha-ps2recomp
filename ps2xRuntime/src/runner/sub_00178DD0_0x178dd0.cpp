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

// Function: sub_00178DD0
// Address: 0x178dd0 - 0x178e10
void sub_00178DD0_0x178dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178DD0_0x178dd0");
#endif

    ctx->pc = 0x178dd0u;

    // 0x178dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x178dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178dd4: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x178dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x178dd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178ddc: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x178ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x178de0: 0x3c0301d0  lui         $v1, 0x1D0
    ctx->pc = 0x178de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)464 << 16));
    // 0x178de4: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x178de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x178de8: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x178de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x178dec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x178decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x178df0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178df4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x178df8: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x178df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x178dfc: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x178e00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x178e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x178e04: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x178e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x178e08: 0x3e00008  jr          $ra
    ctx->pc = 0x178E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E08u;
        // 0x178e0c: 0xac860098  sw          $a2, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E10u;
}
