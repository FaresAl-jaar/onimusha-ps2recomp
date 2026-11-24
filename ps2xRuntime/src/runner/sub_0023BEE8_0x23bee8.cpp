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

// Function: sub_0023BEE8
// Address: 0x23bee8 - 0x23bf1c
void sub_0023BEE8_0x23bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BEE8_0x23bee8");
#endif

    ctx->pc = 0x23bee8u;

    // 0x23bee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23beec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bef0: 0xa0850098  sb          $a1, 0x98($a0)
    ctx->pc = 0x23bef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x23bef4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23bef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BEF8u;
    {
        const bool branch_taken_0x23bef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF8u;
        // 0x23befc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bef8) {
            ctx->pc = 0x23BF10u;
            goto label_23bf10;
        }
    }
    ctx->pc = 0x23BF00u;
    // 0x23bf00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf04: 0x808daa8  j           func_236AA0
    ctx->pc = 0x23BF04u;
    ctx->pc = 0x23BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF04u;
    // 0x23bf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AA0u;
    sub_00236AA0_0x236aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x23BF0Cu;
    // 0x23bf0c: 0x0  nop
    ctx->pc = 0x23bf0cu;
    // NOP
label_23bf10:
    // 0x23bf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf14: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF14u;
        // 0x23bf18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF1Cu;
}
