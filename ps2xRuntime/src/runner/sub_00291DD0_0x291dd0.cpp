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

// Function: sub_00291DD0
// Address: 0x291dd0 - 0x291e20
void sub_00291DD0_0x291dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DD0_0x291dd0");
#endif

    switch (ctx->pc) {
        case 0x291de8u: goto label_291de8;
        default: break;
    }

    ctx->pc = 0x291dd0u;

    // 0x291dd0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x291dd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x291dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291dd8: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x291dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x291ddc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x291ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x291de0: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x291de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x291de4: 0x0  nop
    ctx->pc = 0x291de4u;
    // NOP
label_291de8:
    // 0x291de8: 0x8ca60858  lw          $a2, 0x858($a1)
    ctx->pc = 0x291de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2136)));
    // 0x291dec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x291DECu;
    {
        const bool branch_taken_0x291dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x291dec) {
            ctx->pc = 0x291E00u;
            goto label_291e00;
        }
    }
    ctx->pc = 0x291DF4u;
    // 0x291df4: 0x8cc30148  lw          $v1, 0x148($a2)
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x291df8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x291dfc: 0xacc30148  sw          $v1, 0x148($a2)
    ctx->pc = 0x291dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 328), GPR_U32(ctx, 3));
label_291e00:
    // 0x291e00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x291e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x291e04: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x291e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x291e08: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291E08u;
    {
        const bool branch_taken_0x291e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E08u;
        // 0x291e0c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e08) {
            ctx->pc = 0x291DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291de8;
        }
    }
    ctx->pc = 0x291E10u;
    // 0x291e10: 0x90832b0d  lbu         $v1, 0x2B0D($a0)
    ctx->pc = 0x291e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11021)));
    // 0x291e14: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x291e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x291e18: 0x3e00008  jr          $ra
    ctx->pc = 0x291E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291E18u;
        // 0x291e1c: 0xa0832b0d  sb          $v1, 0x2B0D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11021), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291E20u;
}
