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

// Function: sub_003228D0
// Address: 0x3228d0 - 0x322910
void sub_003228D0_0x3228d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003228D0_0x3228d0");
#endif

    switch (ctx->pc) {
        case 0x3228e8u: goto label_3228e8;
        case 0x3228f8u: goto label_3228f8;
        default: break;
    }

    ctx->pc = 0x3228d0u;

    // 0x3228d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3228d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3228d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3228d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3228d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3228d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3228dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3228dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228e0: 0xc0c8a00  jal         func_322800
    ctx->pc = 0x3228E0u;
    SET_GPR_U32(ctx, 31, 0x3228E8u);
    ctx->pc = 0x3228E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228E0u;
    // 0x3228e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322800u, 0x3228E0u, 0x3228E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228E8u;
label_3228e8:
    // 0x3228e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3228e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3228ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228f0: 0xc0c8988  jal         func_322620
    ctx->pc = 0x3228F0u;
    SET_GPR_U32(ctx, 31, 0x3228F8u);
    ctx->pc = 0x3228F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3228F0u;
    // 0x3228f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322620u, 0x3228F0u, 0x3228F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228F8u;
label_3228f8:
    // 0x3228f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3228f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3228fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322908: 0x3e00008  jr          $ra
    ctx->pc = 0x322908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322908u;
        // 0x32290c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322910u;
}
