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

// Function: sub_00129168
// Address: 0x129168 - 0x12919c
void sub_00129168_0x129168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129168_0x129168");
#endif

    switch (ctx->pc) {
        case 0x129188u: goto label_129188;
        case 0x129190u: goto label_129190;
        default: break;
    }

    ctx->pc = 0x129168u;

    // 0x129168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12916c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12916cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129170: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x129174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129178: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x129178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12917c: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x12917cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x129180: 0xc04a0c6  jal         func_128318
    ctx->pc = 0x129180u;
    SET_GPR_U32(ctx, 31, 0x129188u);
    ctx->pc = 0x129184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129180u;
    // 0x129184: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128318u, 0x129180u, 0x129188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129188u;
label_129188:
    // 0x129188: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x129188u;
    SET_GPR_U32(ctx, 31, 0x129190u);
    ctx->pc = 0x12918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129188u;
    // 0x12918c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x129188u, 0x129190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129190u;
label_129190:
    // 0x129190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129194: 0x3e00008  jr          $ra
    ctx->pc = 0x129194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129194u;
        // 0x129198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12919Cu;
}
