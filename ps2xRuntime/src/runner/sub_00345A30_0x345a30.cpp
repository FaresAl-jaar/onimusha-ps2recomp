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

// Function: sub_00345A30
// Address: 0x345a30 - 0x345a78
void sub_00345A30_0x345a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345A30_0x345a30");
#endif

    switch (ctx->pc) {
        case 0x345a48u: goto label_345a48;
        default: break;
    }

    ctx->pc = 0x345a30u;

    // 0x345a30: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x345a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x345a34: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x345a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x345a38: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x345A38u;
    {
        const bool branch_taken_0x345a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A38u;
        // 0x345a3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a38) {
            ctx->pc = 0x345A70u;
            goto label_345a70;
        }
    }
    ctx->pc = 0x345A40u;
    // 0x345a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a44: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x345a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_345a48:
    // 0x345a48: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x345a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x345a4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x345a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x345a50: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x345a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x345a54: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x345a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x345a58: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x345a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x345a5c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x345a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x345a60: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x345a60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x345a64: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x345a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x345a68: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x345A68u;
    {
        const bool branch_taken_0x345a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A68u;
        // 0x345a6c: 0x24e701f0  addiu       $a3, $a3, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a68) {
            ctx->pc = 0x345A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345a48;
        }
    }
    ctx->pc = 0x345A70u;
label_345a70:
    // 0x345a70: 0x3e00008  jr          $ra
    ctx->pc = 0x345A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345A78u;
}
