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

// Function: sub_002A9300
// Address: 0x2a9300 - 0x2a9340
void sub_002A9300_0x2a9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9300_0x2a9300");
#endif

    switch (ctx->pc) {
        case 0x2a9334u: goto label_2a9334;
        default: break;
    }

    ctx->pc = 0x2a9300u;

    // 0x2a9300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9304: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9308: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a9308u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a930c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9310: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9314: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a931c: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x2a931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2a9320: 0x34457d74  ori         $a1, $v0, 0x7D74
    ctx->pc = 0x2a9320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32116);
    // 0x2a9324: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9328: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a932c: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A932Cu;
    SET_GPR_U32(ctx, 31, 0x2A9334u);
    ctx->pc = 0x2A9330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A932Cu;
    // 0x2a9330: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A932Cu, 0x2A9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9334u;
label_2a9334:
    // 0x2a9334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9338: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9338u;
        // 0x2a933c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9340u;
}
