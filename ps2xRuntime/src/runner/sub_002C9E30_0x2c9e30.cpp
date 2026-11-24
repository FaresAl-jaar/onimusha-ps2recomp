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

// Function: sub_002C9E30
// Address: 0x2c9e30 - 0x2c9ea8
void sub_002C9E30_0x2c9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E30_0x2c9e30");
#endif

    ctx->pc = 0x2c9e30u;

    // 0x2c9e30: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9e34: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9E34u;
    {
        const bool branch_taken_0x2c9e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E34u;
        // 0x2c9e38: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e34) {
            ctx->pc = 0x2C9E90u;
            goto label_2c9e90;
        }
    }
    ctx->pc = 0x2C9E3Cu;
    // 0x2c9e3c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C9E3Cu;
    {
        const bool branch_taken_0x2c9e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9e3c) {
            ctx->pc = 0x2C9E88u;
            goto label_2c9e88;
        }
    }
    ctx->pc = 0x2C9E44u;
    // 0x2c9e44: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2c9e48: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9E48u;
    {
        const bool branch_taken_0x2c9e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E48u;
        // 0x2c9e4c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e48) {
            ctx->pc = 0x2C9E80u;
            goto label_2c9e80;
        }
    }
    ctx->pc = 0x2C9E50u;
    // 0x2c9e50: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9E50u;
    {
        const bool branch_taken_0x2c9e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9e50) {
            ctx->pc = 0x2C9E78u;
            goto label_2c9e78;
        }
    }
    ctx->pc = 0x2C9E58u;
    // 0x2c9e58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c9e5c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9E5Cu;
    {
        const bool branch_taken_0x2c9e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9e5c) {
            ctx->pc = 0x2C9E70u;
            goto label_2c9e70;
        }
    }
    ctx->pc = 0x2C9E64u;
    // 0x2c9e64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9E64u;
    {
        const bool branch_taken_0x2c9e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e64) {
            ctx->pc = 0x2C9E98u;
            goto label_2c9e98;
        }
    }
    ctx->pc = 0x2C9E6Cu;
    // 0x2c9e6c: 0x0  nop
    ctx->pc = 0x2c9e6cu;
    // NOP
label_2c9e70:
    // 0x2c9e70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9E70u;
    {
        const bool branch_taken_0x2c9e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E70u;
        // 0x2c9e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e70) {
            ctx->pc = 0x2C9EA0u;
            goto label_2c9ea0;
        }
    }
    ctx->pc = 0x2C9E78u;
label_2c9e78:
    // 0x2c9e78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9E78u;
    {
        const bool branch_taken_0x2c9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E78u;
        // 0x2c9e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e78) {
            ctx->pc = 0x2C9EA0u;
            goto label_2c9ea0;
        }
    }
    ctx->pc = 0x2C9E80u;
label_2c9e80:
    // 0x2c9e80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9E80u;
    {
        const bool branch_taken_0x2c9e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E80u;
        // 0x2c9e84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e80) {
            ctx->pc = 0x2C9EA0u;
            goto label_2c9ea0;
        }
    }
    ctx->pc = 0x2C9E88u;
label_2c9e88:
    // 0x2c9e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9E88u;
    {
        const bool branch_taken_0x2c9e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E88u;
        // 0x2c9e8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e88) {
            ctx->pc = 0x2C9EA0u;
            goto label_2c9ea0;
        }
    }
    ctx->pc = 0x2C9E90u;
label_2c9e90:
    // 0x2c9e90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9E90u;
    {
        const bool branch_taken_0x2c9e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E90u;
        // 0x2c9e94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e90) {
            ctx->pc = 0x2C9EA0u;
            goto label_2c9ea0;
        }
    }
    ctx->pc = 0x2C9E98u;
label_2c9e98:
    // 0x2c9e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e9c: 0x0  nop
    ctx->pc = 0x2c9e9cu;
    // NOP
label_2c9ea0:
    // 0x2c9ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9EA8u;
}
