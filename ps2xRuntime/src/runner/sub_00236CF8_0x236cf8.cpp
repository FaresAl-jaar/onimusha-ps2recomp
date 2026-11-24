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

// Function: sub_00236CF8
// Address: 0x236cf8 - 0x236d24
void sub_00236CF8_0x236cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236CF8_0x236cf8");
#endif

    ctx->pc = 0x236cf8u;

    // 0x236cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D00u;
        // 0x236d04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236D18u;
            goto label_236d18;
        }
    }
    ctx->pc = 0x236D08u;
    // 0x236d08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d10: 0x808af26  j           func_22BC98
    ctx->pc = 0x236D10u;
    ctx->pc = 0x236D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D10u;
    // 0x236d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC98u;
    sub_0022BC98_0x22bc98(rdram, ctx, runtime); return;
    ctx->pc = 0x236D18u;
label_236d18:
    // 0x236d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x236D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D1Cu;
        // 0x236d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D24u;
}
