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

// Function: sub_0032A7A0
// Address: 0x32a7a0 - 0x32a7e4
void sub_0032A7A0_0x32a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A7A0_0x32a7a0");
#endif

    switch (ctx->pc) {
        case 0x32a7c0u: goto label_32a7c0;
        default: break;
    }

    ctx->pc = 0x32a7a0u;

    // 0x32a7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32a7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a7b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32a7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a7b8: 0xc0ca9fc  jal         func_32A7F0
    ctx->pc = 0x32A7B8u;
    SET_GPR_U32(ctx, 31, 0x32A7C0u);
    ctx->pc = 0x32A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A7B8u;
    // 0x32a7bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7F0u, 0x32A7B8u, 0x32A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A7C0u;
label_32a7c0:
    // 0x32a7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a7c4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x32a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a7c8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x32a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x32a7cc: 0xaf908b6c  sw          $s0, -0x7494($gp)
    ctx->pc = 0x32a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 16));
    // 0x32a7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x32A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A7DCu;
        // 0x32a7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A7E4u;
}
