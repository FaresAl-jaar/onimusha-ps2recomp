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

// Function: sub_0046003C
// Address: 0x46003c - 0x460044
void sub_0046003C_0x46003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046003C_0x46003c");
#endif

    switch (ctx->pc) {
        case 0x46003cu: goto label_46003c;
        case 0x460040u: goto label_460040;
        default: break;
    }

    ctx->pc = 0x46003cu;

label_46003c:
    // 0x46003c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_460040:
    if (ctx->pc == 0x460040u) {
        ctx->pc = 0x460040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46003Cu;
        // 0x460040: 0x4000b  movn        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460044u;
        goto label_fallthrough_0x46003c;
    }
    ctx->pc = 0x46003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x460040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46003Cu;
        // 0x460040: 0x4000b  movn        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46003Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x46003c:
    ctx->pc = 0x460044u;
}
