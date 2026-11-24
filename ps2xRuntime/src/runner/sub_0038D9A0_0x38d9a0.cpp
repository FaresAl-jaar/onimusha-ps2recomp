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

// Function: sub_0038D9A0
// Address: 0x38d9a0 - 0x38d9f8
void sub_0038D9A0_0x38d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D9A0_0x38d9a0");
#endif

    switch (ctx->pc) {
        case 0x38d9c0u: goto label_38d9c0;
        default: break;
    }

    ctx->pc = 0x38d9a0u;

    // 0x38d9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d9a4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D9A4u;
    {
        const bool branch_taken_0x38d9a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d9a4) {
            ctx->pc = 0x38D9B8u;
            goto label_38d9b8;
        }
    }
    ctx->pc = 0x38D9ACu;
    // 0x38d9ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38D9ACu;
    {
        const bool branch_taken_0x38d9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9ACu;
        // 0x38d9b0: 0xac860184  sw          $a2, 0x184($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9ac) {
            ctx->pc = 0x38D9F0u;
            goto label_38d9f0;
        }
    }
    ctx->pc = 0x38D9B4u;
    // 0x38d9b4: 0x0  nop
    ctx->pc = 0x38d9b4u;
    // NOP
label_38d9b8:
    // 0x38d9b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38d9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d9bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x38d9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d9c0:
    // 0x38d9c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38d9c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38D9C4u;
    {
        const bool branch_taken_0x38d9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9C4u;
        // 0x38d9c8: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9c4) {
            ctx->pc = 0x38D9E0u;
            goto label_38d9e0;
        }
    }
    ctx->pc = 0x38D9CCu;
    // 0x38d9cc: 0xac860184  sw          $a2, 0x184($a0)
    ctx->pc = 0x38d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 6));
    // 0x38d9d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38d9d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x38d9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38D9D8u;
    {
        const bool branch_taken_0x38d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9D8u;
        // 0x38d9dc: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9d8) {
            ctx->pc = 0x38D9F0u;
            goto label_38d9f0;
        }
    }
    ctx->pc = 0x38D9E0u;
label_38d9e0:
    // 0x38d9e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38d9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x38d9e4: 0x29030020  slti        $v1, $t0, 0x20
    ctx->pc = 0x38d9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38d9e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x38D9E8u;
    {
        const bool branch_taken_0x38d9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9E8u;
        // 0x38d9ec: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9e8) {
            ctx->pc = 0x38D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9c0;
        }
    }
    ctx->pc = 0x38D9F0u;
label_38d9f0:
    // 0x38d9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D9F8u;
}
