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

// Function: sub_0020BA00
// Address: 0x20ba00 - 0x20ba28
void sub_0020BA00_0x20ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA00_0x20ba00");
#endif

    ctx->pc = 0x20ba00u;

    // 0x20ba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ba0c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x20ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x20ba10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BA10u;
    {
        const bool branch_taken_0x20ba10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA10u;
        // 0x20ba14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba10) {
            ctx->pc = 0x20BA20u;
            goto label_20ba20;
        }
    }
    ctx->pc = 0x20BA18u;
    // 0x20ba18: 0x8082e8a  j           func_20BA28
    ctx->pc = 0x20BA18u;
    ctx->pc = 0x20BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA18u;
    // 0x20ba1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA28u;
    sub_0020BA28_0x20ba28(rdram, ctx, runtime); return;
    ctx->pc = 0x20BA20u;
label_20ba20:
    // 0x20ba20: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA20u;
        // 0x20ba24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA28u;
}
