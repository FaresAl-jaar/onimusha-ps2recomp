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

// Function: sub_00228C60
// Address: 0x228c60 - 0x228ca4
void sub_00228C60_0x228c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228C60_0x228c60");
#endif

    switch (ctx->pc) {
        case 0x228c78u: goto label_228c78;
        default: break;
    }

    ctx->pc = 0x228c60u;

    // 0x228c60: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x228c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c64: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x228c68: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x228c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x228c6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228C6Cu;
    {
        const bool branch_taken_0x228c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C6Cu;
        // 0x228c70: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c6c) {
            ctx->pc = 0x228C9Cu;
            goto label_228c9c;
        }
    }
    ctx->pc = 0x228C74u;
    // 0x228c74: 0x0  nop
    ctx->pc = 0x228c74u;
    // NOP
label_228c78:
    // 0x228c78: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x228c7c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x228c80: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228c84: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x228c84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228c88: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x228c88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228c8c: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x228c90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x228c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x228c94: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x228C94u;
    {
        const bool branch_taken_0x228c94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C94u;
        // 0x228c98: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c94) {
            ctx->pc = 0x228C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228c78;
        }
    }
    ctx->pc = 0x228C9Cu;
label_228c9c:
    // 0x228c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x228C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228CA4u;
}
