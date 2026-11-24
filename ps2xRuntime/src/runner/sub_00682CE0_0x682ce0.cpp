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

// Function: sub_00682CE0
// Address: 0x682ce0 - 0x682ce8
void sub_00682CE0_0x682ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682CE0_0x682ce0");
#endif

    switch (ctx->pc) {
        case 0x682ce0u: goto label_682ce0;
        case 0x682ce4u: goto label_682ce4;
        default: break;
    }

    ctx->pc = 0x682ce0u;

label_682ce0:
    // 0x682ce0: 0x3b9048  .word       0x003B9048                   # jr          $at # 001B9040 <InstrIdType: CPU_SPECIAL>
label_682ce4:
    if (ctx->pc == 0x682CE4u) {
        ctx->pc = 0x682CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682CE0u;
        // 0x682ce4: 0x3b9080  .word       0x003B9080                   # sll         $s2, $k1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 27), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x682CE8u;
        goto label_fallthrough_0x682ce0;
    }
    ctx->pc = 0x682CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x682CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682CE0u;
        // 0x682ce4: 0x3b9080  .word       0x003B9080                   # sll         $s2, $k1, 2 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 27), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682CE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682ce0:
    ctx->pc = 0x682CE8u;
}
