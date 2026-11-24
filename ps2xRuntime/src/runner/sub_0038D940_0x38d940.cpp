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

// Function: sub_0038D940
// Address: 0x38d940 - 0x38d980
void sub_0038D940_0x38d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D940_0x38d940");
#endif

    switch (ctx->pc) {
        case 0x38d948u: goto label_38d948;
        default: break;
    }

    ctx->pc = 0x38d940u;

    // 0x38d940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d944: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38d944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d948:
    // 0x38d948: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x38d948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x38d94c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x38d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x38d950: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x38d950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x38d954: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x38d954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x38d958: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x38d958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38d95c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x38d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x38d960: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x38d960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x38d964: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x38d964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x38d968: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x38d968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x38d96c: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x38d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x38d970: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x38D970u;
    {
        const bool branch_taken_0x38d970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D970u;
        // 0x38d974: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d970) {
            ctx->pc = 0x38D948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d948;
        }
    }
    ctx->pc = 0x38D978u;
    // 0x38d978: 0x3e00008  jr          $ra
    ctx->pc = 0x38D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D978u;
        // 0x38d97c: 0xac800180  sw          $zero, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D980u;
}
