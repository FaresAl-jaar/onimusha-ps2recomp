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

// Function: sub_0020E328
// Address: 0x20e328 - 0x20e418
void sub_0020E328_0x20e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E328_0x20e328");
#endif

    switch (ctx->pc) {
        case 0x20e384u: goto label_20e384;
        case 0x20e398u: goto label_20e398;
        case 0x20e3a8u: goto label_20e3a8;
        case 0x20e3bcu: goto label_20e3bc;
        case 0x20e3d4u: goto label_20e3d4;
        case 0x20e3f4u: goto label_20e3f4;
        default: break;
    }

    ctx->pc = 0x20e328u;

    // 0x20e328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e32c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20e32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e330: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20e334: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20e334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e338: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20e338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20e33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e340: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20e344: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20e348: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20e34c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x20e34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x20e350: 0x8e932004  lw          $s3, 0x2004($s4)
    ctx->pc = 0x20e350u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8196)));
    // 0x20e354: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E354u;
    {
        const bool branch_taken_0x20e354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E354u;
        // 0x20e358: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e354) {
            ctx->pc = 0x20E37Cu;
            goto label_20e37c;
        }
    }
    ctx->pc = 0x20E35Cu;
    // 0x20e35c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E35Cu;
    {
        const bool branch_taken_0x20e35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e35c) {
            ctx->pc = 0x20E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E35Cu;
            // 0x20e360: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E378u;
            goto label_20e378;
        }
    }
    ctx->pc = 0x20E364u;
    // 0x20e364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e368: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E368u;
    {
        const bool branch_taken_0x20e368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E368u;
        // 0x20e36c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e368) {
            ctx->pc = 0x20E390u;
            goto label_20e390;
        }
    }
    ctx->pc = 0x20E370u;
    // 0x20e370: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20E370u;
    {
        const bool branch_taken_0x20e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E370u;
        // 0x20e374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e370) {
            ctx->pc = 0x20E3FCu;
            goto label_20e3fc;
        }
    }
    ctx->pc = 0x20E378u;
label_20e378:
    // 0x20e378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e37c:
    // 0x20e37c: 0xc08391a  jal         func_20E468
    ctx->pc = 0x20E37Cu;
    SET_GPR_U32(ctx, 31, 0x20E384u);
    ctx->pc = 0x20E468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E468u, 0x20E37Cu, 0x20E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E384u;
label_20e384:
    // 0x20e384: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20E384u;
    {
        const bool branch_taken_0x20e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E384u;
        // 0x20e388: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e384) {
            ctx->pc = 0x20E3F8u;
            goto label_20e3f8;
        }
    }
    ctx->pc = 0x20E38Cu;
    // 0x20e38c: 0x0  nop
    ctx->pc = 0x20e38cu;
    // NOP
label_20e390:
    // 0x20e390: 0xc083702  jal         func_20DC08
    ctx->pc = 0x20E390u;
    SET_GPR_U32(ctx, 31, 0x20E398u);
    ctx->pc = 0x20E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E390u;
    // 0x20e394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC08u, 0x20E390u, 0x20E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E398u;
label_20e398:
    // 0x20e398: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E398u;
        // 0x20e39c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E3F8u;
            goto label_20e3f8;
        }
    }
    ctx->pc = 0x20E3A0u;
    // 0x20e3a0: 0xc08e926  jal         func_23A498
    ctx->pc = 0x20E3A0u;
    SET_GPR_U32(ctx, 31, 0x20E3A8u);
    ctx->pc = 0x20E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3A0u;
    // 0x20e3a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A498u, 0x20E3A0u, 0x20E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3A8u;
label_20e3a8:
    // 0x20e3a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20e3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20e3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20e3b4: 0xc08393c  jal         func_20E4F0
    ctx->pc = 0x20E3B4u;
    SET_GPR_U32(ctx, 31, 0x20E3BCu);
    ctx->pc = 0x20E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3B4u;
    // 0x20e3b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4F0u, 0x20E3B4u, 0x20E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3BCu;
label_20e3bc:
    // 0x20e3bc: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x20e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x20e3c0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e3c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x20e3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e3cc: 0xc08ef24  jal         func_23BC90
    ctx->pc = 0x20E3CCu;
    SET_GPR_U32(ctx, 31, 0x20E3D4u);
    ctx->pc = 0x20E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3CCu;
    // 0x20e3d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BC90u, 0x20E3CCu, 0x20E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3D4u;
label_20e3d4:
    // 0x20e3d4: 0x26841020  addiu       $a0, $s4, 0x1020
    ctx->pc = 0x20e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4128));
    // 0x20e3d8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20e3dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e3e0: 0xae700030  sw          $s0, 0x30($s3)
    ctx->pc = 0x20e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    // 0x20e3e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20e3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e3e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20e3ec: 0xc088974  jal         func_2225D0
    ctx->pc = 0x20E3ECu;
    SET_GPR_U32(ctx, 31, 0x20E3F4u);
    ctx->pc = 0x20E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E3ECu;
    // 0x20e3f0: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D0u, 0x20E3ECu, 0x20E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3F4u;
label_20e3f4:
    // 0x20e3f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20e3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20e3f8:
    // 0x20e3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e3fc:
    // 0x20e3fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20e3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20e400: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20e400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e404: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20e404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20e408: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20e408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e40c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x20e40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20e410: 0x3e00008  jr          $ra
    ctx->pc = 0x20E410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E410u;
        // 0x20e414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E418u;
}
