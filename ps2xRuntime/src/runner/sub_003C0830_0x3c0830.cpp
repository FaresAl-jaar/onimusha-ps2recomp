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

// Function: sub_003C0830
// Address: 0x3c0830 - 0x3c0860
void sub_003C0830_0x3c0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0830_0x3c0830");
#endif

    switch (ctx->pc) {
        case 0x3c084cu: goto label_3c084c;
        default: break;
    }

    ctx->pc = 0x3c0830u;

    // 0x3c0830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c0834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c083c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3c083cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3c0840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c0840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c0844: 0xc049590  jal         func_125640
    ctx->pc = 0x3C0844u;
    SET_GPR_U32(ctx, 31, 0x3C084Cu);
    ctx->pc = 0x3C0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0844u;
    // 0x3c0848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C0844u, 0x3C084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C084Cu;
label_3c084c:
    // 0x3c084c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3c084cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c0850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c0854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c0858: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0858u;
        // 0x3c085c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0860u;
}
