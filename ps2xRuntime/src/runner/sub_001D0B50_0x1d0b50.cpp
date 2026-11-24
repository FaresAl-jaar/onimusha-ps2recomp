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

// Function: sub_001D0B50
// Address: 0x1d0b50 - 0x1d0bb0
void sub_001D0B50_0x1d0b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0B50_0x1d0b50");
#endif

    switch (ctx->pc) {
        case 0x1d0b68u: goto label_1d0b68;
        default: break;
    }

    ctx->pc = 0x1d0b50u;

    // 0x1d0b50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d0b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d0b5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b60: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d0b64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1d0b68:
    // 0x1d0b68: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1d0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1d0b6c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1d0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1d0b70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d0b74: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1d0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1d0b78: 0x28c3005b  slti        $v1, $a2, 0x5B
    ctx->pc = 0x1d0b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x1d0b7c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1d0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1d0b80: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1d0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1d0b84: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1d0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1d0b88: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1d0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1d0b8c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1d0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1d0b90: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D0B90u;
    {
        const bool branch_taken_0x1d0b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B90u;
        // 0x1d0b94: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b90) {
            ctx->pc = 0x1D0B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b68;
        }
    }
    ctx->pc = 0x1D0B98u;
    // 0x1d0b98: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1d0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0b9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0ba0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d0ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d0ba4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1d0ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1d0ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BA8u;
        // 0x1d0bac: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0BB0u;
}
