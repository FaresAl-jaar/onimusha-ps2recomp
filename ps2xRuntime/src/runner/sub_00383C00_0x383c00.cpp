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

// Function: sub_00383C00
// Address: 0x383c00 - 0x383c3c
void sub_00383C00_0x383c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383C00_0x383c00");
#endif

    ctx->pc = 0x383c00u;

    // 0x383c00: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x383c00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x383c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x383c08: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383C08u;
    {
        const bool branch_taken_0x383c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x383C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C08u;
        // 0x383c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c08) {
            ctx->pc = 0x383C18u;
            goto label_383c18;
        }
    }
    ctx->pc = 0x383C10u;
    // 0x383c10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x383C10u;
    {
        const bool branch_taken_0x383c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383c10) {
            ctx->pc = 0x383C34u;
            goto label_383c34;
        }
    }
    ctx->pc = 0x383C18u;
label_383c18:
    // 0x383c18: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x383c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x383c1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x383c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x383c20: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x383c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383c24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x383c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x383c28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x383c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x383c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x383c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x383c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x383c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_383c34:
    // 0x383c34: 0x3e00008  jr          $ra
    ctx->pc = 0x383C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383C3Cu;
}
