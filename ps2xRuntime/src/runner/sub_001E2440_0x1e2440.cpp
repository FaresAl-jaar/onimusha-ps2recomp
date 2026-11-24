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

// Function: sub_001E2440
// Address: 0x1e2440 - 0x1e2498
void sub_001E2440_0x1e2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2440_0x1e2440");
#endif

    switch (ctx->pc) {
        case 0x1e245cu: goto label_1e245c;
        case 0x1e246cu: goto label_1e246c;
        default: break;
    }

    ctx->pc = 0x1e2440u;

    // 0x1e2440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e244c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2454: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E2454u;
    SET_GPR_U32(ctx, 31, 0x1E245Cu);
    ctx->pc = 0x1E2458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2454u;
    // 0x1e2458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E2454u, 0x1E245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E245Cu;
label_1e245c:
    // 0x1e245c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e2460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2464: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E2464u;
    SET_GPR_U32(ctx, 31, 0x1E246Cu);
    ctx->pc = 0x1E2468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2464u;
    // 0x1e2468: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E2464u, 0x1E246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E246Cu;
label_1e246c:
    // 0x1e246c: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1e246cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e2470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2474: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1e2474u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1e2478: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1e2478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e247c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1e247cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2480: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e2480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e2484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e248c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e248cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2490: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2490u;
        // 0x1e2494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2498u;
}
