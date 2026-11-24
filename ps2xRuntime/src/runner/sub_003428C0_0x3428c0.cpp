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

// Function: sub_003428C0
// Address: 0x3428c0 - 0x342908
void sub_003428C0_0x3428c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003428C0_0x3428c0");
#endif

    switch (ctx->pc) {
        case 0x3428c8u: goto label_3428c8;
        default: break;
    }

    ctx->pc = 0x3428c0u;

    // 0x3428c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3428c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3428c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3428c8:
    // 0x3428c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3428cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3428CCu;
    {
        const bool branch_taken_0x3428cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3428D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428CCu;
        // 0x3428d0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428cc) {
            ctx->pc = 0x3428E8u;
            goto label_3428e8;
        }
    }
    ctx->pc = 0x3428D4u;
    // 0x3428d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3428d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3428d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3428dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3428DCu;
    {
        const bool branch_taken_0x3428dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3428E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428DCu;
        // 0x3428e0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428dc) {
            ctx->pc = 0x342900u;
            goto label_342900;
        }
    }
    ctx->pc = 0x3428E4u;
    // 0x3428e4: 0x0  nop
    ctx->pc = 0x3428e4u;
    // NOP
label_3428e8:
    // 0x3428e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3428e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3428ec: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x3428ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x3428f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3428F0u;
    {
        const bool branch_taken_0x3428f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3428F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428F0u;
        // 0x3428f4: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428f0) {
            ctx->pc = 0x3428C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3428c8;
        }
    }
    ctx->pc = 0x3428F8u;
    // 0x3428f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3428f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428fc: 0x0  nop
    ctx->pc = 0x3428fcu;
    // NOP
label_342900:
    // 0x342900: 0x3e00008  jr          $ra
    ctx->pc = 0x342900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342908u;
}
