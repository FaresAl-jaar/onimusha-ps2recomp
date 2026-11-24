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

// Function: sub_003BD1D0
// Address: 0x3bd1d0 - 0x3bd1fc
void sub_003BD1D0_0x3bd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD1D0_0x3bd1d0");
#endif

    switch (ctx->pc) {
        case 0x3bd1e8u: goto label_3bd1e8;
        default: break;
    }

    ctx->pc = 0x3bd1d0u;

    // 0x3bd1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bd1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bd1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bd1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd1e0: 0xc0c0860  jal         func_302180
    ctx->pc = 0x3BD1E0u;
    SET_GPR_U32(ctx, 31, 0x3BD1E8u);
    ctx->pc = 0x3BD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD1E0u;
    // 0x3bd1e4: 0x8c842b8c  lw          $a0, 0x2B8C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x3BD1E0u, 0x3BD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD1E8u;
label_3bd1e8:
    // 0x3bd1e8: 0xae002b8c  sw          $zero, 0x2B8C($s0)
    ctx->pc = 0x3bd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11148), GPR_U32(ctx, 0));
    // 0x3bd1ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bd1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bd1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD1F4u;
        // 0x3bd1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD1FCu;
}
