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

// Function: sub_00256790
// Address: 0x256790 - 0x2567c4
void sub_00256790_0x256790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256790_0x256790");
#endif

    switch (ctx->pc) {
        case 0x2567a4u: goto label_2567a4;
        case 0x2567b0u: goto label_2567b0;
        default: break;
    }

    ctx->pc = 0x256790u;

    // 0x256790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25679c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x25679Cu;
    SET_GPR_U32(ctx, 31, 0x2567A4u);
    ctx->pc = 0x2567A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25679Cu;
    // 0x2567a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x25679Cu, 0x2567A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567A4u;
label_2567a4:
    // 0x2567a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2567a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567a8: 0xc0979a8  jal         func_25E6A0
    ctx->pc = 0x2567A8u;
    SET_GPR_U32(ctx, 31, 0x2567B0u);
    ctx->pc = 0x2567ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567A8u;
    // 0x2567ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E6A0u, 0x2567A8u, 0x2567B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567B0u;
label_2567b0:
    // 0x2567b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2567b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2567b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2567b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2567b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2567bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2567BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2567C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567BCu;
        // 0x2567c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2567BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2567C4u;
}
