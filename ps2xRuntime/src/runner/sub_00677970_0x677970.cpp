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

// Function: sub_00677970
// Address: 0x677970 - 0x67797c
void sub_00677970_0x677970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00677970_0x677970");
#endif

    switch (ctx->pc) {
        case 0x677970u: goto label_677970;
        case 0x677974u: goto label_677974;
        case 0x677978u: goto label_677978;
        default: break;
    }

    ctx->pc = 0x677970u;

label_677970:
    // 0x677970: 0x2d22b0  tge         $at, $t5, 138
    ctx->pc = 0x677970u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_677974:
    // 0x677974: 0x2d22c8  .word       0x002D22C8                   # jr          $at # 000D22C0 <InstrIdType: CPU_SPECIAL>
label_677978:
    if (ctx->pc == 0x677978u) {
        ctx->pc = 0x677978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x677974u;
        // 0x677978: 0x2d22b8  .word       0x002D22B8                   # dsll        $a0, $t5, 10 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << 10);
        ctx->in_delay_slot = false;
        ctx->pc = 0x67797Cu;
        goto label_fallthrough_0x677974;
    }
    ctx->pc = 0x677974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x677978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x677974u;
        // 0x677978: 0x2d22b8  .word       0x002D22B8                   # dsll        $a0, $t5, 10 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << 10);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x677974u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x677974:
    ctx->pc = 0x67797Cu;
}
