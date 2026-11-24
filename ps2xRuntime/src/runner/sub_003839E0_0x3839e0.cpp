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

// Function: sub_003839E0
// Address: 0x3839e0 - 0x383a58
void sub_003839E0_0x3839e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003839E0_0x3839e0");
#endif

    switch (ctx->pc) {
        case 0x3839f0u: goto label_3839f0;
        case 0x383a28u: goto label_383a28;
        default: break;
    }

    ctx->pc = 0x3839e0u;

    // 0x3839e0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x3839E0u;
    {
        const bool branch_taken_0x3839e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3839E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839E0u;
        // 0x3839e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839e0) {
            ctx->pc = 0x383A20u;
            goto label_383a20;
        }
    }
    ctx->pc = 0x3839E8u;
    // 0x3839e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3839e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3839ec: 0x0  nop
    ctx->pc = 0x3839ecu;
    // NOP
label_3839f0:
    // 0x3839f0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3839f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3839f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3839F4u;
    {
        const bool branch_taken_0x3839f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3839F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839F4u;
        // 0x3839f8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839f4) {
            ctx->pc = 0x383A08u;
            goto label_383a08;
        }
    }
    ctx->pc = 0x3839FCu;
    // 0x3839fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3839fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383a00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x383A00u;
    {
        const bool branch_taken_0x383a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A00u;
        // 0x383a04: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a00) {
            ctx->pc = 0x383A50u;
            goto label_383a50;
        }
    }
    ctx->pc = 0x383A08u;
label_383a08:
    // 0x383a08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x383a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x383a0c: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x383a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x383a10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x383A10u;
    {
        const bool branch_taken_0x383a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A10u;
        // 0x383a14: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a10) {
            ctx->pc = 0x3839F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3839f0;
        }
    }
    ctx->pc = 0x383A18u;
    // 0x383a18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x383A18u;
    {
        const bool branch_taken_0x383a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383a18) {
            ctx->pc = 0x383A50u;
            goto label_383a50;
        }
    }
    ctx->pc = 0x383A20u;
label_383a20:
    // 0x383a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x383a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x383a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383a28:
    // 0x383a28: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x383a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x383a2c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x383A2Cu;
    {
        const bool branch_taken_0x383a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x383A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A2Cu;
        // 0x383a30: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a2c) {
            ctx->pc = 0x383A40u;
            goto label_383a40;
        }
    }
    ctx->pc = 0x383A34u;
    // 0x383a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x383a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x383A38u;
    {
        const bool branch_taken_0x383a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A38u;
        // 0x383a3c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a38) {
            ctx->pc = 0x383A50u;
            goto label_383a50;
        }
    }
    ctx->pc = 0x383A40u;
label_383a40:
    // 0x383a40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x383a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x383a44: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x383a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x383a48: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x383A48u;
    {
        const bool branch_taken_0x383a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A48u;
        // 0x383a4c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a48) {
            ctx->pc = 0x383A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383a28;
        }
    }
    ctx->pc = 0x383A50u;
label_383a50:
    // 0x383a50: 0x3e00008  jr          $ra
    ctx->pc = 0x383A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383A58u;
}
