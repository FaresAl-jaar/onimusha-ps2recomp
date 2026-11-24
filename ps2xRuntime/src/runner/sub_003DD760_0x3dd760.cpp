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

// Function: sub_003DD760
// Address: 0x3dd760 - 0x3dd798
void sub_003DD760_0x3dd760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD760_0x3dd760");
#endif

    switch (ctx->pc) {
        case 0x3dd770u: goto label_3dd770;
        default: break;
    }

    ctx->pc = 0x3dd760u;

    // 0x3dd760: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3dd760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DD764u;
    {
        const bool branch_taken_0x3dd764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD764u;
        // 0x3dd768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd764) {
            ctx->pc = 0x3DD780u;
            goto label_3dd780;
        }
    }
    ctx->pc = 0x3DD76Cu;
    // 0x3dd76c: 0x0  nop
    ctx->pc = 0x3dd76cu;
    // NOP
label_3dd770:
    // 0x3dd770: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x3dd770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3dd774: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3dd774u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3dd778: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3dd77c: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x3dd77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_3dd780:
    // 0x3dd780: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3dd780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd784: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3dd784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd788: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DD788u;
    {
        const bool branch_taken_0x3dd788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd788) {
            ctx->pc = 0x3DD770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd770;
        }
    }
    ctx->pc = 0x3DD790u;
    // 0x3dd790: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD798u;
}
