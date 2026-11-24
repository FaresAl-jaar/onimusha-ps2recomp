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

// Function: sub_00350D50
// Address: 0x350d50 - 0x350d78
void sub_00350D50_0x350d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D50_0x350d50");
#endif

    ctx->pc = 0x350d50u;

    // 0x350d50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D50u;
    {
        const bool branch_taken_0x350d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d50) {
            ctx->pc = 0x350D68u;
            goto label_350d68;
        }
    }
    ctx->pc = 0x350D58u;
    // 0x350d58: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x350d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x350d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x350D5Cu;
    {
        const bool branch_taken_0x350d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D5Cu;
        // 0x350d60: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d5c) {
            ctx->pc = 0x350D70u;
            goto label_350d70;
        }
    }
    ctx->pc = 0x350D64u;
    // 0x350d64: 0x0  nop
    ctx->pc = 0x350d64u;
    // NOP
label_350d68:
    // 0x350d68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x350d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350d6c: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x350d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
label_350d70:
    // 0x350d70: 0x3e00008  jr          $ra
    ctx->pc = 0x350D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D78u;
}
