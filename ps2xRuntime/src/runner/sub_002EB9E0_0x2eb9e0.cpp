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

// Function: sub_002EB9E0
// Address: 0x2eb9e0 - 0x2eba18
void sub_002EB9E0_0x2eb9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB9E0_0x2eb9e0");
#endif

    ctx->pc = 0x2eb9e0u;

    // 0x2eb9e0: 0x9782881c  lhu         $v0, -0x77E4($gp)
    ctx->pc = 0x2eb9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x2eb9e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB9E4u;
    {
        const bool branch_taken_0x2eb9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB9E4u;
        // 0x2eb9e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb9e4) {
            ctx->pc = 0x2EBA00u;
            goto label_2eba00;
        }
    }
    ctx->pc = 0x2EB9ECu;
    // 0x2eb9ec: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x2eb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x2eb9f0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2eb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2eb9f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eb9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb9f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB9F8u;
    {
        const bool branch_taken_0x2eb9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9f8) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EBA00u;
label_2eba00:
    // 0x2eba00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBA00u;
    {
        const bool branch_taken_0x2eba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA00u;
        // 0x2eba04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba00) {
            ctx->pc = 0x2EBA10u;
            goto label_2eba10;
        }
    }
    ctx->pc = 0x2EBA08u;
label_2eba08:
    // 0x2eba08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eba0c: 0x0  nop
    ctx->pc = 0x2eba0cu;
    // NOP
label_2eba10:
    // 0x2eba10: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBA18u;
}
