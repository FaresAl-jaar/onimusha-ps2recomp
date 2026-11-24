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

// Function: sub_00390100
// Address: 0x390100 - 0x390140
void sub_00390100_0x390100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390100_0x390100");
#endif

    ctx->pc = 0x390100u;

    // 0x390100: 0x8f838c44  lw          $v1, -0x73BC($gp)
    ctx->pc = 0x390100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
    // 0x390104: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x390104u;
    {
        const bool branch_taken_0x390104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390104) {
            ctx->pc = 0x390120u;
            goto label_390120;
        }
    }
    ctx->pc = 0x39010Cu;
    // 0x39010c: 0xac830560  sw          $v1, 0x560($a0)
    ctx->pc = 0x39010cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 3));
    // 0x390110: 0x8f838c44  lw          $v1, -0x73BC($gp)
    ctx->pc = 0x390110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937668)));
    // 0x390114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390114u;
    {
        const bool branch_taken_0x390114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390114u;
        // 0x390118: 0xac640564  sw          $a0, 0x564($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1380), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390114) {
            ctx->pc = 0x390128u;
            goto label_390128;
        }
    }
    ctx->pc = 0x39011Cu;
    // 0x39011c: 0x0  nop
    ctx->pc = 0x39011cu;
    // NOP
label_390120:
    // 0x390120: 0xaf848c40  sw          $a0, -0x73C0($gp)
    ctx->pc = 0x390120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 4));
    // 0x390124: 0xac800560  sw          $zero, 0x560($a0)
    ctx->pc = 0x390124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 0));
label_390128:
    // 0x390128: 0xac800564  sw          $zero, 0x564($a0)
    ctx->pc = 0x390128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1380), GPR_U32(ctx, 0));
    // 0x39012c: 0x8f838c48  lw          $v1, -0x73B8($gp)
    ctx->pc = 0x39012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x390130: 0xaf848c44  sw          $a0, -0x73BC($gp)
    ctx->pc = 0x390130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937668), GPR_U32(ctx, 4));
    // 0x390134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x390134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x390138: 0x3e00008  jr          $ra
    ctx->pc = 0x390138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390138u;
        // 0x39013c: 0xaf838c48  sw          $v1, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390140u;
}
