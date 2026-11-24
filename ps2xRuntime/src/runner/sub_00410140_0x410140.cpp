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

// Function: sub_00410140
// Address: 0x410140 - 0x410148
void sub_00410140_0x410140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410140_0x410140");
#endif

    switch (ctx->pc) {
        case 0x410140u: goto label_410140;
        case 0x410144u: goto label_410144;
        default: break;
    }

    ctx->pc = 0x410140u;

label_410140:
    // 0x410140: 0x908  .word       0x00000908                   # jr          $zero # 00000900 <InstrIdType: CPU_SPECIAL>
label_410144:
    if (ctx->pc == 0x410144u) {
        ctx->pc = 0x410144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410140u;
        // 0x410144: 0x997c  dsll32      $s3, $zero, 5 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410148u;
        goto label_fallthrough_0x410140;
    }
    ctx->pc = 0x410140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x410144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410140u;
        // 0x410144: 0x997c  dsll32      $s3, $zero, 5 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x410140:
    ctx->pc = 0x410148u;
}
