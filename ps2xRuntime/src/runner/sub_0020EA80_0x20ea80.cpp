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

// Function: sub_0020EA80
// Address: 0x20ea80 - 0x20eaa0
void sub_0020EA80_0x20ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EA80_0x20ea80");
#endif

    switch (ctx->pc) {
        case 0x20ea90u: goto label_20ea90;
        default: break;
    }

    ctx->pc = 0x20ea80u;

    // 0x20ea80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ea84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ea88: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20EA88u;
    SET_GPR_U32(ctx, 31, 0x20EA90u);
    ctx->pc = 0x20EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA88u;
    // 0x20ea8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20EA88u, 0x20EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA90u;
label_20ea90:
    // 0x20ea90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ea94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x20EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA98u;
        // 0x20ea9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EAA0u;
}
