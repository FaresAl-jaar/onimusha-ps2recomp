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

// Function: sub_001EDD30
// Address: 0x1edd30 - 0x1edda8
void sub_001EDD30_0x1edd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDD30_0x1edd30");
#endif

    switch (ctx->pc) {
        case 0x1edd4cu: goto label_1edd4c;
        case 0x1edd5cu: goto label_1edd5c;
        case 0x1edd80u: goto label_1edd80;
        case 0x1edd90u: goto label_1edd90;
        default: break;
    }

    ctx->pc = 0x1edd30u;

    // 0x1edd30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1edd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edd34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1edd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1edd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edd3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edd40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1edd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd44: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1EDD44u;
    SET_GPR_U32(ctx, 31, 0x1EDD4Cu);
    ctx->pc = 0x1EDD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD44u;
    // 0x1edd48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EDD44u, 0x1EDD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD4Cu;
label_1edd4c:
    // 0x1edd4c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1edd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1edd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd54: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1EDD54u;
    SET_GPR_U32(ctx, 31, 0x1EDD5Cu);
    ctx->pc = 0x1EDD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD54u;
    // 0x1edd58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EDD54u, 0x1EDD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD5Cu;
label_1edd5c:
    // 0x1edd5c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1edd5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1edd60: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1edd60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1edd64: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1edd64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1edd68: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1edd68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1edd6c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1edd6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edd70: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1edd70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1edd74: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1edd74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x1edd78: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1EDD78u;
    SET_GPR_U32(ctx, 31, 0x1EDD80u);
    ctx->pc = 0x1EDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD78u;
    // 0x1edd7c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EDD78u, 0x1EDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD80u;
label_1edd80:
    // 0x1edd80: 0x92250036  lbu         $a1, 0x36($s1)
    ctx->pc = 0x1edd80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1edd84: 0x92260037  lbu         $a2, 0x37($s1)
    ctx->pc = 0x1edd84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x1edd88: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1EDD88u;
    SET_GPR_U32(ctx, 31, 0x1EDD90u);
    ctx->pc = 0x1EDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD88u;
    // 0x1edd8c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EDD88u, 0x1EDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD90u;
label_1edd90:
    // 0x1edd90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1edd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1edd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1edd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edda0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDA0u;
        // 0x1edda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDDA8u;
}
