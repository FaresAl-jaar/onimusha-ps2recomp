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

// Function: sub_00345A80
// Address: 0x345a80 - 0x345ad0
void sub_00345A80_0x345a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345A80_0x345a80");
#endif

    switch (ctx->pc) {
        case 0x345aa0u: goto label_345aa0;
        default: break;
    }

    ctx->pc = 0x345a80u;

    // 0x345a80: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x345a80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x345a84: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x345a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x345a88: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x345A88u;
    {
        const bool branch_taken_0x345a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A88u;
        // 0x345a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a88) {
            ctx->pc = 0x345AC8u;
            goto label_345ac8;
        }
    }
    ctx->pc = 0x345A90u;
    // 0x345a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a94: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x345a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x345a98: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x345a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x345a9c: 0x0  nop
    ctx->pc = 0x345a9cu;
    // NOP
label_345aa0:
    // 0x345aa0: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x345aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x345aa4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x345aa8: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x345aac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x345ab0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x345ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x345ab4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x345ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x345ab8: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x345ab8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x345abc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x345abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x345ac0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x345AC0u;
    {
        const bool branch_taken_0x345ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AC0u;
        // 0x345ac4: 0x24e701f0  addiu       $a3, $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ac0) {
            ctx->pc = 0x345AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345aa0;
        }
    }
    ctx->pc = 0x345AC8u;
label_345ac8:
    // 0x345ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x345AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345AD0u;
}
