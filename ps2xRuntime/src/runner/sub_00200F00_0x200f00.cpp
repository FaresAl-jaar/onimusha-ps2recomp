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

// Function: sub_00200F00
// Address: 0x200f00 - 0x200f50
void sub_00200F00_0x200f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200F00_0x200f00");
#endif

    switch (ctx->pc) {
        case 0x200f20u: goto label_200f20;
        default: break;
    }

    ctx->pc = 0x200f00u;

    // 0x200f00: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x200f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f08: 0x24423f40  addiu       $v0, $v0, 0x3F40
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x200f0c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x200f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x873F94u));
    // 0x200f10: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x200F10u;
    {
        const bool branch_taken_0x200f10 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x200F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F10u;
        // 0x200f14: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f10) {
            ctx->pc = 0x200F44u;
            goto label_200f44;
        }
    }
    ctx->pc = 0x200F18u;
    // 0x200f18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200f1c: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x200f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_200f20:
    // 0x200f20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f24: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x200F24u;
    {
        const bool branch_taken_0x200f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x200F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F24u;
        // 0x200f28: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f24) {
            ctx->pc = 0x200F48u;
            goto label_200f48;
        }
    }
    ctx->pc = 0x200F2Cu;
    // 0x200f2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x200f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x200f30: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x200f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x200f34: 0x0  nop
    ctx->pc = 0x200f34u;
    // NOP
    // 0x200f38: 0x0  nop
    ctx->pc = 0x200f38u;
    // NOP
    // 0x200f3c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x200F3Cu;
    {
        const bool branch_taken_0x200f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f3c) {
            ctx->pc = 0x200F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F3Cu;
            // 0x200f40: 0x8c830188  lw          $v1, 0x188($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200f20;
        }
    }
    ctx->pc = 0x200F44u;
label_200f44:
    // 0x200f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200f48:
    // 0x200f48: 0x3e00008  jr          $ra
    ctx->pc = 0x200F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F50u;
}
