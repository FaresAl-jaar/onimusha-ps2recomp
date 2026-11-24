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

// Function: sub_00143FF0
// Address: 0x143ff0 - 0x144078
void sub_00143FF0_0x143ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143FF0_0x143ff0");
#endif

    switch (ctx->pc) {
        case 0x144030u: goto label_144030;
        default: break;
    }

    ctx->pc = 0x143ff0u;

    // 0x143ff0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x143ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x143ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ff8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x143ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x143ffc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144000: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x144000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x144004: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x144004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x144008: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x144008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x14400c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x14400cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x144010: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x144010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x144014: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x144014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x144018: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x144018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x14401c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x14401cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x144020: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x144020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x144024: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x144024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x144028: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x144028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x14402c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x14402cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_144030:
    // 0x144030: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x144030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x144034: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x144034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x144038: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x144038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x14403c: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x14403cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x144040: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x144044: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x144044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x144048: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x144048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x14404c: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x14404cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x144050: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x144050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x144054: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x144054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x144058: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x144058u;
    {
        const bool branch_taken_0x144058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144058u;
        // 0x14405c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144058) {
            ctx->pc = 0x144030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144030;
        }
    }
    ctx->pc = 0x144060u;
    // 0x144060: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x144060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x144064: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x144064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x144068: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x144068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x14406c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x14406cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x144070: 0x3e00008  jr          $ra
    ctx->pc = 0x144070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144070u;
        // 0x144074: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144078u;
}
