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

// Function: sub_00343270
// Address: 0x343270 - 0x34329c
void sub_00343270_0x343270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343270_0x343270");
#endif

    switch (ctx->pc) {
        case 0x343288u: goto label_343288;
        default: break;
    }

    ctx->pc = 0x343270u;

    // 0x343270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x343274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x343278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34327c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343280: 0xc0c0860  jal         func_302180
    ctx->pc = 0x343280u;
    SET_GPR_U32(ctx, 31, 0x343288u);
    ctx->pc = 0x343284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343280u;
    // 0x343284: 0x8f848b9c  lw          $a0, -0x7464($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x343280u, 0x343288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343288u;
label_343288:
    // 0x343288: 0xaf908b9c  sw          $s0, -0x7464($gp)
    ctx->pc = 0x343288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 16));
    // 0x34328c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34328cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343294: 0x3e00008  jr          $ra
    ctx->pc = 0x343294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343294u;
        // 0x343298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34329Cu;
}
