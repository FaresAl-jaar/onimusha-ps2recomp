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

// Function: sub_00682BE0
// Address: 0x682be0 - 0x682bfc
void sub_00682BE0_0x682be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682BE0_0x682be0");
#endif

    switch (ctx->pc) {
        case 0x682be0u: goto label_682be0;
        case 0x682be4u: goto label_682be4;
        case 0x682be8u: goto label_682be8;
        case 0x682becu: goto label_682bec;
        case 0x682bf0u: goto label_682bf0;
        case 0x682bf4u: goto label_682bf4;
        case 0x682bf8u: goto label_682bf8;
        default: break;
    }

    ctx->pc = 0x682be0u;

label_682be0:
    // 0x682be0: 0x3b7d80  .word       0x003B7D80                   # sll         $t7, $k1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682be0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_682be4:
    // 0x682be4: 0x3b7d80  .word       0x003B7D80                   # sll         $t7, $k1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682be4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_682be8:
    // 0x682be8: 0x3b7d80  .word       0x003B7D80                   # sll         $t7, $k1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682be8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_682bec:
    // 0x682bec: 0x3b7d80  .word       0x003B7D80                   # sll         $t7, $k1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682becu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_682bf0:
    // 0x682bf0: 0x3b7d80  .word       0x003B7D80                   # sll         $t7, $k1, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 27), 22));
label_682bf4:
    // 0x682bf4: 0x3b7d88  .word       0x003B7D88                   # jr          $at # 001B7D80 <InstrIdType: CPU_SPECIAL>
label_682bf8:
    if (ctx->pc == 0x682BF8u) {
        ctx->pc = 0x682BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682BF4u;
        // 0x682bf8: 0x3b7d88  .word       0x003B7D88                   # jr          $at # 001B7D80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x682BFCu;
        goto label_fallthrough_0x682bf4;
    }
    ctx->pc = 0x682BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x682BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x682BF4u;
        // 0x682bf8: 0x3b7d88  .word       0x003B7D88                   # jr          $at # 001B7D80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x682BF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x682bf4:
    ctx->pc = 0x682BFCu;
}
