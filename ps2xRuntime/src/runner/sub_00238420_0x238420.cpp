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

// Function: sub_00238420
// Address: 0x238420 - 0x238458
void sub_00238420_0x238420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238420_0x238420");
#endif

    switch (ctx->pc) {
        case 0x238434u: goto label_238434;
        case 0x23843cu: goto label_23843c;
        case 0x238444u: goto label_238444;
        default: break;
    }

    ctx->pc = 0x238420u;

    // 0x238420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23842c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23842Cu;
    SET_GPR_U32(ctx, 31, 0x238434u);
    ctx->pc = 0x238430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23842Cu;
    // 0x238430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23842Cu, 0x238434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238434u;
label_238434:
    // 0x238434: 0xc08e116  jal         func_238458
    ctx->pc = 0x238434u;
    SET_GPR_U32(ctx, 31, 0x23843Cu);
    ctx->pc = 0x238438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238434u;
    // 0x238438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238458u, 0x238434u, 0x23843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23843Cu;
label_23843c:
    // 0x23843c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23843Cu;
    SET_GPR_U32(ctx, 31, 0x238444u);
    ctx->pc = 0x238440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23843Cu;
    // 0x238440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23843Cu, 0x238444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238444u;
label_238444:
    // 0x238444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238448: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23844c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23844cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238450: 0x3e00008  jr          $ra
    ctx->pc = 0x238450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238450u;
        // 0x238454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238458u;
}
