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

// Function: sub_00133650
// Address: 0x133650 - 0x1336a0
void sub_00133650_0x133650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133650_0x133650");
#endif

    switch (ctx->pc) {
        case 0x133660u: goto label_133660;
        default: break;
    }

    ctx->pc = 0x133650u;

    // 0x133650: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x133650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x133654: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x133654u;
    {
        const bool branch_taken_0x133654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133654u;
        // 0x133658: 0x6223c  dsll32      $a0, $a2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133654) {
            ctx->pc = 0x133690u;
            goto label_133690;
        }
    }
    ctx->pc = 0x13365Cu;
    // 0x13365c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x13365cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
label_133660:
    // 0x133660: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133664: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x133664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x133668: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x133668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x13366c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13366Cu;
    {
        const bool branch_taken_0x13366c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13366c) {
            ctx->pc = 0x133680u;
            goto label_133680;
        }
    }
    ctx->pc = 0x133674u;
    // 0x133674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133674u;
    {
        const bool branch_taken_0x133674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133674) {
            ctx->pc = 0x133698u;
            goto label_133698;
        }
    }
    ctx->pc = 0x13367Cu;
    // 0x13367c: 0x0  nop
    ctx->pc = 0x13367cu;
    // NOP
label_133680:
    // 0x133680: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x133684: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x133684u;
    {
        const bool branch_taken_0x133684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133684) {
            ctx->pc = 0x133660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133660;
        }
    }
    ctx->pc = 0x13368Cu;
    // 0x13368c: 0x0  nop
    ctx->pc = 0x13368cu;
    // NOP
label_133690:
    // 0x133690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133694: 0x0  nop
    ctx->pc = 0x133694u;
    // NOP
label_133698:
    // 0x133698: 0x3e00008  jr          $ra
    ctx->pc = 0x133698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1336A0u;
}
