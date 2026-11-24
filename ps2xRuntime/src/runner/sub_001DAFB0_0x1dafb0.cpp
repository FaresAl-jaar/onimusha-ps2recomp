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

// Function: sub_001DAFB0
// Address: 0x1dafb0 - 0x1dafdc
void sub_001DAFB0_0x1dafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAFB0_0x1dafb0");
#endif

    switch (ctx->pc) {
        case 0x1dafb8u: goto label_1dafb8;
        default: break;
    }

    ctx->pc = 0x1dafb0u;

    // 0x1dafb0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAFB0u;
    {
        const bool branch_taken_0x1dafb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dafb0) {
            ctx->pc = 0x1DAFD4u;
            goto label_1dafd4;
        }
    }
    ctx->pc = 0x1DAFB8u;
label_1dafb8:
    // 0x1dafb8: 0x78a10000  lq          $at, 0x0($a1)
    ctx->pc = 0x1dafb8u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dafbc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1dafc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1dafc4: 0x7c810000  sq          $at, 0x0($a0)
    ctx->pc = 0x1dafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 1));
    // 0x1dafc8: 0x0  nop
    ctx->pc = 0x1dafc8u;
    // NOP
    // 0x1dafcc: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DAFCCu;
    {
        const bool branch_taken_0x1dafcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFCCu;
        // 0x1dafd0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafcc) {
            ctx->pc = 0x1DAFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dafb8;
        }
    }
    ctx->pc = 0x1DAFD4u;
label_1dafd4:
    // 0x1dafd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAFDCu;
}
