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

// Function: sub_001E66A0
// Address: 0x1e66a0 - 0x1e66f8
void sub_001E66A0_0x1e66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E66A0_0x1e66a0");
#endif

    switch (ctx->pc) {
        case 0x1e66bcu: goto label_1e66bc;
        case 0x1e66ccu: goto label_1e66cc;
        default: break;
    }

    ctx->pc = 0x1e66a0u;

    // 0x1e66a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e66a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e66a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e66a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e66ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e66b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e66b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e66b4: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E66B4u;
    SET_GPR_U32(ctx, 31, 0x1E66BCu);
    ctx->pc = 0x1E66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66B4u;
    // 0x1e66b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E66B4u, 0x1E66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E66BCu;
label_1e66bc:
    // 0x1e66bc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e66c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e66c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e66c4: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E66C4u;
    SET_GPR_U32(ctx, 31, 0x1E66CCu);
    ctx->pc = 0x1E66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66C4u;
    // 0x1e66c8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E66C4u, 0x1E66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E66CCu;
label_1e66cc:
    // 0x1e66cc: 0x7a230080  lq          $v1, 0x80($s1)
    ctx->pc = 0x1e66ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1e66d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e66d4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1e66d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1e66d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1e66d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e66dc: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1e66dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e66e0: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e66e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e66e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e66e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e66e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e66e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e66ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e66ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e66f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66F0u;
        // 0x1e66f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E66F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E66F8u;
}
