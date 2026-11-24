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

// Function: sub_0029F8A0
// Address: 0x29f8a0 - 0x29f8e4
void sub_0029F8A0_0x29f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F8A0_0x29f8a0");
#endif

    switch (ctx->pc) {
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8d0u: goto label_29f8d0;
        default: break;
    }

    ctx->pc = 0x29f8a0u;

    // 0x29f8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29f8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29f8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29f8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f8b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f8b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8b8: 0xc0a7e3c  jal         func_29F8F0
    ctx->pc = 0x29F8B8u;
    SET_GPR_U32(ctx, 31, 0x29F8C0u);
    ctx->pc = 0x29F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8B8u;
    // 0x29f8bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F8F0u, 0x29F8B8u, 0x29F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8C0u;
label_29f8c0:
    // 0x29f8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f8c8: 0xc0a7e3c  jal         func_29F8F0
    ctx->pc = 0x29F8C8u;
    SET_GPR_U32(ctx, 31, 0x29F8D0u);
    ctx->pc = 0x29F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8C8u;
    // 0x29f8cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F8F0u, 0x29F8C8u, 0x29F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8D0u;
label_29f8d0:
    // 0x29f8d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29f8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F8DCu;
        // 0x29f8e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F8E4u;
}
