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

// Function: sub_00132750
// Address: 0x132750 - 0x1327bc
void sub_00132750_0x132750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132750_0x132750");
#endif

    switch (ctx->pc) {
        case 0x132778u: goto label_132778;
        case 0x132780u: goto label_132780;
        case 0x132788u: goto label_132788;
        case 0x132790u: goto label_132790;
        case 0x13279cu: goto label_13279c;
        case 0x1327a4u: goto label_1327a4;
        case 0x1327b0u: goto label_1327b0;
        default: break;
    }

    ctx->pc = 0x132750u;

    // 0x132750: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x132750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x132754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13275c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x132760: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x132760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x132764: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x132764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x132768: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x132768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13276c: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x13276cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x132770: 0xc040c62  jal         func_103188
    ctx->pc = 0x132770u;
    SET_GPR_U32(ctx, 31, 0x132778u);
    ctx->pc = 0x132774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132770u;
    // 0x132774: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103188u, 0x132770u, 0x132778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132778u;
label_132778:
    // 0x132778: 0xc043898  jal         func_10E260
    ctx->pc = 0x132778u;
    SET_GPR_U32(ctx, 31, 0x132780u);
    ctx->pc = 0x13277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132778u;
    // 0x13277c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x132778u, 0x132780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132780u;
label_132780:
    // 0x132780: 0xc040d08  jal         func_103420
    ctx->pc = 0x132780u;
    SET_GPR_U32(ctx, 31, 0x132788u);
    ctx->pc = 0x132784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132780u;
    // 0x132784: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x132780u, 0x132788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132788u;
label_132788:
    // 0x132788: 0xc040c28  jal         func_1030A0
    ctx->pc = 0x132788u;
    SET_GPR_U32(ctx, 31, 0x132790u);
    ctx->pc = 0x13278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132788u;
    // 0x13278c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1030A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1030A0u, 0x132788u, 0x132790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132790u;
label_132790:
    // 0x132790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132794: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x132794u;
    SET_GPR_U32(ctx, 31, 0x13279Cu);
    ctx->pc = 0x132798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132794u;
    // 0x132798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x132794u, 0x13279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13279Cu;
label_13279c:
    // 0x13279c: 0xc040c28  jal         func_1030A0
    ctx->pc = 0x13279Cu;
    SET_GPR_U32(ctx, 31, 0x1327A4u);
    ctx->pc = 0x1327A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13279Cu;
    // 0x1327a0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1030A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1030A0u, 0x13279Cu, 0x1327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327A4u;
label_1327a4:
    // 0x1327a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1327a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327a8: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x1327A8u;
    SET_GPR_U32(ctx, 31, 0x1327B0u);
    ctx->pc = 0x1327ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1327A8u;
    // 0x1327ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x1327A8u, 0x1327B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327B0u;
label_1327b0:
    // 0x1327b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1327b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1327b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1327B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1327B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327B4u;
        // 0x1327b8: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1327B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1327BCu;
}
