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

// Function: sub_00470020
// Address: 0x470020 - 0x470040
void sub_00470020_0x470020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470020_0x470020");
#endif

    switch (ctx->pc) {
        case 0x470020u: goto label_470020;
        case 0x470024u: goto label_470024;
        case 0x470028u: goto label_470028;
        case 0x47002cu: goto label_47002c;
        case 0x470030u: goto label_470030;
        case 0x470034u: goto label_470034;
        case 0x470038u: goto label_470038;
        case 0x47003cu: goto label_47003c;
        default: break;
    }

    ctx->pc = 0x470020u;

label_470020:
    // 0x470020: 0x40004  sllv        $zero, $a0, $zero
    ctx->pc = 0x470020u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_470024:
    // 0x470024: 0x0  nop
    ctx->pc = 0x470024u;
    // NOP
label_470028:
    // 0x470028: 0x0  nop
    ctx->pc = 0x470028u;
    // NOP
label_47002c:
    // 0x47002c: 0x0  nop
    ctx->pc = 0x47002cu;
    // NOP
label_470030:
    // 0x470030: 0xacb  .word       0x00000ACB                   # movn        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x470030u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_470034:
    // 0x470034: 0xbcb  .word       0x00000BCB                   # movn        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x470034u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_470038:
    // 0x470038: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_47003c:
    if (ctx->pc == 0x47003Cu) {
        ctx->pc = 0x47003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470038u;
        // 0x47003c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x470040u;
        goto label_fallthrough_0x470038;
    }
    ctx->pc = 0x470038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x47003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470038u;
        // 0x47003c: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470038u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x470038:
    ctx->pc = 0x470040u;
}
