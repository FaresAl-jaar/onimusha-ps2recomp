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

// Function: sub_0023B550
// Address: 0x23b550 - 0x23b588
void sub_0023B550_0x23b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B550_0x23b550");
#endif

    switch (ctx->pc) {
        case 0x23b564u: goto label_23b564;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b574u: goto label_23b574;
        default: break;
    }

    ctx->pc = 0x23b550u;

    // 0x23b550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b55c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B55Cu;
    SET_GPR_U32(ctx, 31, 0x23B564u);
    ctx->pc = 0x23B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B55Cu;
    // 0x23b560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B55Cu, 0x23B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B564u;
label_23b564:
    // 0x23b564: 0xc08ed62  jal         func_23B588
    ctx->pc = 0x23B564u;
    SET_GPR_U32(ctx, 31, 0x23B56Cu);
    ctx->pc = 0x23B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B564u;
    // 0x23b568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B588u, 0x23B564u, 0x23B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B56Cu;
label_23b56c:
    // 0x23b56c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B56Cu;
    SET_GPR_U32(ctx, 31, 0x23B574u);
    ctx->pc = 0x23B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B56Cu;
    // 0x23b570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B56Cu, 0x23B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B574u;
label_23b574:
    // 0x23b574: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b57c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b580: 0x3e00008  jr          $ra
    ctx->pc = 0x23B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B580u;
        // 0x23b584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B588u;
}
