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

// Function: sub_00342910
// Address: 0x342910 - 0x342958
void sub_00342910_0x342910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342910_0x342910");
#endif

    switch (ctx->pc) {
        case 0x342918u: goto label_342918;
        default: break;
    }

    ctx->pc = 0x342910u;

    // 0x342910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342914: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x342914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342918:
    // 0x342918: 0x8c6206c0  lw          $v0, 0x6C0($v1)
    ctx->pc = 0x342918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
    // 0x34291c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34291Cu;
    {
        const bool branch_taken_0x34291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x342920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34291Cu;
        // 0x342920: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34291c) {
            ctx->pc = 0x342938u;
            goto label_342938;
        }
    }
    ctx->pc = 0x342924u;
    // 0x342924: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x342924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x342928: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34292c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34292Cu;
    {
        const bool branch_taken_0x34292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34292Cu;
        // 0x342930: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34292c) {
            ctx->pc = 0x342950u;
            goto label_342950;
        }
    }
    ctx->pc = 0x342934u;
    // 0x342934: 0x0  nop
    ctx->pc = 0x342934u;
    // NOP
label_342938:
    // 0x342938: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x342938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34293c: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x34293cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x342940: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x342940u;
    {
        const bool branch_taken_0x342940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342940u;
        // 0x342944: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342940) {
            ctx->pc = 0x342918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342918;
        }
    }
    ctx->pc = 0x342948u;
    // 0x342948: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34294c: 0x0  nop
    ctx->pc = 0x34294cu;
    // NOP
label_342950:
    // 0x342950: 0x3e00008  jr          $ra
    ctx->pc = 0x342950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342958u;
}
