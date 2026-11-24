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

// Function: sub_00329B60
// Address: 0x329b60 - 0x329bb0
void sub_00329B60_0x329b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329B60_0x329b60");
#endif

    switch (ctx->pc) {
        case 0x329b78u: goto label_329b78;
        default: break;
    }

    ctx->pc = 0x329b60u;

    // 0x329b60: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x329b64: 0x9084000f  lbu         $a0, 0xF($a0)
    ctx->pc = 0x329b64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x329b68: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x329b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x329b6c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x329B6Cu;
    {
        const bool branch_taken_0x329b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B6Cu;
        // 0x329b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b6c) {
            ctx->pc = 0x329BA0u;
            goto label_329ba0;
        }
    }
    ctx->pc = 0x329B74u;
    // 0x329b74: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x329b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_329b78:
    // 0x329b78: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x329b78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x329b7c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329B7Cu;
    {
        const bool branch_taken_0x329b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x329b7c) {
            ctx->pc = 0x329B90u;
            goto label_329b90;
        }
    }
    ctx->pc = 0x329B84u;
    // 0x329b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329B84u;
    {
        const bool branch_taken_0x329b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329b84) {
            ctx->pc = 0x329BA8u;
            goto label_329ba8;
        }
    }
    ctx->pc = 0x329B8Cu;
    // 0x329b8c: 0x0  nop
    ctx->pc = 0x329b8cu;
    // NOP
label_329b90:
    // 0x329b90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x329b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x329b94: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x329b94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x329b98: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x329B98u;
    {
        const bool branch_taken_0x329b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B98u;
        // 0x329b9c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b98) {
            ctx->pc = 0x329B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b78;
        }
    }
    ctx->pc = 0x329BA0u;
label_329ba0:
    // 0x329ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ba4: 0x0  nop
    ctx->pc = 0x329ba4u;
    // NOP
label_329ba8:
    // 0x329ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x329BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329BB0u;
}
