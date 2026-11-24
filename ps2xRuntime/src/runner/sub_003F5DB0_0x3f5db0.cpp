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

// Function: sub_003F5DB0
// Address: 0x3f5db0 - 0x3f5dd8
void sub_003F5DB0_0x3f5db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5DB0_0x3f5db0");
#endif

    switch (ctx->pc) {
        case 0x3f5dc0u: goto label_3f5dc0;
        default: break;
    }

    ctx->pc = 0x3f5db0u;

    // 0x3f5db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f5db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f5db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f5db8: 0xc0fd47c  jal         func_3F51F0
    ctx->pc = 0x3F5DB8u;
    SET_GPR_U32(ctx, 31, 0x3F5DC0u);
    ctx->pc = 0x3F51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F51F0u, 0x3F5DB8u, 0x3F5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5DC0u;
label_3f5dc0:
    // 0x3f5dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5dc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3f5dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f5dc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f5dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3f5dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3f5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f5dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DD0u;
        // 0x3f5dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5DD8u;
}
