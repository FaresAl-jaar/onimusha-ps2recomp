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

// Function: sub_002E1060
// Address: 0x2e1060 - 0x2e1088
void sub_002E1060_0x2e1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1060_0x2e1060");
#endif

    ctx->pc = 0x2e1060u;

    // 0x2e1060: 0x90820033  lbu         $v0, 0x33($a0)
    ctx->pc = 0x2e1060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x2e1064: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2e1064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e1068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1068u;
    {
        const bool branch_taken_0x2e1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1068u;
        // 0x2e106c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1068) {
            ctx->pc = 0x2E1078u;
            goto label_2e1078;
        }
    }
    ctx->pc = 0x2E1070u;
    // 0x2e1070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1070u;
    {
        const bool branch_taken_0x2e1070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1070) {
            ctx->pc = 0x2E1080u;
            goto label_2e1080;
        }
    }
    ctx->pc = 0x2E1078u;
label_2e1078:
    // 0x2e1078: 0x90820600  lbu         $v0, 0x600($a0)
    ctx->pc = 0x2e1078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x2e107c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e107cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e1080:
    // 0x2e1080: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1088u;
}
