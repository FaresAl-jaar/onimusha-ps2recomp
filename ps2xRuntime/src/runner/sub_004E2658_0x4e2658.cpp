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

// Function: sub_004E2658
// Address: 0x4e2658 - 0x4e2664
void sub_004E2658_0x4e2658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2658_0x4e2658");
#endif

    switch (ctx->pc) {
        case 0x4e2658u: goto label_4e2658;
        case 0x4e265cu: goto label_4e265c;
        case 0x4e2660u: goto label_4e2660;
        default: break;
    }

    ctx->pc = 0x4e2658u;

label_4e2658:
    // 0x4e2658: 0x10003  sra         $zero, $at, 0
    ctx->pc = 0x4e2658u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 0));
label_4e265c:
    // 0x4e265c: 0xa0008  .word       0x000A0008                   # jr          $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
label_4e2660:
    if (ctx->pc == 0x4E2660u) {
        ctx->pc = 0x4E2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E265Cu;
        // 0x4e2660: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2664u;
        goto label_fallthrough_0x4e265c;
    }
    ctx->pc = 0x4E265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E265Cu;
        // 0x4e2660: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E265Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e265c:
    ctx->pc = 0x4E2664u;
}
