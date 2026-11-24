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

// Function: sub_00236F70
// Address: 0x236f70 - 0x236fbc
void sub_00236F70_0x236f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236F70_0x236f70");
#endif

    ctx->pc = 0x236f70u;

    // 0x236f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236f74: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x236f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x236f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236f7c: 0x24638028  addiu       $v1, $v1, -0x7FD8
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934568));
    // 0x236f80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x236f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C8028u));
    // 0x236f84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x236f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x236f88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x236F88u;
    {
        const bool branch_taken_0x236f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F88u;
        // 0x236f8c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f88) {
            ctx->pc = 0x236FB0u;
            goto label_236fb0;
        }
    }
    ctx->pc = 0x236F90u;
    // 0x236f90: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x236f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x236f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f9c: 0x24848048  addiu       $a0, $a0, -0x7FB8
    ctx->pc = 0x236f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934600));
    // 0x236fa0: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x236fa4: 0x8049590  j           func_125640
    ctx->pc = 0x236FA4u;
    ctx->pc = 0x236FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FA4u;
    // 0x236fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x236FACu;
    // 0x236fac: 0x0  nop
    ctx->pc = 0x236facu;
    // NOP
label_236fb0:
    // 0x236fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x236FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FB4u;
        // 0x236fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FBCu;
}
