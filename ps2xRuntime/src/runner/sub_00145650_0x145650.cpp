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

// Function: sub_00145650
// Address: 0x145650 - 0x145688
void sub_00145650_0x145650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145650_0x145650");
#endif

    ctx->pc = 0x145650u;

    // 0x145650: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x145650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145654u;
    {
        const bool branch_taken_0x145654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145654) {
            ctx->pc = 0x145668u;
            goto label_145668;
        }
    }
    ctx->pc = 0x14565Cu;
    // 0x14565c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14565Cu;
    {
        const bool branch_taken_0x14565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14565c) {
            ctx->pc = 0x145678u;
            goto label_145678;
        }
    }
    ctx->pc = 0x145664u;
    // 0x145664: 0x0  nop
    ctx->pc = 0x145664u;
    // NOP
label_145668:
    // 0x145668: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x14566c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14566Cu;
    {
        const bool branch_taken_0x14566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14566Cu;
        // 0x145670: 0x24426ae8  addiu       $v0, $v0, 0x6AE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14566c) {
            ctx->pc = 0x145680u;
            goto label_145680;
        }
    }
    ctx->pc = 0x145674u;
    // 0x145674: 0x0  nop
    ctx->pc = 0x145674u;
    // NOP
label_145678:
    // 0x145678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x145678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14567c: 0x0  nop
    ctx->pc = 0x14567cu;
    // NOP
label_145680:
    // 0x145680: 0x3e00008  jr          $ra
    ctx->pc = 0x145680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145688u;
}
