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

// Function: sub_00243E80
// Address: 0x243e80 - 0x243ee4
void sub_00243E80_0x243e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243E80_0x243e80");
#endif

    switch (ctx->pc) {
        case 0x243ea0u: goto label_243ea0;
        default: break;
    }

    ctx->pc = 0x243e80u;

    // 0x243e80: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x243e84: 0x24a25e00  addiu       $v0, $a1, 0x5E00
    ctx->pc = 0x243e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24064));
    // 0x243e88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x243e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x243e8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x885E04u));
    // 0x243e90: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x243E90u;
    {
        const bool branch_taken_0x243e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E90u;
        // 0x243e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e90) {
            ctx->pc = 0x243EC4u;
            goto label_243ec4;
        }
    }
    ctx->pc = 0x243E98u;
    // 0x243e98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x243e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x243e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_243ea0:
    // 0x243ea0: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x243ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x243ea4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA4u;
        // 0x243ea8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243EC4u;
            goto label_243ec4;
        }
    }
    ctx->pc = 0x243EACu;
    // 0x243eac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243eb0: 0x0  nop
    ctx->pc = 0x243eb0u;
    // NOP
    // 0x243eb4: 0x0  nop
    ctx->pc = 0x243eb4u;
    // NOP
    // 0x243eb8: 0x0  nop
    ctx->pc = 0x243eb8u;
    // NOP
    // 0x243ebc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x243EBCu;
    {
        const bool branch_taken_0x243ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ebc) {
            ctx->pc = 0x243EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243EBCu;
            // 0x243ec0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243ea0;
        }
    }
    ctx->pc = 0x243EC4u;
label_243ec4:
    // 0x243ec4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x243ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x243ec8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x243EC8u;
    {
        const bool branch_taken_0x243ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x243ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC8u;
        // 0x243ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ec8) {
            ctx->pc = 0x243EDCu;
            goto label_243edc;
        }
    }
    ctx->pc = 0x243ED0u;
    // 0x243ed0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x243ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x243ed4: 0x24a25e00  addiu       $v0, $a1, 0x5E00
    ctx->pc = 0x243ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24064));
    // 0x243ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_243edc:
    // 0x243edc: 0x3e00008  jr          $ra
    ctx->pc = 0x243EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243EE4u;
}
