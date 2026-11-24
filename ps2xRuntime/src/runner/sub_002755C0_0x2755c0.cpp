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

// Function: sub_002755C0
// Address: 0x2755c0 - 0x2755f0
void sub_002755C0_0x2755c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002755C0_0x2755c0");
#endif

    switch (ctx->pc) {
        case 0x2755d8u: goto label_2755d8;
        default: break;
    }

    ctx->pc = 0x2755c0u;

    // 0x2755c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2755c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2755c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2755c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2755c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2755cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2755ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2755d0: 0xc09d56c  jal         func_2755B0
    ctx->pc = 0x2755D0u;
    SET_GPR_U32(ctx, 31, 0x2755D8u);
    ctx->pc = 0x2755D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755D0u;
    // 0x2755d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755B0u, 0x2755D0u, 0x2755D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755D8u;
label_2755d8:
    // 0x2755d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2755d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2755dc: 0xa2030051  sb          $v1, 0x51($s0)
    ctx->pc = 0x2755dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x2755e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2755e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2755e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2755e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2755e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2755E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2755ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755E8u;
        // 0x2755ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2755F0u;
}
