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

// Function: sub_0029AC50
// Address: 0x29ac50 - 0x29ac78
void sub_0029AC50_0x29ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC50_0x29ac50");
#endif

    ctx->pc = 0x29ac50u;

    // 0x29ac50: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29ac54: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x29ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x29ac58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AC58u;
    {
        const bool branch_taken_0x29ac58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC58u;
        // 0x29ac5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ac58) {
            ctx->pc = 0x29AC70u;
            goto label_29ac70;
        }
    }
    ctx->pc = 0x29AC60u;
    // 0x29ac60: 0xa0830085  sb          $v1, 0x85($a0)
    ctx->pc = 0x29ac60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 133), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ac64: 0xa0830086  sb          $v1, 0x86($a0)
    ctx->pc = 0x29ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 134), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ac68: 0xa0800084  sb          $zero, 0x84($a0)
    ctx->pc = 0x29ac68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ac6c: 0xa4850080  sh          $a1, 0x80($a0)
    ctx->pc = 0x29ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 5));
label_29ac70:
    // 0x29ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC78u;
}
