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

// Function: sub_0025C310
// Address: 0x25c310 - 0x25c4a4
void sub_0025C310_0x25c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C310_0x25c310");
#endif

    switch (ctx->pc) {
        case 0x25c388u: goto label_25c388;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c420u: goto label_25c420;
        default: break;
    }

    ctx->pc = 0x25c310u;

    // 0x25c310: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x25c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x25c314: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x25c314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25c318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25c31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c328: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25c330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c334: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C334u;
    {
        const bool branch_taken_0x25c334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C334u;
        // 0x25c338: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c334) {
            ctx->pc = 0x25C360u;
            goto label_25c360;
        }
    }
    ctx->pc = 0x25C33Cu;
    // 0x25c33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c340: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C340u;
    {
        const bool branch_taken_0x25c340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c340) {
            ctx->pc = 0x25C350u;
            goto label_25c350;
        }
    }
    ctx->pc = 0x25C348u;
    // 0x25c348: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25C348u;
    {
        const bool branch_taken_0x25c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c348) {
            ctx->pc = 0x25C370u;
            goto label_25c370;
        }
    }
    ctx->pc = 0x25C350u;
label_25c350:
    // 0x25c350: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C354u;
    {
        const bool branch_taken_0x25c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C354u;
        // 0x25c358: 0x8c315018  lw          $s1, 0x5018($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c354) {
            ctx->pc = 0x25C378u;
            goto label_25c378;
        }
    }
    ctx->pc = 0x25C35Cu;
    // 0x25c35c: 0x0  nop
    ctx->pc = 0x25c35cu;
    // NOP
label_25c360:
    // 0x25c360: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C364u;
    {
        const bool branch_taken_0x25c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C364u;
        // 0x25c368: 0x8c314fb8  lw          $s1, 0x4FB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c364) {
            ctx->pc = 0x25C378u;
            goto label_25c378;
        }
    }
    ctx->pc = 0x25C36Cu;
    // 0x25c36c: 0x0  nop
    ctx->pc = 0x25c36cu;
    // NOP
label_25c370:
    // 0x25c370: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x25C370u;
    {
        const bool branch_taken_0x25c370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C370u;
        // 0x25c374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c370) {
            ctx->pc = 0x25C488u;
            goto label_25c488;
        }
    }
    ctx->pc = 0x25C378u;
label_25c378:
    // 0x25c378: 0x16200041  bnez        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x25C378u;
    {
        const bool branch_taken_0x25c378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C378u;
        // 0x25c37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c378) {
            ctx->pc = 0x25C480u;
            goto label_25c480;
        }
    }
    ctx->pc = 0x25C380u;
    // 0x25c380: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x25C380u;
    {
        const bool branch_taken_0x25c380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c380) {
            ctx->pc = 0x25C488u;
            goto label_25c488;
        }
    }
    ctx->pc = 0x25C388u;
label_25c388:
    // 0x25c388: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x25c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x25c38c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x25c38cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25c390: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C390u;
    {
        const bool branch_taken_0x25c390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C390u;
        // 0x25c394: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c390) {
            ctx->pc = 0x25C3A0u;
            goto label_25c3a0;
        }
    }
    ctx->pc = 0x25C398u;
    // 0x25c398: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25c398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c39c: 0x0  nop
    ctx->pc = 0x25c39cu;
    // NOP
label_25c3a0:
    // 0x25c3a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C3A0u;
    {
        const bool branch_taken_0x25c3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3a0) {
            ctx->pc = 0x25C3B0u;
            goto label_25c3b0;
        }
    }
    ctx->pc = 0x25C3A8u;
    // 0x25c3a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25C3A8u;
    {
        const bool branch_taken_0x25c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3A8u;
        // 0x25c3ac: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3a8) {
            ctx->pc = 0x25C420u;
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C3B0u;
label_25c3b0:
    // 0x25c3b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x25c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x25c3b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C3B4u;
    {
        const bool branch_taken_0x25c3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3b4) {
            ctx->pc = 0x25C3C8u;
            goto label_25c3c8;
        }
    }
    ctx->pc = 0x25C3BCu;
    // 0x25c3bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25C3BCu;
    {
        const bool branch_taken_0x25c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3BCu;
        // 0x25c3c0: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3bc) {
            ctx->pc = 0x25C420u;
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C3C4u;
    // 0x25c3c4: 0x0  nop
    ctx->pc = 0x25c3c4u;
    // NOP
label_25c3c8:
    // 0x25c3c8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C3C8u;
    {
        const bool branch_taken_0x25c3c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3c8) {
            ctx->pc = 0x25C3E8u;
            goto label_25c3e8;
        }
    }
    ctx->pc = 0x25C3D0u;
    // 0x25c3d0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x25c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x25c3d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25c3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c3d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C3D8u;
    {
        const bool branch_taken_0x25c3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3d8) {
            ctx->pc = 0x25C3E8u;
            goto label_25c3e8;
        }
    }
    ctx->pc = 0x25C3E0u;
    // 0x25c3e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25C3E0u;
    {
        const bool branch_taken_0x25c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3E0u;
        // 0x25c3e4: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3e0) {
            ctx->pc = 0x25C420u;
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C3E8u;
label_25c3e8:
    // 0x25c3e8: 0xc097864  jal         func_25E190
    ctx->pc = 0x25C3E8u;
    SET_GPR_U32(ctx, 31, 0x25C3F0u);
    ctx->pc = 0x25C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C3E8u;
    // 0x25c3ec: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x25C3E8u, 0x25C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3F0u;
label_25c3f0:
    // 0x25c3f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C3F0u;
    {
        const bool branch_taken_0x25c3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3f0) {
            ctx->pc = 0x25C400u;
            goto label_25c400;
        }
    }
    ctx->pc = 0x25C3F8u;
    // 0x25c3f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25C3F8u;
    {
        const bool branch_taken_0x25c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3F8u;
        // 0x25c3fc: 0x8e310018  lw          $s1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3f8) {
            ctx->pc = 0x25C420u;
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C400u;
label_25c400:
    // 0x25c400: 0x2a410040  slti        $at, $s2, 0x40
    ctx->pc = 0x25c400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x25c404: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x25C404u;
    {
        const bool branch_taken_0x25c404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c404) {
            ctx->pc = 0x25C430u;
            goto label_25c430;
        }
    }
    ctx->pc = 0x25C40Cu;
    // 0x25c40c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x25c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x25c410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25c410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25c414: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x25c414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x25c418: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25c418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25c41c: 0x0  nop
    ctx->pc = 0x25c41cu;
    // NOP
label_25c420:
    // 0x25c420: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x25c420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c424: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x25C424u;
    {
        const bool branch_taken_0x25c424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c424) {
            ctx->pc = 0x25C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c388;
        }
    }
    ctx->pc = 0x25C42Cu;
    // 0x25c42c: 0x0  nop
    ctx->pc = 0x25c42cu;
    // NOP
label_25c430:
    // 0x25c430: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C430u;
    {
        const bool branch_taken_0x25c430 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C430u;
        // 0x25c434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c430) {
            ctx->pc = 0x25C440u;
            goto label_25c440;
        }
    }
    ctx->pc = 0x25C438u;
    // 0x25c438: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25C438u;
    {
        const bool branch_taken_0x25c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c438) {
            ctx->pc = 0x25C488u;
            goto label_25c488;
        }
    }
    ctx->pc = 0x25C440u;
label_25c440:
    // 0x25c440: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25c444: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25c448: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x25c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x25c44c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25c44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25c450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25c454: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x25c454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x25c458: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x25c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25c45c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x25c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x25c460: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x25c460u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25c464: 0x0  nop
    ctx->pc = 0x25c464u;
    // NOP
    // 0x25c468: 0x0  nop
    ctx->pc = 0x25c468u;
    // NOP
    // 0x25c46c: 0x1010  mfhi        $v0
    ctx->pc = 0x25c46cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25c470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25c470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c474: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x25c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25c478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25C478u;
    {
        const bool branch_taken_0x25c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C478u;
        // 0x25c47c: 0x8c420050  lw          $v0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c478) {
            ctx->pc = 0x25C488u;
            goto label_25c488;
        }
    }
    ctx->pc = 0x25C480u;
label_25c480:
    // 0x25c480: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x25C480u;
    {
        const bool branch_taken_0x25c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C480u;
        // 0x25c484: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c480) {
            ctx->pc = 0x25C420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c420;
        }
    }
    ctx->pc = 0x25C488u;
label_25c488:
    // 0x25c488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c48c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c48cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c49c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C49Cu;
        // 0x25c4a0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C4A4u;
}
