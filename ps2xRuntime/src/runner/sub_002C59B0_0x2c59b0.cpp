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

// Function: sub_002C59B0
// Address: 0x2c59b0 - 0x2c59f0
void sub_002C59B0_0x2c59b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C59B0_0x2c59b0");
#endif

    ctx->pc = 0x2c59b0u;

    // 0x2c59b0: 0x80830031  lb          $v1, 0x31($a0)
    ctx->pc = 0x2c59b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2c59b4: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c59b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c59b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c59bc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c59bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c59c0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c59c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c59c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C59C4u;
    {
        const bool branch_taken_0x2c59c4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2C59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59C4u;
        // 0x2c59c8: 0x28410008  slti        $at, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59c4) {
            ctx->pc = 0x2C59D4u;
            goto label_2c59d4;
        }
    }
    ctx->pc = 0x2C59CCu;
    // 0x2c59cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C59CCu;
    {
        const bool branch_taken_0x2c59cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59CCu;
        // 0x2c59d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59cc) {
            ctx->pc = 0x2C59E4u;
            goto label_2c59e4;
        }
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C59D4u;
    {
        const bool branch_taken_0x2c59d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c59d4) {
            ctx->pc = 0x2C59E4u;
            goto label_2c59e4;
        }
    }
    ctx->pc = 0x2C59DCu;
    // 0x2c59dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C59DCu;
    {
        const bool branch_taken_0x2c59dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59DCu;
        // 0x2c59e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59dc) {
            ctx->pc = 0x2C59E4u;
            goto label_2c59e4;
        }
    }
    ctx->pc = 0x2C59E4u;
label_2c59e4:
    // 0x2c59e4: 0xa0820031  sb          $v0, 0x31($a0)
    ctx->pc = 0x2c59e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c59e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C59E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59E8u;
        // 0x2c59ec: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C59E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C59F0u;
}
