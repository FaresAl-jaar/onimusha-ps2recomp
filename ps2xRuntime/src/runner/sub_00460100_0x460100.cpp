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

// Function: sub_00460100
// Address: 0x460100 - 0x46011c
void sub_00460100_0x460100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460100_0x460100");
#endif

    switch (ctx->pc) {
        case 0x460100u: goto label_460100;
        case 0x460104u: goto label_460104;
        case 0x460108u: goto label_460108;
        case 0x46010cu: goto label_46010c;
        case 0x460110u: goto label_460110;
        case 0x460114u: goto label_460114;
        case 0x460118u: goto label_460118;
        default: break;
    }

    ctx->pc = 0x460100u;

label_460100:
    // 0x460100: 0x4008c  .word       0x0004008C                   # syscall     2 # 00040000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x460100u;
    ctx->pc = 0x460104u;
runtime->handleSyscall(rdram, ctx, 0x1002u);
label_460104:
    // 0x460104: 0x0  nop
    ctx->pc = 0x460104u;
    // NOP
label_460108:
    // 0x460108: 0x0  nop
    ctx->pc = 0x460108u;
    // NOP
label_46010c:
    // 0x46010c: 0x0  nop
    ctx->pc = 0x46010cu;
    // NOP
label_460110:
    // 0x460110: 0x10ca  .word       0x000010CA                   # movz        $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x460110u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_460114:
    // 0x460114: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_460118:
    if (ctx->pc == 0x460118u) {
        ctx->pc = 0x460118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460114u;
        // 0x460118: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x46011Cu;
        goto label_fallthrough_0x460114;
    }
    ctx->pc = 0x460114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x460118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460114u;
        // 0x460118: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460114u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x460114:
    ctx->pc = 0x46011Cu;
}
