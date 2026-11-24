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

// Function: sub_00348E40
// Address: 0x348e40 - 0x348e90
void sub_00348E40_0x348e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348E40_0x348e40");
#endif

    switch (ctx->pc) {
        case 0x348e60u: goto label_348e60;
        default: break;
    }

    ctx->pc = 0x348e40u;

    // 0x348e40: 0xa4800054  sh          $zero, 0x54($a0)
    ctx->pc = 0x348e40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x348e44: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x348e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x348e48: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x348e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348e4c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x348e4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x348e50: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x348E50u;
    {
        const bool branch_taken_0x348e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x348E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E50u;
        // 0x348e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e50) {
            ctx->pc = 0x348E88u;
            goto label_348e88;
        }
    }
    ctx->pc = 0x348E58u;
    // 0x348e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348e5c: 0x0  nop
    ctx->pc = 0x348e5cu;
    // NOP
label_348e60:
    // 0x348e60: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x348e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x348e64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x348e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x348e68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x348e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x348e6c: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x348e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x348e70: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x348e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x348e74: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x348e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348e78: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x348e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x348e7c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x348E7Cu;
    {
        const bool branch_taken_0x348e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E7Cu;
        // 0x348e80: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e7c) {
            ctx->pc = 0x348E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_348e60;
        }
    }
    ctx->pc = 0x348E84u;
    // 0x348e84: 0x0  nop
    ctx->pc = 0x348e84u;
    // NOP
label_348e88:
    // 0x348e88: 0x3e00008  jr          $ra
    ctx->pc = 0x348E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E90u;
}
