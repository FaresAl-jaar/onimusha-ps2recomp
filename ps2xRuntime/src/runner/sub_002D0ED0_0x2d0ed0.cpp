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

// Function: sub_002D0ED0
// Address: 0x2d0ed0 - 0x2d0f18
void sub_002D0ED0_0x2d0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0ED0_0x2d0ed0");
#endif

    ctx->pc = 0x2d0ed0u;

    // 0x2d0ed0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d0ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0ed4: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x2d0ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2d0ed8: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0ED8u;
    {
        const bool branch_taken_0x2d0ed8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0ED8u;
        // 0x2d0edc: 0x28810005  slti        $at, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ed8) {
            ctx->pc = 0x2D0F08u;
            goto label_2d0f08;
        }
    }
    ctx->pc = 0x2D0EE0u;
    // 0x2d0ee0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0EE0u;
    {
        const bool branch_taken_0x2d0ee0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ee0) {
            ctx->pc = 0x2D0F08u;
            goto label_2d0f08;
        }
    }
    ctx->pc = 0x2D0EE8u;
    // 0x2d0ee8: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x2d0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2d0eec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0ef0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2d0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0ef4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0ef8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d0efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d0f00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0F00u;
    {
        const bool branch_taken_0x2d0f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F00u;
        // 0x2d0f04: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f00) {
            ctx->pc = 0x2D0F10u;
            goto label_2d0f10;
        }
    }
    ctx->pc = 0x2D0F08u;
label_2d0f08:
    // 0x2d0f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f0c: 0x0  nop
    ctx->pc = 0x2d0f0cu;
    // NOP
label_2d0f10:
    // 0x2d0f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F18u;
}
