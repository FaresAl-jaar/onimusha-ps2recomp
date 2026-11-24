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

// Function: sub_00228DD0
// Address: 0x228dd0 - 0x228e18
void sub_00228DD0_0x228dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228DD0_0x228dd0");
#endif

    ctx->pc = 0x228dd0u;

    // 0x228dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228dd4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228DD4u;
    {
        const bool branch_taken_0x228dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DD4u;
        // 0x228dd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dd4) {
            ctx->pc = 0x228DF0u;
            goto label_228df0;
        }
    }
    ctx->pc = 0x228DDCu;
    // 0x228ddc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228de4: 0x24849858  addiu       $a0, $a0, -0x67A8
    ctx->pc = 0x228de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940760));
    // 0x228de8: 0x808a0d4  j           func_228350
    ctx->pc = 0x228DE8u;
    ctx->pc = 0x228DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228DE8u;
    // 0x228dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228DF0u;
label_228df0:
    // 0x228df0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x228DF0u;
    {
        const bool branch_taken_0x228df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x228df0) {
            ctx->pc = 0x228E00u;
            goto label_228e00;
        }
    }
    ctx->pc = 0x228DF8u;
    // 0x228df8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x228df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x228dfc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x228dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_228e00:
    // 0x228e00: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x228E00u;
    {
        const bool branch_taken_0x228e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E00u;
        // 0x228e04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e00) {
            ctx->pc = 0x228E10u;
            goto label_228e10;
        }
    }
    ctx->pc = 0x228E08u;
    // 0x228e08: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x228e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x228e0c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x228e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_228e10:
    // 0x228e10: 0x3e00008  jr          $ra
    ctx->pc = 0x228E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E10u;
        // 0x228e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E18u;
}
