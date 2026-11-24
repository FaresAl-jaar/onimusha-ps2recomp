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

// Function: sub_003A2BA0
// Address: 0x3a2ba0 - 0x3a2c00
void sub_003A2BA0_0x3a2ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2BA0_0x3a2ba0");
#endif

    switch (ctx->pc) {
        case 0x3a2bb0u: goto label_3a2bb0;
        default: break;
    }

    ctx->pc = 0x3a2ba0u;

    // 0x3a2ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ba4: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3a2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3a2ba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2bac: 0x0  nop
    ctx->pc = 0x3a2bacu;
    // NOP
label_3a2bb0:
    // 0x3a2bb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2bb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A2BB4u;
    {
        const bool branch_taken_0x3a2bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bb4) {
            ctx->pc = 0x3A2BE0u;
            goto label_3a2be0;
        }
    }
    ctx->pc = 0x3A2BBCu;
    // 0x3a2bbc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a2bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2bc0: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2BC0u;
    {
        const bool branch_taken_0x3a2bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a2bc0) {
            ctx->pc = 0x3A2BE0u;
            goto label_3a2be0;
        }
    }
    ctx->pc = 0x3A2BC8u;
    // 0x3a2bc8: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x3a2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x3a2bcc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3a2bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3a2bd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2BD0u;
    {
        const bool branch_taken_0x3a2bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bd0) {
            ctx->pc = 0x3A2BE0u;
            goto label_3a2be0;
        }
    }
    ctx->pc = 0x3A2BD8u;
    // 0x3a2bd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2BD8u;
    {
        const bool branch_taken_0x3a2bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2bd8) {
            ctx->pc = 0x3A2BF8u;
            goto label_3a2bf8;
        }
    }
    ctx->pc = 0x3A2BE0u;
label_3a2be0:
    // 0x3a2be0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a2be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a2be4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3a2be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2be8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3A2BE8u;
    {
        const bool branch_taken_0x3a2be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BE8u;
        // 0x3a2bec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2be8) {
            ctx->pc = 0x3A2BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2bb0;
        }
    }
    ctx->pc = 0x3A2BF0u;
    // 0x3a2bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2bf4: 0x0  nop
    ctx->pc = 0x3a2bf4u;
    // NOP
label_3a2bf8:
    // 0x3a2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2C00u;
}
