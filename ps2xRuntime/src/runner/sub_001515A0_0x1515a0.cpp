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

// Function: sub_001515A0
// Address: 0x1515a0 - 0x1515e8
void sub_001515A0_0x1515a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515A0_0x1515a0");
#endif

    switch (ctx->pc) {
        case 0x1515b0u: goto label_1515b0;
        default: break;
    }

    ctx->pc = 0x1515a0u;

    // 0x1515a0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1515a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1515a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1515a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1515ac: 0x24844bb0  addiu       $a0, $a0, 0x4BB0
    ctx->pc = 0x1515acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19376));
label_1515b0:
    // 0x1515b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1515b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1515b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1515B4u;
    {
        const bool branch_taken_0x1515b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1515B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515B4u;
        // 0x1515b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515b4) {
            ctx->pc = 0x1515C8u;
            goto label_1515c8;
        }
    }
    ctx->pc = 0x1515BCu;
    // 0x1515bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1515BCu;
    {
        const bool branch_taken_0x1515bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515bc) {
            ctx->pc = 0x1515E0u;
            goto label_1515e0;
        }
    }
    ctx->pc = 0x1515C4u;
    // 0x1515c4: 0x0  nop
    ctx->pc = 0x1515c4u;
    // NOP
label_1515c8:
    // 0x1515c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1515c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1515cc: 0x2ca2000f  sltiu       $v0, $a1, 0xF
    ctx->pc = 0x1515ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1515d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1515D0u;
    {
        const bool branch_taken_0x1515d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1515D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515D0u;
        // 0x1515d4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515d0) {
            ctx->pc = 0x1515B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1515b0;
        }
    }
    ctx->pc = 0x1515D8u;
    // 0x1515d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1515d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515dc: 0x0  nop
    ctx->pc = 0x1515dcu;
    // NOP
label_1515e0:
    // 0x1515e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515E8u;
}
