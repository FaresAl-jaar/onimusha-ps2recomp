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

// Function: sub_0048A4EC
// Address: 0x48a4ec - 0x48a504
void sub_0048A4EC_0x48a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A4EC_0x48a4ec");
#endif

    switch (ctx->pc) {
        case 0x48a4ecu: goto label_48a4ec;
        case 0x48a4f0u: goto label_48a4f0;
        case 0x48a4f4u: goto label_48a4f4;
        case 0x48a4f8u: goto label_48a4f8;
        case 0x48a4fcu: goto label_48a4fc;
        case 0x48a500u: goto label_48a500;
        default: break;
    }

    ctx->pc = 0x48a4ecu;

label_48a4ec:
    // 0x48a4ec: 0x0  nop
    ctx->pc = 0x48a4ecu;
    // NOP
label_48a4f0:
    // 0x48a4f0: 0x7ca  .word       0x000007CA                   # movz        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x48a4f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_48a4f4:
    // 0x48a4f4: 0x8ca  .word       0x000008CA                   # movz        $at, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x48a4f4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_48a4f8:
    // 0x48a4f8: 0x9ca  .word       0x000009CA                   # movz        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x48a4f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_48a4fc:
    // 0x48a4fc: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_48a500:
    if (ctx->pc == 0x48A500u) {
        ctx->pc = 0x48A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4FCu;
        // 0x48a500: 0x4000a  movz        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48A504u;
        goto label_fallthrough_0x48a4fc;
    }
    ctx->pc = 0x48A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x48A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A4FCu;
        // 0x48a500: 0x4000a  movz        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A4FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x48a4fc:
    ctx->pc = 0x48A504u;
}
