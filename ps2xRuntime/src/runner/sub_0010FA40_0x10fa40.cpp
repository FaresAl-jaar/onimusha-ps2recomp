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

// Function: sub_0010FA40
// Address: 0x10fa40 - 0x10fa78
void sub_0010FA40_0x10fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA40_0x10fa40");
#endif

    switch (ctx->pc) {
        case 0x10fa48u: goto label_10fa48;
        default: break;
    }

    ctx->pc = 0x10fa40u;

    // 0x10fa40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10fa44: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x10fa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_10fa48:
    // 0x10fa48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f130
    // 0x10fa4c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x10fa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x10fa50: 0x0  nop
    ctx->pc = 0x10fa50u;
    // NOP
    // 0x10fa54: 0x0  nop
    ctx->pc = 0x10fa54u;
    // NOP
    // 0x10fa58: 0x0  nop
    ctx->pc = 0x10fa58u;
    // NOP
    // 0x10fa5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FA5Cu;
    {
        const bool branch_taken_0x10fa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fa5c) {
            ctx->pc = 0x10FA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fa48;
        }
    }
    ctx->pc = 0x10FA64u;
    // 0x10fa64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10fa68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10fa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa6c: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x10fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x10fa70: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA70u;
        // 0x10fa74: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA78u;
}
