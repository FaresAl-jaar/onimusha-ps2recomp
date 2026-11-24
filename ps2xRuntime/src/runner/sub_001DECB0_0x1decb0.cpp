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

// Function: sub_001DECB0
// Address: 0x1decb0 - 0x1decfc
void sub_001DECB0_0x1decb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DECB0_0x1decb0");
#endif

    switch (ctx->pc) {
        case 0x1decd4u: goto label_1decd4;
        default: break;
    }

    ctx->pc = 0x1decb0u;

    // 0x1decb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1decb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1decb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1decb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1decb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1decbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1decbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1decc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1decc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1decc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1decc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1decc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deccc: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DECCCu;
    SET_GPR_U32(ctx, 31, 0x1DECD4u);
    ctx->pc = 0x1DECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DECCCu;
    // 0x1decd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DECCCu, 0x1DECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DECD4u;
label_1decd4:
    // 0x1decd4: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1decd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1decd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1decdc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1decdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1dece0: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x1dece0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x1dece4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dece4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dece8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dece8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1decec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dececu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1decf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1decf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1decf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DECF4u;
        // 0x1decf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DECFCu;
}
