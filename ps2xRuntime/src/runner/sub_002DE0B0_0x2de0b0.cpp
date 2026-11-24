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

// Function: sub_002DE0B0
// Address: 0x2de0b0 - 0x2de100
void sub_002DE0B0_0x2de0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0B0_0x2de0b0");
#endif

    switch (ctx->pc) {
        case 0x2de0d0u: goto label_2de0d0;
        default: break;
    }

    ctx->pc = 0x2de0b0u;

    // 0x2de0b0: 0xa4800054  sh          $zero, 0x54($a0)
    ctx->pc = 0x2de0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de0b4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2de0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2de0b8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x2de0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2de0bc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2de0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2de0c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2DE0C0u;
    {
        const bool branch_taken_0x2de0c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0C0u;
        // 0x2de0c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0c0) {
            ctx->pc = 0x2DE0F8u;
            goto label_2de0f8;
        }
    }
    ctx->pc = 0x2DE0C8u;
    // 0x2de0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de0cc: 0x0  nop
    ctx->pc = 0x2de0ccu;
    // NOP
label_2de0d0:
    // 0x2de0d0: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2de0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2de0d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2de0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2de0d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2de0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2de0dc: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x2de0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de0e0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2de0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2de0e4: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x2de0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2de0e8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2de0e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2de0ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DE0ECu;
    {
        const bool branch_taken_0x2de0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0ECu;
        // 0x2de0f0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0ec) {
            ctx->pc = 0x2DE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de0d0;
        }
    }
    ctx->pc = 0x2DE0F4u;
    // 0x2de0f4: 0x0  nop
    ctx->pc = 0x2de0f4u;
    // NOP
label_2de0f8:
    // 0x2de0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE100u;
}
