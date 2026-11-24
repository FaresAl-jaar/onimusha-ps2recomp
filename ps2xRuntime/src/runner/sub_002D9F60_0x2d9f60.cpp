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

// Function: sub_002D9F60
// Address: 0x2d9f60 - 0x2d9fb0
void sub_002D9F60_0x2d9f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9F60_0x2d9f60");
#endif

    switch (ctx->pc) {
        case 0x2d9f68u: goto label_2d9f68;
        default: break;
    }

    ctx->pc = 0x2d9f60u;

    // 0x2d9f60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2d9f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f68:
    // 0x2d9f68: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2d9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2d9f6c: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9F6Cu;
    {
        const bool branch_taken_0x2d9f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d9f6c) {
            ctx->pc = 0x2D9F90u;
            goto label_2d9f90;
        }
    }
    ctx->pc = 0x2D9F74u;
    // 0x2d9f74: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2d9f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d9f78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9f80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9f84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d9f88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9F88u;
    {
        const bool branch_taken_0x2d9f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F88u;
        // 0x2d9f8c: 0x24420068  addiu       $v0, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f88) {
            ctx->pc = 0x2D9FA8u;
            goto label_2d9fa8;
        }
    }
    ctx->pc = 0x2D9F90u;
label_2d9f90:
    // 0x2d9f90: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d9f94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2d9f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9f98: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2d9f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d9f9c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D9F9Cu;
    {
        const bool branch_taken_0x2d9f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F9Cu;
        // 0x2d9fa0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f9c) {
            ctx->pc = 0x2D9F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9f68;
        }
    }
    ctx->pc = 0x2D9FA4u;
    // 0x2d9fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fa8:
    // 0x2d9fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9FB0u;
}
