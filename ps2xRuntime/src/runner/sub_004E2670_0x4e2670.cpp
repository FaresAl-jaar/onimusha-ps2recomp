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

// Function: sub_004E2670
// Address: 0x4e2670 - 0x4e2678
void sub_004E2670_0x4e2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2670_0x4e2670");
#endif

    switch (ctx->pc) {
        case 0x4e2670u: goto label_4e2670;
        case 0x4e2674u: goto label_4e2674;
        default: break;
    }

    ctx->pc = 0x4e2670u;

label_4e2670:
    // 0x4e2670: 0x4e2648  .word       0x004E2648                   # jr          $v0 # 000E2640 <InstrIdType: CPU_SPECIAL>
label_4e2674:
    if (ctx->pc == 0x4E2674u) {
        ctx->pc = 0x4E2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2670u;
        // 0x4e2674: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2678u;
        goto label_fallthrough_0x4e2670;
    }
    ctx->pc = 0x4E2670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2670u;
        // 0x4e2674: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e2670:
    ctx->pc = 0x4E2678u;
}
