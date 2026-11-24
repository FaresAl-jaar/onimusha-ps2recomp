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

// Function: sub_0026F120
// Address: 0x26f120 - 0x26f154
void sub_0026F120_0x26f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F120_0x26f120");
#endif

    switch (ctx->pc) {
        case 0x26f130u: goto label_26f130;
        default: break;
    }

    ctx->pc = 0x26f120u;

    // 0x26f120: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x26f124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f128: 0x24841610  addiu       $a0, $a0, 0x1610
    ctx->pc = 0x26f128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    // 0x26f12c: 0x0  nop
    ctx->pc = 0x26f12cu;
    // NOP
label_26f130:
    // 0x26f130: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x26f134: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26f138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26f138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26f13c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x26f13cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f140: 0x2cc3000c  sltiu       $v1, $a2, 0xC
    ctx->pc = 0x26f140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x26f144: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26F144u;
    {
        const bool branch_taken_0x26f144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F144u;
        // 0x26f148: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f144) {
            ctx->pc = 0x26F130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f130;
        }
    }
    ctx->pc = 0x26F14Cu;
    // 0x26f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F154u;
}
