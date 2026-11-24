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

// Function: sub_00258A90
// Address: 0x258a90 - 0x258ae0
void sub_00258A90_0x258a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258A90_0x258a90");
#endif

    switch (ctx->pc) {
        case 0x258aa0u: goto label_258aa0;
        default: break;
    }

    ctx->pc = 0x258a90u;

    // 0x258a90: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x258a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x258a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a98: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x258a9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_258aa0:
    // 0x258aa0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x258aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258aa4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x258AA4u;
    {
        const bool branch_taken_0x258aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x258AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AA4u;
        // 0x258aa8: 0x3c02008c  lui         $v0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258aa4) {
            ctx->pc = 0x258AC0u;
            goto label_258ac0;
        }
    }
    ctx->pc = 0x258AACu;
    // 0x258aac: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x258aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x258ab0: 0x2442edf0  addiu       $v0, $v0, -0x1210
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962672));
    // 0x258ab4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x258AB4u;
    {
        const bool branch_taken_0x258ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AB4u;
        // 0x258ab8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ab4) {
            ctx->pc = 0x258AD8u;
            goto label_258ad8;
        }
    }
    ctx->pc = 0x258ABCu;
    // 0x258abc: 0x0  nop
    ctx->pc = 0x258abcu;
    // NOP
label_258ac0:
    // 0x258ac0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258ac4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x258ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x258ac8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x258AC8u;
    {
        const bool branch_taken_0x258ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AC8u;
        // 0x258acc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ac8) {
            ctx->pc = 0x258AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258aa0;
        }
    }
    ctx->pc = 0x258AD0u;
    // 0x258ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ad4: 0x0  nop
    ctx->pc = 0x258ad4u;
    // NOP
label_258ad8:
    // 0x258ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x258AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258AE0u;
}
