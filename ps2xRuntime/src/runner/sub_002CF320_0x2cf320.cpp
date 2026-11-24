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

// Function: sub_002CF320
// Address: 0x2cf320 - 0x2cf380
void sub_002CF320_0x2cf320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF320_0x2cf320");
#endif

    switch (ctx->pc) {
        case 0x2cf330u: goto label_2cf330;
        default: break;
    }

    ctx->pc = 0x2cf320u;

    // 0x2cf320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf324: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cf328: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cf328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf32c: 0x0  nop
    ctx->pc = 0x2cf32cu;
    // NOP
label_2cf330:
    // 0x2cf330: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF334u;
    {
        const bool branch_taken_0x2cf334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf334) {
            ctx->pc = 0x2CF360u;
            goto label_2cf360;
        }
    }
    ctx->pc = 0x2CF33Cu;
    // 0x2cf33c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cf33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf340: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF340u;
    {
        const bool branch_taken_0x2cf340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cf340) {
            ctx->pc = 0x2CF360u;
            goto label_2cf360;
        }
    }
    ctx->pc = 0x2CF348u;
    // 0x2cf348: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x2cf34c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2cf34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2cf350: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF350u;
    {
        const bool branch_taken_0x2cf350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf350) {
            ctx->pc = 0x2CF360u;
            goto label_2cf360;
        }
    }
    ctx->pc = 0x2CF358u;
    // 0x2cf358: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF358u;
    {
        const bool branch_taken_0x2cf358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf358) {
            ctx->pc = 0x2CF378u;
            goto label_2cf378;
        }
    }
    ctx->pc = 0x2CF360u;
label_2cf360:
    // 0x2cf360: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cf360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cf364: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2cf364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cf368: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CF368u;
    {
        const bool branch_taken_0x2cf368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF368u;
        // 0x2cf36c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf368) {
            ctx->pc = 0x2CF330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf330;
        }
    }
    ctx->pc = 0x2CF370u;
    // 0x2cf370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf374: 0x0  nop
    ctx->pc = 0x2cf374u;
    // NOP
label_2cf378:
    // 0x2cf378: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF380u;
}
