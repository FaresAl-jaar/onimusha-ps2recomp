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

// Function: sub_0019CDB0
// Address: 0x19cdb0 - 0x19cdd8
void sub_0019CDB0_0x19cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CDB0_0x19cdb0");
#endif

    ctx->pc = 0x19cdb0u;

    // 0x19cdb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x19cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19cdb4: 0x2c410030  sltiu       $at, $v0, 0x30
    ctx->pc = 0x19cdb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x19cdb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDB8u;
    {
        const bool branch_taken_0x19cdb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cdb8) {
            ctx->pc = 0x19CDC8u;
            goto label_19cdc8;
        }
    }
    ctx->pc = 0x19CDC0u;
    // 0x19cdc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CDC0u;
    {
        const bool branch_taken_0x19cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDC0u;
        // 0x19cdc4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdc0) {
            ctx->pc = 0x19CDD0u;
            goto label_19cdd0;
        }
    }
    ctx->pc = 0x19CDC8u;
label_19cdc8:
    // 0x19cdc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19cdcc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19cdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19cdd0:
    // 0x19cdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDD8u;
}
