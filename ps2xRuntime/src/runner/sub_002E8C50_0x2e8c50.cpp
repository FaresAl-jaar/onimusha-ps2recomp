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

// Function: sub_002E8C50
// Address: 0x2e8c50 - 0x2e8c88
void sub_002E8C50_0x2e8c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8C50_0x2e8c50");
#endif

    ctx->pc = 0x2e8c50u;

    // 0x2e8c50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8c54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2e8c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2e8c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8C58u;
    {
        const bool branch_taken_0x2e8c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c58) {
            ctx->pc = 0x2E8C70u;
            goto label_2e8c70;
        }
    }
    ctx->pc = 0x2E8C60u;
    // 0x2e8c60: 0x80830229  lb          $v1, 0x229($a0)
    ctx->pc = 0x2e8c60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 553)));
    // 0x2e8c64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8c68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8C68u;
    {
        const bool branch_taken_0x2e8c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8c68) {
            ctx->pc = 0x2E8C78u;
            goto label_2e8c78;
        }
    }
    ctx->pc = 0x2E8C70u;
label_2e8c70:
    // 0x2e8c70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8C70u;
    {
        const bool branch_taken_0x2e8c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C70u;
        // 0x2e8c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c70) {
            ctx->pc = 0x2E8C80u;
            goto label_2e8c80;
        }
    }
    ctx->pc = 0x2E8C78u;
label_2e8c78:
    // 0x2e8c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8c7c: 0x0  nop
    ctx->pc = 0x2e8c7cu;
    // NOP
label_2e8c80:
    // 0x2e8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8C88u;
}
