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

// Function: sub_001452C0
// Address: 0x1452c0 - 0x1452ec
void sub_001452C0_0x1452c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452C0_0x1452c0");
#endif

    ctx->pc = 0x1452c0u;

    // 0x1452c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1452c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1452c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1452C4u;
    {
        const bool branch_taken_0x1452c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1452c4) {
            ctx->pc = 0x1452D8u;
            goto label_1452d8;
        }
    }
    ctx->pc = 0x1452CCu;
    // 0x1452cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1452CCu;
    {
        const bool branch_taken_0x1452cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452CCu;
        // 0x1452d0: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452cc) {
            ctx->pc = 0x1452E0u;
            goto label_1452e0;
        }
    }
    ctx->pc = 0x1452D4u;
    // 0x1452d4: 0x0  nop
    ctx->pc = 0x1452d4u;
    // NOP
label_1452d8:
    // 0x1452d8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1452d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1452dc: 0x0  nop
    ctx->pc = 0x1452dcu;
    // NOP
label_1452e0:
    // 0x1452e0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1452e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1452e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1452E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E4u;
        // 0x1452e8: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1452ECu;
}
