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

// Function: sub_002A4390
// Address: 0x2a4390 - 0x2a43d0
void sub_002A4390_0x2a4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4390_0x2a4390");
#endif

    switch (ctx->pc) {
        case 0x2a43c4u: goto label_2a43c4;
        default: break;
    }

    ctx->pc = 0x2a4390u;

    // 0x2a4390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4394: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a439c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a439cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43a0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a43a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a43a4: 0x24051514  addiu       $a1, $zero, 0x1514
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5396));
    // 0x2a43a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a43a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43ac: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x2a43acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2a43b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43b4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a43b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a43b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43bc: 0xc097c7c  jal         func_25F1F0
    ctx->pc = 0x2A43BCu;
    SET_GPR_U32(ctx, 31, 0x2A43C4u);
    ctx->pc = 0x2A43C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43BCu;
    // 0x2a43c0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1F0u, 0x2A43BCu, 0x2A43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43C4u;
label_2a43c4:
    // 0x2a43c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a43c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a43c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A43C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43C8u;
        // 0x2a43cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A43C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A43D0u;
}
