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

// Function: sub_0010A328
// Address: 0x10a328 - 0x10a410
void sub_0010A328_0x10a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A328_0x10a328");
#endif

    switch (ctx->pc) {
        case 0x10a340u: goto label_10a340;
        case 0x10a350u: goto label_10a350;
        case 0x10a374u: goto label_10a374;
        case 0x10a380u: goto label_10a380;
        case 0x10a390u: goto label_10a390;
        case 0x10a3b8u: goto label_10a3b8;
        case 0x10a3c4u: goto label_10a3c4;
        case 0x10a3d8u: goto label_10a3d8;
        case 0x10a3e4u: goto label_10a3e4;
        default: break;
    }

    ctx->pc = 0x10a328u;

    // 0x10a328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a338: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A338u;
    SET_GPR_U32(ctx, 31, 0x10A340u);
    ctx->pc = 0x10A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A338u;
    // 0x10a33c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A338u, 0x10A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A340u;
label_10a340:
    // 0x10a340: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A340u;
    {
        const bool branch_taken_0x10a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A340u;
        // 0x10a344: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a340) {
            ctx->pc = 0x10A374u;
            goto label_10a374;
        }
    }
    ctx->pc = 0x10A348u;
    // 0x10a348: 0xc042a02  jal         func_10A808
    ctx->pc = 0x10A348u;
    SET_GPR_U32(ctx, 31, 0x10A350u);
    ctx->pc = 0x10A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A348u;
    // 0x10a34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x10A348u, 0x10A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A350u;
label_10a350:
    // 0x10a350: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a354: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x10a354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x10a358: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a360u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a368: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x10a368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x10a36c: 0xc042a02  jal         func_10A808
    ctx->pc = 0x10A36Cu;
    SET_GPR_U32(ctx, 31, 0x10A374u);
    ctx->pc = 0x10A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A36Cu;
    // 0x10a370: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x10A36Cu, 0x10A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A374u;
label_10a374:
    // 0x10a374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a378: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A378u;
    SET_GPR_U32(ctx, 31, 0x10A380u);
    ctx->pc = 0x10A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A378u;
    // 0x10a37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A378u, 0x10A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A380u;
label_10a380:
    // 0x10a380: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A380u;
    {
        const bool branch_taken_0x10a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A380u;
        // 0x10a384: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a380) {
            ctx->pc = 0x10A3B8u;
            goto label_10a3b8;
        }
    }
    ctx->pc = 0x10A388u;
    // 0x10a388: 0xc042a02  jal         func_10A808
    ctx->pc = 0x10A388u;
    SET_GPR_U32(ctx, 31, 0x10A390u);
    ctx->pc = 0x10A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A388u;
    // 0x10a38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x10A388u, 0x10A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A390u;
label_10a390:
    // 0x10a390: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a394: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x10a394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10a398: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10a39c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x10a3a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10a3a0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10a3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a3a8: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x10a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x10a3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3b0: 0xc042a02  jal         func_10A808
    ctx->pc = 0x10A3B0u;
    SET_GPR_U32(ctx, 31, 0x10A3B8u);
    ctx->pc = 0x10A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3B0u;
    // 0x10a3b4: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x10A3B0u, 0x10A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3B8u;
label_10a3b8:
    // 0x10a3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3bc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A3BCu;
    SET_GPR_U32(ctx, 31, 0x10A3C4u);
    ctx->pc = 0x10A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3BCu;
    // 0x10a3c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A3BCu, 0x10A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3C4u;
label_10a3c4:
    // 0x10a3c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A3C4u;
    {
        const bool branch_taken_0x10a3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C4u;
        // 0x10a3c8: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3c4) {
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3CCu;
    // 0x10a3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3d0: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10A3D0u;
    SET_GPR_U32(ctx, 31, 0x10A3D8u);
    ctx->pc = 0x10A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3D0u;
    // 0x10a3d4: 0x24a52030  addiu       $a1, $a1, 0x2030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10A3D0u, 0x10A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D8u;
label_10a3d8:
    // 0x10a3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3dc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A3DCu;
    SET_GPR_U32(ctx, 31, 0x10A3E4u);
    ctx->pc = 0x10A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3DCu;
    // 0x10a3e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A3DCu, 0x10A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3E4u;
label_10a3e4:
    // 0x10a3e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A3E4u;
    {
        const bool branch_taken_0x10a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E4u;
        // 0x10a3e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3e4) {
            ctx->pc = 0x10A404u;
            goto label_10a404;
        }
    }
    ctx->pc = 0x10A3ECu;
    // 0x10a3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10a3f4: 0x24a52058  addiu       $a1, $a1, 0x2058
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8280));
    // 0x10a3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a3fc: 0x8043536  j           func_10D4D8
    ctx->pc = 0x10A3FCu;
    ctx->pc = 0x10A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3FCu;
    // 0x10a400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    sub_0010D4D8_0x10d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x10A404u;
label_10a404:
    // 0x10a404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a408: 0x3e00008  jr          $ra
    ctx->pc = 0x10A408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A408u;
        // 0x10a40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A410u;
}
