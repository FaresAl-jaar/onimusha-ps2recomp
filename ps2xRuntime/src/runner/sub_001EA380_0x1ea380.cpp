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

// Function: sub_001EA380
// Address: 0x1ea380 - 0x1ea3f8
void sub_001EA380_0x1ea380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA380_0x1ea380");
#endif

    switch (ctx->pc) {
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3e0u: goto label_1ea3e0;
        default: break;
    }

    ctx->pc = 0x1ea380u;

    // 0x1ea380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ea384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ea388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea394: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1EA394u;
    SET_GPR_U32(ctx, 31, 0x1EA39Cu);
    ctx->pc = 0x1EA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA394u;
    // 0x1ea398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EA394u, 0x1EA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA39Cu;
label_1ea39c:
    // 0x1ea39c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ea3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ea3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3a4: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1EA3A4u;
    SET_GPR_U32(ctx, 31, 0x1EA3ACu);
    ctx->pc = 0x1EA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3A4u;
    // 0x1ea3a8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EA3A4u, 0x1EA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3ACu;
label_1ea3ac:
    // 0x1ea3ac: 0x7a220080  lq          $v0, 0x80($s1)
    ctx->pc = 0x1ea3acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ea3b0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ea3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ea3b4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ea3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea3b8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ea3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ea3bc: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ea3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea3c0: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1ea3c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ea3c4: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1ea3c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1ea3c8: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1EA3C8u;
    SET_GPR_U32(ctx, 31, 0x1EA3D0u);
    ctx->pc = 0x1EA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3C8u;
    // 0x1ea3cc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EA3C8u, 0x1EA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3D0u;
label_1ea3d0:
    // 0x1ea3d0: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x1ea3d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1ea3d4: 0x9226003b  lbu         $a2, 0x3B($s1)
    ctx->pc = 0x1ea3d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    // 0x1ea3d8: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1EA3D8u;
    SET_GPR_U32(ctx, 31, 0x1EA3E0u);
    ctx->pc = 0x1EA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3D8u;
    // 0x1ea3dc: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EA3D8u, 0x1EA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3E0u;
label_1ea3e0:
    // 0x1ea3e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F0u;
        // 0x1ea3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA3F8u;
}
