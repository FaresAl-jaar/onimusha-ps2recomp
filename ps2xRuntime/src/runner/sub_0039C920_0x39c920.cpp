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

// Function: sub_0039C920
// Address: 0x39c920 - 0x39c998
void sub_0039C920_0x39c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C920_0x39c920");
#endif

    switch (ctx->pc) {
        case 0x39c940u: goto label_39c940;
        default: break;
    }

    ctx->pc = 0x39c920u;

    // 0x39c920: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x39c920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39c928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39c92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39c92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c930: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x39c930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x39c934: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x39c934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39c938: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39c93c: 0x0  nop
    ctx->pc = 0x39c93cu;
    // NOP
label_39c940:
    // 0x39c940: 0x90c32b32  lbu         $v1, 0x2B32($a2)
    ctx->pc = 0x39c940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11058)));
    // 0x39c944: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39C944u;
    {
        const bool branch_taken_0x39c944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c944) {
            ctx->pc = 0x39C980u;
            goto label_39c980;
        }
    }
    ctx->pc = 0x39C94Cu;
    // 0x39c94c: 0x90c52b2c  lbu         $a1, 0x2B2C($a2)
    ctx->pc = 0x39c94cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11052)));
    // 0x39c950: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C950u;
    {
        const bool branch_taken_0x39c950 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39c950) {
            ctx->pc = 0x39C960u;
            goto label_39c960;
        }
    }
    ctx->pc = 0x39C958u;
    // 0x39c958: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39C958u;
    {
        const bool branch_taken_0x39c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C958u;
        // 0x39c95c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c958) {
            ctx->pc = 0x39C990u;
            goto label_39c990;
        }
    }
    ctx->pc = 0x39C960u;
label_39c960:
    // 0x39c960: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C960u;
    {
        const bool branch_taken_0x39c960 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c960) {
            ctx->pc = 0x39C970u;
            goto label_39c970;
        }
    }
    ctx->pc = 0x39C968u;
    // 0x39c968: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39C968u;
    {
        const bool branch_taken_0x39c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C968u;
        // 0x39c96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c968) {
            ctx->pc = 0x39C990u;
            goto label_39c990;
        }
    }
    ctx->pc = 0x39C970u;
label_39c970:
    // 0x39c970: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x39c970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39c974: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39C974u;
    {
        const bool branch_taken_0x39c974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c974) {
            ctx->pc = 0x39C980u;
            goto label_39c980;
        }
    }
    ctx->pc = 0x39C97Cu;
    // 0x39c97c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39c97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c980:
    // 0x39c980: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x39c980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x39c984: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x39c984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39c988: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x39C988u;
    {
        const bool branch_taken_0x39c988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C988u;
        // 0x39c98c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c988) {
            ctx->pc = 0x39C940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c940;
        }
    }
    ctx->pc = 0x39C990u;
label_39c990:
    // 0x39c990: 0x3e00008  jr          $ra
    ctx->pc = 0x39C990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C998u;
}
