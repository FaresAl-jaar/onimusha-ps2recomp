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

// Function: sub_001D0D40
// Address: 0x1d0d40 - 0x1d0d70
void sub_001D0D40_0x1d0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0D40_0x1d0d40");
#endif

    switch (ctx->pc) {
        case 0x1d0d58u: goto label_1d0d58;
        default: break;
    }

    ctx->pc = 0x1d0d40u;

    // 0x1d0d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d50: 0xc0742b8  jal         func_1D0AE0
    ctx->pc = 0x1D0D50u;
    SET_GPR_U32(ctx, 31, 0x1D0D58u);
    ctx->pc = 0x1D0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D50u;
    // 0x1d0d54: 0x278487f4  addiu       $a0, $gp, -0x780C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AE0u, 0x1D0D50u, 0x1D0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D58u;
label_1d0d58:
    // 0x1d0d58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d0d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D68u;
        // 0x1d0d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D70u;
}
