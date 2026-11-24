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

// Function: sub_001452F0
// Address: 0x1452f0 - 0x145330
void sub_001452F0_0x1452f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452F0_0x1452f0");
#endif

    switch (ctx->pc) {
        case 0x1452f8u: goto label_1452f8;
        default: break;
    }

    ctx->pc = 0x1452f0u;

    // 0x1452f0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1452F0u;
    {
        const bool branch_taken_0x1452f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452f0) {
            ctx->pc = 0x145320u;
            goto label_145320;
        }
    }
    ctx->pc = 0x1452F8u;
label_1452f8:
    // 0x1452f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1452fc: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1452FCu;
    {
        const bool branch_taken_0x1452fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x145300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452FCu;
        // 0x145300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452fc) {
            ctx->pc = 0x145310u;
            goto label_145310;
        }
    }
    ctx->pc = 0x145304u;
    // 0x145304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145304u;
    {
        const bool branch_taken_0x145304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145304u;
        // 0x145308: 0xa0a20009  sb          $v0, 0x9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145304) {
            ctx->pc = 0x145328u;
            goto label_145328;
        }
    }
    ctx->pc = 0x14530Cu;
    // 0x14530c: 0x0  nop
    ctx->pc = 0x14530cu;
    // NOP
label_145310:
    // 0x145310: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x145310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145314: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x145314u;
    {
        const bool branch_taken_0x145314 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x145314) {
            ctx->pc = 0x1452F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1452f8;
        }
    }
    ctx->pc = 0x14531Cu;
    // 0x14531c: 0x0  nop
    ctx->pc = 0x14531cu;
    // NOP
label_145320:
    // 0x145320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x145320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145324: 0x0  nop
    ctx->pc = 0x145324u;
    // NOP
label_145328:
    // 0x145328: 0x3e00008  jr          $ra
    ctx->pc = 0x145328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145330u;
}
