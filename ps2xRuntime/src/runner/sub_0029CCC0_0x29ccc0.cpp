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

// Function: sub_0029CCC0
// Address: 0x29ccc0 - 0x29cd10
void sub_0029CCC0_0x29ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CCC0_0x29ccc0");
#endif

    ctx->pc = 0x29ccc0u;

    // 0x29ccc0: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x29ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29ccc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ccc8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CCC8u;
    {
        const bool branch_taken_0x29ccc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCC8u;
        // 0x29cccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccc8) {
            ctx->pc = 0x29CCF0u;
            goto label_29ccf0;
        }
    }
    ctx->pc = 0x29CCD0u;
    // 0x29ccd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CCD0u;
    {
        const bool branch_taken_0x29ccd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29ccd0) {
            ctx->pc = 0x29CCE0u;
            goto label_29cce0;
        }
    }
    ctx->pc = 0x29CCD8u;
    // 0x29ccd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29CCD8u;
    {
        const bool branch_taken_0x29ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ccd8) {
            ctx->pc = 0x29CD00u;
            goto label_29cd00;
        }
    }
    ctx->pc = 0x29CCE0u;
label_29cce0:
    // 0x29cce0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29cce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29cce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29CCE4u;
    {
        const bool branch_taken_0x29cce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCE4u;
        // 0x29cce8: 0x8c225018  lw          $v0, 0x5018($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cce4) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CCECu;
    // 0x29ccec: 0x0  nop
    ctx->pc = 0x29ccecu;
    // NOP
label_29ccf0:
    // 0x29ccf0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ccf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ccf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CCF4u;
    {
        const bool branch_taken_0x29ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCF4u;
        // 0x29ccf8: 0x8c224fb8  lw          $v0, 0x4FB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccf4) {
            ctx->pc = 0x29CD08u;
            goto label_29cd08;
        }
    }
    ctx->pc = 0x29CCFCu;
    // 0x29ccfc: 0x0  nop
    ctx->pc = 0x29ccfcu;
    // NOP
label_29cd00:
    // 0x29cd00: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x29cd04: 0x24424fd0  addiu       $v0, $v0, 0x4FD0
    ctx->pc = 0x29cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20432));
label_29cd08:
    // 0x29cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x29CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CD10u;
}
