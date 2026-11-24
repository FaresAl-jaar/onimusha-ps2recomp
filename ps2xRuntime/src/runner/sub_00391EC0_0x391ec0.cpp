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

// Function: sub_00391EC0
// Address: 0x391ec0 - 0x391f08
void sub_00391EC0_0x391ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391EC0_0x391ec0");
#endif

    switch (ctx->pc) {
        case 0x391ed0u: goto label_391ed0;
        default: break;
    }

    ctx->pc = 0x391ec0u;

    // 0x391ec0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x391ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x391ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391ec8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x391ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x391ecc: 0x2484c800  addiu       $a0, $a0, -0x3800
    ctx->pc = 0x391eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
label_391ed0:
    // 0x391ed0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x391ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x391ed4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391ED4u;
    {
        const bool branch_taken_0x391ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x391ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ED4u;
        // 0x391ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ed4) {
            ctx->pc = 0x391EE8u;
            goto label_391ee8;
        }
    }
    ctx->pc = 0x391EDCu;
    // 0x391edc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x391EDCu;
    {
        const bool branch_taken_0x391edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391edc) {
            ctx->pc = 0x391F00u;
            goto label_391f00;
        }
    }
    ctx->pc = 0x391EE4u;
    // 0x391ee4: 0x0  nop
    ctx->pc = 0x391ee4u;
    // NOP
label_391ee8:
    // 0x391ee8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x391ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x391eec: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x391eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x391ef0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x391EF0u;
    {
        const bool branch_taken_0x391ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EF0u;
        // 0x391ef4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ef0) {
            ctx->pc = 0x391ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391ed0;
        }
    }
    ctx->pc = 0x391EF8u;
    // 0x391ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x391ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391efc: 0x0  nop
    ctx->pc = 0x391efcu;
    // NOP
label_391f00:
    // 0x391f00: 0x3e00008  jr          $ra
    ctx->pc = 0x391F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391F08u;
}
