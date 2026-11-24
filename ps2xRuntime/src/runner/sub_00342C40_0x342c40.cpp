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

// Function: sub_00342C40
// Address: 0x342c40 - 0x342c80
void sub_00342C40_0x342c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C40_0x342c40");
#endif

    switch (ctx->pc) {
        case 0x342c48u: goto label_342c48;
        default: break;
    }

    ctx->pc = 0x342c40u;

    // 0x342c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c44: 0x0  nop
    ctx->pc = 0x342c44u;
    // NOP
label_342c48:
    // 0x342c48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x342c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x342c4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x342c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x342c50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x342c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x342c54: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x342c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x342c58: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x342c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x342c5c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x342c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x342c60: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x342c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x342c64: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x342c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x342c68: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x342c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x342c6c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x342c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x342c70: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x342C70u;
    {
        const bool branch_taken_0x342c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C70u;
        // 0x342c74: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c70) {
            ctx->pc = 0x342C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342c48;
        }
    }
    ctx->pc = 0x342C78u;
    // 0x342c78: 0x3e00008  jr          $ra
    ctx->pc = 0x342C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C80u;
}
