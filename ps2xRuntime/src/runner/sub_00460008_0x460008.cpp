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

// Function: sub_00460008
// Address: 0x460008 - 0x460020
void sub_00460008_0x460008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460008_0x460008");
#endif

    switch (ctx->pc) {
        case 0x460008u: goto label_460008;
        case 0x46000cu: goto label_46000c;
        case 0x460010u: goto label_460010;
        case 0x460014u: goto label_460014;
        case 0x460018u: goto label_460018;
        case 0x46001cu: goto label_46001c;
        default: break;
    }

    ctx->pc = 0x460008u;

label_460008:
    // 0x460008: 0x0  nop
    ctx->pc = 0x460008u;
    // NOP
label_46000c:
    // 0x46000c: 0x0  nop
    ctx->pc = 0x46000cu;
    // NOP
label_460010:
    // 0x460010: 0x2ca  .word       0x000002CA                   # movz        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x460010u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_460014:
    // 0x460014: 0x9ca  .word       0x000009CA                   # movz        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x460014u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_460018:
    // 0x460018: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_46001c:
    if (ctx->pc == 0x46001Cu) {
        ctx->pc = 0x46001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460018u;
        // 0x46001c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x460020u;
        goto label_fallthrough_0x460018;
    }
    ctx->pc = 0x460018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x46001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460018u;
        // 0x46001c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x460018:
    ctx->pc = 0x460020u;
}
