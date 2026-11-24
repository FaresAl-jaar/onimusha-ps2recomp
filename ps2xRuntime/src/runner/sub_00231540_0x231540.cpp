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

// Function: sub_00231540
// Address: 0x231540 - 0x231578
void sub_00231540_0x231540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231540_0x231540");
#endif

    switch (ctx->pc) {
        case 0x231554u: goto label_231554;
        case 0x23155cu: goto label_23155c;
        case 0x231564u: goto label_231564;
        default: break;
    }

    ctx->pc = 0x231540u;

    // 0x231540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23154c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x23154Cu;
    SET_GPR_U32(ctx, 31, 0x231554u);
    ctx->pc = 0x231550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23154Cu;
    // 0x231550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x23154Cu, 0x231554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231554u;
label_231554:
    // 0x231554: 0xc08c55e  jal         func_231578
    ctx->pc = 0x231554u;
    SET_GPR_U32(ctx, 31, 0x23155Cu);
    ctx->pc = 0x231558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231554u;
    // 0x231558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231578u, 0x231554u, 0x23155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23155Cu;
label_23155c:
    // 0x23155c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x23155Cu;
    SET_GPR_U32(ctx, 31, 0x231564u);
    ctx->pc = 0x231560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23155Cu;
    // 0x231560: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x23155Cu, 0x231564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231564u;
label_231564:
    // 0x231564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23156c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23156cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231570: 0x3e00008  jr          $ra
    ctx->pc = 0x231570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231570u;
        // 0x231574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231578u;
}
