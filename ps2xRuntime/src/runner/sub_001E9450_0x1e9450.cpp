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

// Function: sub_001E9450
// Address: 0x1e9450 - 0x1e94c8
void sub_001E9450_0x1e9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9450_0x1e9450");
#endif

    switch (ctx->pc) {
        case 0x1e946cu: goto label_1e946c;
        case 0x1e947cu: goto label_1e947c;
        case 0x1e94a0u: goto label_1e94a0;
        case 0x1e94b0u: goto label_1e94b0;
        default: break;
    }

    ctx->pc = 0x1e9450u;

    // 0x1e9450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e945c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9464: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E9464u;
    SET_GPR_U32(ctx, 31, 0x1E946Cu);
    ctx->pc = 0x1E9468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9464u;
    // 0x1e9468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E9464u, 0x1E946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E946Cu;
label_1e946c:
    // 0x1e946c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e9470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9474: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E9474u;
    SET_GPR_U32(ctx, 31, 0x1E947Cu);
    ctx->pc = 0x1E9478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9474u;
    // 0x1e9478: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E9474u, 0x1E947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E947Cu;
label_1e947c:
    // 0x1e947c: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x1e947cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1e9480: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1e9480u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1e9484: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1e9484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9488: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1e9488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e948c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e948cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9490: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1e9490u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1e9494: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1e9494u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1e9498: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1E9498u;
    SET_GPR_U32(ctx, 31, 0x1E94A0u);
    ctx->pc = 0x1E949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9498u;
    // 0x1e949c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E9498u, 0x1E94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94A0u;
label_1e94a0:
    // 0x1e94a0: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x1e94a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1e94a4: 0x9226003b  lbu         $a2, 0x3B($s1)
    ctx->pc = 0x1e94a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    // 0x1e94a8: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1E94A8u;
    SET_GPR_U32(ctx, 31, 0x1E94B0u);
    ctx->pc = 0x1E94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94A8u;
    // 0x1e94ac: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E94A8u, 0x1E94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94B0u;
label_1e94b0:
    // 0x1e94b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e94b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e94b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e94b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e94bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e94bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e94c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E94C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94C0u;
        // 0x1e94c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E94C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E94C8u;
}
