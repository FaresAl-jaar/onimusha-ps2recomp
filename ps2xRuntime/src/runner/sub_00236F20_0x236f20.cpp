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

// Function: sub_00236F20
// Address: 0x236f20 - 0x236f68
void sub_00236F20_0x236f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236F20_0x236f20");
#endif

    switch (ctx->pc) {
        case 0x236f58u: goto label_236f58;
        default: break;
    }

    ctx->pc = 0x236f20u;

    // 0x236f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236f24: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x236f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x236f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236f2c: 0x24428028  addiu       $v0, $v0, -0x7FD8
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934568));
    // 0x236f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x236f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C8028u));
    // 0x236f38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x236f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x236f3c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236F3Cu;
    {
        const bool branch_taken_0x236f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x236F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F3Cu;
        // 0x236f40: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f3c) {
            ctx->pc = 0x236F58u;
            goto label_236f58;
        }
    }
    ctx->pc = 0x236F44u;
    // 0x236f44: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x236f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x236f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f4c: 0x24848048  addiu       $a0, $a0, -0x7FB8
    ctx->pc = 0x236f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934600));
    // 0x236f50: 0xc049590  jal         func_125640
    ctx->pc = 0x236F50u;
    SET_GPR_U32(ctx, 31, 0x236F58u);
    ctx->pc = 0x236F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F50u;
    // 0x236f54: 0x24060f00  addiu       $a2, $zero, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x236F50u, 0x236F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F58u;
label_236f58:
    // 0x236f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236f60: 0x3e00008  jr          $ra
    ctx->pc = 0x236F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F60u;
        // 0x236f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236F68u;
}
