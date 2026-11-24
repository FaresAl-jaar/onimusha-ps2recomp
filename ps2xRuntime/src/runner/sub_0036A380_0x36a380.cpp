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

// Function: sub_0036A380
// Address: 0x36a380 - 0x36a3b4
void sub_0036A380_0x36a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A380_0x36a380");
#endif

    switch (ctx->pc) {
        case 0x36a394u: goto label_36a394;
        case 0x36a39cu: goto label_36a39c;
        case 0x36a3a4u: goto label_36a3a4;
        default: break;
    }

    ctx->pc = 0x36a380u;

    // 0x36a380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a38c: 0xc0da888  jal         func_36A220
    ctx->pc = 0x36A38Cu;
    SET_GPR_U32(ctx, 31, 0x36A394u);
    ctx->pc = 0x36A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A38Cu;
    // 0x36a390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A220u, 0x36A38Cu, 0x36A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A394u;
label_36a394:
    // 0x36a394: 0xc0da85c  jal         func_36A170
    ctx->pc = 0x36A394u;
    SET_GPR_U32(ctx, 31, 0x36A39Cu);
    ctx->pc = 0x36A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A394u;
    // 0x36a398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A170u, 0x36A394u, 0x36A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A39Cu;
label_36a39c:
    // 0x36a39c: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x36A39Cu;
    SET_GPR_U32(ctx, 31, 0x36A3A4u);
    ctx->pc = 0x36A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A39Cu;
    // 0x36a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x36A39Cu, 0x36A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A3A4u;
label_36a3a4:
    // 0x36a3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3ACu;
        // 0x36a3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3B4u;
}
