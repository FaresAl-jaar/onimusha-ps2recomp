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

// Function: sub_001EB3A0
// Address: 0x1eb3a0 - 0x1eb418
void sub_001EB3A0_0x1eb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB3A0_0x1eb3a0");
#endif

    switch (ctx->pc) {
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb400u: goto label_1eb400;
        default: break;
    }

    ctx->pc = 0x1eb3a0u;

    // 0x1eb3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3b4: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1EB3B4u;
    SET_GPR_U32(ctx, 31, 0x1EB3BCu);
    ctx->pc = 0x1EB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3B4u;
    // 0x1eb3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EB3B4u, 0x1EB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3BCu;
label_1eb3bc:
    // 0x1eb3bc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1eb3c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3c4: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1EB3C4u;
    SET_GPR_U32(ctx, 31, 0x1EB3CCu);
    ctx->pc = 0x1EB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3C4u;
    // 0x1eb3c8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EB3C4u, 0x1EB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3CCu;
label_1eb3cc:
    // 0x1eb3cc: 0x7a2200a0  lq          $v0, 0xA0($s1)
    ctx->pc = 0x1eb3ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1eb3d0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1eb3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1eb3d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1eb3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eb3d8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1eb3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eb3dc: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1eb3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb3e0: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1eb3e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1eb3e4: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1eb3e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x1eb3e8: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1EB3E8u;
    SET_GPR_U32(ctx, 31, 0x1EB3F0u);
    ctx->pc = 0x1EB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3E8u;
    // 0x1eb3ec: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EB3E8u, 0x1EB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3F0u;
label_1eb3f0:
    // 0x1eb3f0: 0x92250036  lbu         $a1, 0x36($s1)
    ctx->pc = 0x1eb3f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1eb3f4: 0x92260037  lbu         $a2, 0x37($s1)
    ctx->pc = 0x1eb3f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x1eb3f8: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1EB3F8u;
    SET_GPR_U32(ctx, 31, 0x1EB400u);
    ctx->pc = 0x1EB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB3F8u;
    // 0x1eb3fc: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EB3F8u, 0x1EB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB400u;
label_1eb400:
    // 0x1eb400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb410: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB410u;
        // 0x1eb414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB418u;
}
