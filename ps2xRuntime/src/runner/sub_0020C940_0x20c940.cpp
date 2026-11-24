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

// Function: sub_0020C940
// Address: 0x20c940 - 0x20c964
void sub_0020C940_0x20c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C940_0x20c940");
#endif

    ctx->pc = 0x20c940u;

    // 0x20c940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c944: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C944u;
    {
        const bool branch_taken_0x20c944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C944u;
        // 0x20c948: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c944) {
            ctx->pc = 0x20C958u;
            goto label_20c958;
        }
    }
    ctx->pc = 0x20C94Cu;
    // 0x20c94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c950: 0x808e0c6  j           func_238318
    ctx->pc = 0x20C950u;
    ctx->pc = 0x20C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C950u;
    // 0x20c954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238318u;
    sub_00238318_0x238318(rdram, ctx, runtime); return;
    ctx->pc = 0x20C958u;
label_20c958:
    // 0x20c958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c95c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C95Cu;
        // 0x20c960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C964u;
}
