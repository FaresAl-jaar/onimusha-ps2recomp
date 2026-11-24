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

// Function: sub_0019CD80
// Address: 0x19cd80 - 0x19cdac
void sub_0019CD80_0x19cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD80_0x19cd80");
#endif

    ctx->pc = 0x19cd80u;

    // 0x19cd80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x19cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19cd84: 0x2c610030  sltiu       $at, $v1, 0x30
    ctx->pc = 0x19cd84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x19cd88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CD88u;
    {
        const bool branch_taken_0x19cd88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd88) {
            ctx->pc = 0x19CDA0u;
            goto label_19cda0;
        }
    }
    ctx->pc = 0x19CD90u;
    // 0x19cd90: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x19cd90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19cd94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19cd98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19CD98u;
    {
        const bool branch_taken_0x19cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD98u;
        // 0x19cd9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd98) {
            ctx->pc = 0x19CDA4u;
            goto label_19cda4;
        }
    }
    ctx->pc = 0x19CDA0u;
label_19cda0:
    // 0x19cda0: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x19cda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_19cda4:
    // 0x19cda4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CDACu;
}
