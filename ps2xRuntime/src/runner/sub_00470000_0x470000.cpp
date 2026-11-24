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

// Function: sub_00470000
// Address: 0x470000 - 0x470020
void sub_00470000_0x470000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470000_0x470000");
#endif

    switch (ctx->pc) {
        case 0x470000u: goto label_470000;
        case 0x470004u: goto label_470004;
        case 0x470008u: goto label_470008;
        case 0x47000cu: goto label_47000c;
        case 0x470010u: goto label_470010;
        case 0x470014u: goto label_470014;
        case 0x470018u: goto label_470018;
        case 0x47001cu: goto label_47001c;
        default: break;
    }

    ctx->pc = 0x470000u;

label_470000:
    // 0x470000: 0x40003  sra         $zero, $a0, 0
    ctx->pc = 0x470000u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
label_470004:
    // 0x470004: 0x0  nop
    ctx->pc = 0x470004u;
    // NOP
label_470008:
    // 0x470008: 0x0  nop
    ctx->pc = 0x470008u;
    // NOP
label_47000c:
    // 0x47000c: 0x0  nop
    ctx->pc = 0x47000cu;
    // NOP
label_470010:
    // 0x470010: 0x8cb  .word       0x000008CB                   # movn        $at, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x470010u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_470014:
    // 0x470014: 0x9cb  .word       0x000009CB                   # movn        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x470014u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_470018:
    // 0x470018: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_47001c:
    if (ctx->pc == 0x47001Cu) {
        ctx->pc = 0x47001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470018u;
        // 0x47001c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x470020u;
        goto label_fallthrough_0x470018;
    }
    ctx->pc = 0x470018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x47001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470018u;
        // 0x47001c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x470018:
    ctx->pc = 0x470020u;
}
