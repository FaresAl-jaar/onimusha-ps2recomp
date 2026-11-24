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

// Function: sub_003DD720
// Address: 0x3dd720 - 0x3dd758
void sub_003DD720_0x3dd720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD720_0x3dd720");
#endif

    switch (ctx->pc) {
        case 0x3dd730u: goto label_3dd730;
        default: break;
    }

    ctx->pc = 0x3dd720u;

    // 0x3dd720: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3dd720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DD724u;
    {
        const bool branch_taken_0x3dd724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD724u;
        // 0x3dd728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd724) {
            ctx->pc = 0x3DD740u;
            goto label_3dd740;
        }
    }
    ctx->pc = 0x3DD72Cu;
    // 0x3dd72c: 0x0  nop
    ctx->pc = 0x3dd72cu;
    // NOP
label_3dd730:
    // 0x3dd730: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3dd730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3dd734: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3dd734u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3dd738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dd73c: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x3dd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_3dd740:
    // 0x3dd740: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3dd740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd744: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3dd744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd748: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DD748u;
    {
        const bool branch_taken_0x3dd748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd748) {
            ctx->pc = 0x3DD730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd730;
        }
    }
    ctx->pc = 0x3DD750u;
    // 0x3dd750: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD758u;
}
