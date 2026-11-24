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

// Function: sub_002A4840
// Address: 0x2a4840 - 0x2a4880
void sub_002A4840_0x2a4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4840_0x2a4840");
#endif

    switch (ctx->pc) {
        case 0x2a4874u: goto label_2a4874;
        default: break;
    }

    ctx->pc = 0x2a4840u;

    // 0x2a4840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4844: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a484c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a484cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4850: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a4854: 0x24052614  addiu       $a1, $zero, 0x2614
    ctx->pc = 0x2a4854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9748));
    // 0x2a4858: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a485c: 0x2406010c  addiu       $a2, $zero, 0x10C
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2a4860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4864: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4868: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4868u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a486c: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A486Cu;
    SET_GPR_U32(ctx, 31, 0x2A4874u);
    ctx->pc = 0x2A4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A486Cu;
    // 0x2a4870: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A486Cu, 0x2A4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4874u;
label_2a4874:
    // 0x2a4874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4878: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4878u;
        // 0x2a487c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4880u;
}
