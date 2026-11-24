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

// Function: sub_006582D8
// Address: 0x6582d8 - 0x6582ec
void sub_006582D8_0x6582d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006582D8_0x6582d8");
#endif

    switch (ctx->pc) {
        case 0x6582d8u: goto label_6582d8;
        case 0x6582dcu: goto label_6582dc;
        case 0x6582e0u: goto label_6582e0;
        case 0x6582e4u: goto label_6582e4;
        case 0x6582e8u: goto label_6582e8;
        default: break;
    }

    ctx->pc = 0x6582d8u;

label_6582d8:
    // 0x6582d8: 0x80808080  lb          $zero, -0x7F80($a0)
    ctx->pc = 0x6582d8u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294934656)));
label_6582dc:
    // 0x6582dc: 0x4b00e8  .word       0x004B00E8                   # mfsa        $zero # 004B00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6582dcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_6582e0:
    // 0x6582e0: 0x140100  sll         $zero, $s4, 4
    ctx->pc = 0x6582e0u;
    
label_6582e4:
    // 0x6582e4: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_6582e8:
    if (ctx->pc == 0x6582E8u) {
        ctx->pc = 0x6582E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6582E4u;
        // 0x6582e8: 0x1481008  .word       0x01481008                   # jr          $t2 # 00081000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x6582ECu;
        goto label_fallthrough_0x6582e4;
    }
    ctx->pc = 0x6582E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6582E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6582E4u;
        // 0x6582e8: 0x1481008  .word       0x01481008                   # jr          $t2 # 00081000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6582E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x6582e4:
    ctx->pc = 0x6582ECu;
}
