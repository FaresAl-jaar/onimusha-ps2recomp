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

// Function: sub_004CD6F8
// Address: 0x4cd6f8 - 0x4cd710
void sub_004CD6F8_0x4cd6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD6F8_0x4cd6f8");
#endif

    switch (ctx->pc) {
        case 0x4cd6f8u: goto label_4cd6f8;
        case 0x4cd6fcu: goto label_4cd6fc;
        case 0x4cd700u: goto label_4cd700;
        case 0x4cd704u: goto label_4cd704;
        case 0x4cd708u: goto label_4cd708;
        case 0x4cd70cu: goto label_4cd70c;
        default: break;
    }

    ctx->pc = 0x4cd6f8u;

label_4cd6f8:
    // 0x4cd6f8: 0x0  nop
    ctx->pc = 0x4cd6f8u;
    // NOP
label_4cd6fc:
    // 0x4cd6fc: 0x0  nop
    ctx->pc = 0x4cd6fcu;
    // NOP
label_4cd700:
    // 0x4cd700: 0x0  nop
    ctx->pc = 0x4cd700u;
    // NOP
label_4cd704:
    // 0x4cd704: 0x0  nop
    ctx->pc = 0x4cd704u;
    // NOP
label_4cd708:
    // 0x4cd708: 0x240a48  .word       0x00240A48                   # jr          $at # 00040A40 <InstrIdType: CPU_SPECIAL>
label_4cd70c:
    if (ctx->pc == 0x4CD70Cu) {
        ctx->pc = 0x4CD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD708u;
        // 0x4cd70c: 0x240c38  .word       0x00240C38                   # dsll        $at, $a0, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 4) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CD710u;
        goto label_fallthrough_0x4cd708;
    }
    ctx->pc = 0x4CD708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x4CD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD708u;
        // 0x4cd70c: 0x240c38  .word       0x00240C38                   # dsll        $at, $a0, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 4) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD708u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4cd708:
    ctx->pc = 0x4CD710u;
}
