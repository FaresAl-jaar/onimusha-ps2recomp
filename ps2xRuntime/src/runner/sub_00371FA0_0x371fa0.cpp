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

// Function: sub_00371FA0
// Address: 0x371fa0 - 0x371fd4
void sub_00371FA0_0x371fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371FA0_0x371fa0");
#endif

    switch (ctx->pc) {
        case 0x371fb0u: goto label_371fb0;
        default: break;
    }

    ctx->pc = 0x371fa0u;

    // 0x371fa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fa4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x371fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371fa8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x371fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371fac: 0x0  nop
    ctx->pc = 0x371facu;
    // NOP
label_371fb0:
    // 0x371fb0: 0xacc5006c  sw          $a1, 0x6C($a2)
    ctx->pc = 0x371fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 5));
    // 0x371fb4: 0xacc50068  sw          $a1, 0x68($a2)
    ctx->pc = 0x371fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 5));
    // 0x371fb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x371fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x371fbc: 0xa0c00070  sb          $zero, 0x70($a2)
    ctx->pc = 0x371fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x371fc0: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x371fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x371fc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x371FC4u;
    {
        const bool branch_taken_0x371fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FC4u;
        // 0x371fc8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371fc4) {
            ctx->pc = 0x371FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371fb0;
        }
    }
    ctx->pc = 0x371FCCu;
    // 0x371fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x371FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371FCCu;
        // 0x371fd0: 0xa480008c  sh          $zero, 0x8C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371FD4u;
}
