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

// Function: sub_0021A318
// Address: 0x21a318 - 0x21a3e0
void sub_0021A318_0x21a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A318_0x21a318");
#endif

    switch (ctx->pc) {
        case 0x21a334u: goto label_21a334;
        case 0x21a344u: goto label_21a344;
        case 0x21a364u: goto label_21a364;
        case 0x21a388u: goto label_21a388;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3c8u: goto label_21a3c8;
        default: break;
    }

    ctx->pc = 0x21a318u;

    // 0x21a318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a31c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21a320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a324: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21a328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21a32c: 0xc084990  jal         func_212640
    ctx->pc = 0x21A32Cu;
    SET_GPR_U32(ctx, 31, 0x21A334u);
    ctx->pc = 0x21A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A32Cu;
    // 0x21a330: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21A32Cu, 0x21A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A334u;
label_21a334:
    // 0x21a334: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21a338: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x21a33c: 0xc086934  jal         func_21A4D0
    ctx->pc = 0x21A33Cu;
    SET_GPR_U32(ctx, 31, 0x21A344u);
    ctx->pc = 0x21A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A33Cu;
    // 0x21a340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A4D0u, 0x21A33Cu, 0x21A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A344u;
label_21a344:
    // 0x21a344: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x21a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21a348: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a350: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x21a350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x21a354: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x21a354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21a358: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x21a358u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21a35c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21A35Cu;
    SET_GPR_U32(ctx, 31, 0x21A364u);
    ctx->pc = 0x21A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A35Cu;
    // 0x21a360: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21A35Cu, 0x21A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A364u;
label_21a364:
    // 0x21a364: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21a364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a368: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21a36c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21A36Cu;
    {
        const bool branch_taken_0x21a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a36c) {
            ctx->pc = 0x21A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A36Cu;
            // 0x21a370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3C0u;
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A374u;
    // 0x21a374: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A374u;
    {
        const bool branch_taken_0x21a374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A374u;
        // 0x21a378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a374) {
            ctx->pc = 0x21A390u;
            goto label_21a390;
        }
    }
    ctx->pc = 0x21A37Cu;
    // 0x21a37c: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x21a380: 0xc08857e  jal         func_2215F8
    ctx->pc = 0x21A380u;
    SET_GPR_U32(ctx, 31, 0x21A388u);
    ctx->pc = 0x21A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A380u;
    // 0x21a384: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215F8u, 0x21A380u, 0x21A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A388u;
label_21a388:
    // 0x21a388: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21A388u;
    {
        const bool branch_taken_0x21a388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a388) {
            ctx->pc = 0x21A38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A388u;
            // 0x21a38c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3C0u;
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A390u;
label_21a390:
    // 0x21a390: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a394: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21A394u;
    {
        const bool branch_taken_0x21a394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a394) {
            ctx->pc = 0x21A398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A394u;
            // 0x21a398: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3C0u;
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A39Cu;
    // 0x21a39c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A39Cu;
    {
        const bool branch_taken_0x21a39c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a39c) {
            ctx->pc = 0x21A3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A39Cu;
            // 0x21a3a0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3C0u;
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A3A4u;
    // 0x21a3a4: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x21a3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3ac: 0xc08857e  jal         func_2215F8
    ctx->pc = 0x21A3ACu;
    SET_GPR_U32(ctx, 31, 0x21A3B4u);
    ctx->pc = 0x21A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3ACu;
    // 0x21a3b0: 0x8c450038  lw          $a1, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215F8u, 0x21A3ACu, 0x21A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3B4u;
label_21a3b4:
    // 0x21a3b4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A3B4u;
    {
        const bool branch_taken_0x21a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3b4) {
            ctx->pc = 0x21A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A3B4u;
            // 0x21a3b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3C0u;
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A3BCu;
    // 0x21a3bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21a3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a3c0:
    // 0x21a3c0: 0xc084996  jal         func_212658
    ctx->pc = 0x21A3C0u;
    SET_GPR_U32(ctx, 31, 0x21A3C8u);
    ctx->pc = 0x21A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3C0u;
    // 0x21a3c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21A3C0u, 0x21A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3C8u;
label_21a3c8:
    // 0x21a3c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21a3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a3d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a3d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D8u;
        // 0x21a3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A3E0u;
}
