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

// Function: sub_00229960
// Address: 0x229960 - 0x229988
void sub_00229960_0x229960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229960_0x229960");
#endif

    ctx->pc = 0x229960u;

    // 0x229960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x229964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22996c: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x22996cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x229970: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229970u;
    {
        const bool branch_taken_0x229970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229970u;
        // 0x229974: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229970) {
            ctx->pc = 0x229980u;
            goto label_229980;
        }
    }
    ctx->pc = 0x229978u;
    // 0x229978: 0x808a5b4  j           func_2296D0
    ctx->pc = 0x229978u;
    ctx->pc = 0x22997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229978u;
    // 0x22997c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2296D0u;
    sub_002296D0_0x2296d0(rdram, ctx, runtime); return;
    ctx->pc = 0x229980u;
label_229980:
    // 0x229980: 0x3e00008  jr          $ra
    ctx->pc = 0x229980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229980u;
        // 0x229984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229988u;
}
