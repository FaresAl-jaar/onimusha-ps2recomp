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

// Function: sub_002F3570
// Address: 0x2f3570 - 0x2f35a8
void sub_002F3570_0x2f3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3570_0x2f3570");
#endif

    switch (ctx->pc) {
        case 0x2f3588u: goto label_2f3588;
        case 0x2f3590u: goto label_2f3590;
        case 0x2f3598u: goto label_2f3598;
        default: break;
    }

    ctx->pc = 0x2f3570u;

    // 0x2f3570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f3578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f357c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2f357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f3580: 0xc0bcd48  jal         func_2F3520
    ctx->pc = 0x2F3580u;
    SET_GPR_U32(ctx, 31, 0x2F3588u);
    ctx->pc = 0x2F3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3580u;
    // 0x2f3584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3520u, 0x2F3580u, 0x2F3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3588u;
label_2f3588:
    // 0x2f3588: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x2F3588u;
    SET_GPR_U32(ctx, 31, 0x2F3590u);
    ctx->pc = 0x2F358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3588u;
    // 0x2f358c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x2F3588u, 0x2F3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3590u;
label_2f3590:
    // 0x2f3590: 0xc0cc974  jal         func_3325D0
    ctx->pc = 0x2F3590u;
    SET_GPR_U32(ctx, 31, 0x2F3598u);
    ctx->pc = 0x2F3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3590u;
    // 0x2f3594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325D0u, 0x2F3590u, 0x2F3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3598u;
label_2f3598:
    // 0x2f3598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f359c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f35a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F35A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35A0u;
        // 0x2f35a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F35A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F35A8u;
}
