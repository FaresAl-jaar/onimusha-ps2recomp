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

// Function: sub_0021C340
// Address: 0x21c340 - 0x21c454
void sub_0021C340_0x21c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C340_0x21c340");
#endif

    switch (ctx->pc) {
        case 0x21c384u: goto label_21c384;
        case 0x21c3a0u: goto label_21c3a0;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3e0u: goto label_21c3e0;
        case 0x21c3f0u: goto label_21c3f0;
        case 0x21c400u: goto label_21c400;
        case 0x21c410u: goto label_21c410;
        case 0x21c420u: goto label_21c420;
        default: break;
    }

    ctx->pc = 0x21c340u;

    // 0x21c340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c354: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c358: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x21c358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x21c35c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x21c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21c360: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x21c360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x21c364: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x21C364u;
    {
        const bool branch_taken_0x21c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c364) {
            ctx->pc = 0x21C368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C364u;
            // 0x21c368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C440u;
            goto label_21c440;
        }
    }
    ctx->pc = 0x21C36Cu;
    // 0x21c36c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x21c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x21c370: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x21C370u;
    {
        const bool branch_taken_0x21c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c370) {
            ctx->pc = 0x21C374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C370u;
            // 0x21c374: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C440u;
            goto label_21c440;
        }
    }
    ctx->pc = 0x21C378u;
    // 0x21c378: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x21c378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x21c37c: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x21C37Cu;
    SET_GPR_U32(ctx, 31, 0x21C384u);
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21C37Cu, 0x21C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C384u;
label_21c384:
    // 0x21c384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21c384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c388: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x21c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x21c38c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x21c38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21c390: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C390u;
    {
        const bool branch_taken_0x21c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c390) {
            ctx->pc = 0x21C394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C390u;
            // 0x21c394: 0x8e300048  lw          $s0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C3A4u;
            goto label_21c3a4;
        }
    }
    ctx->pc = 0x21C398u;
    // 0x21c398: 0xc087116  jal         func_21C458
    ctx->pc = 0x21C398u;
    SET_GPR_U32(ctx, 31, 0x21C3A0u);
    ctx->pc = 0x21C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C398u;
    // 0x21c39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C458u, 0x21C398u, 0x21C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3A0u;
label_21c3a0:
    // 0x21c3a0: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x21c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_21c3a4:
    // 0x21c3a4: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x21c3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21c3a8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21C3A8u;
    {
        const bool branch_taken_0x21c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c3a8) {
            ctx->pc = 0x21C3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C3A8u;
            // 0x21c3ac: 0xae300048  sw          $s0, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C418u;
            goto label_21c418;
        }
    }
    ctx->pc = 0x21C3B0u;
    // 0x21c3b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21c3b4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x21c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x21c3b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c3bc: 0x8c638c50  lw          $v1, -0x73B0($v1)
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937680)));
    // 0x21c3c0: 0x600008  jr          $v1
    ctx->pc = 0x21C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C3C8u: goto label_21c3c8;
            case 0x21C3D8u: goto label_21c3d8;
            case 0x21C3E8u: goto label_21c3e8;
            case 0x21C3F8u: goto label_21c3f8;
            case 0x21C408u: goto label_21c408;
            case 0x21C414u: goto label_21c414;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C3C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21C3C8u;
label_21c3c8:
    // 0x21c3c8: 0xc087126  jal         func_21C498
    ctx->pc = 0x21C3C8u;
    SET_GPR_U32(ctx, 31, 0x21C3D0u);
    ctx->pc = 0x21C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3C8u;
    // 0x21c3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C498u, 0x21C3C8u, 0x21C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3D0u;
label_21c3d0:
    // 0x21c3d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21C3D0u;
    {
        const bool branch_taken_0x21c3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3D0u;
        // 0x21c3d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3d0) {
            ctx->pc = 0x21C414u;
            goto label_21c414;
        }
    }
    ctx->pc = 0x21C3D8u;
label_21c3d8:
    // 0x21c3d8: 0xc087132  jal         func_21C4C8
    ctx->pc = 0x21C3D8u;
    SET_GPR_U32(ctx, 31, 0x21C3E0u);
    ctx->pc = 0x21C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3D8u;
    // 0x21c3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C4C8u, 0x21C3D8u, 0x21C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3E0u;
label_21c3e0:
    // 0x21c3e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21C3E0u;
    {
        const bool branch_taken_0x21c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3E0u;
        // 0x21c3e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3e0) {
            ctx->pc = 0x21C414u;
            goto label_21c414;
        }
    }
    ctx->pc = 0x21C3E8u;
label_21c3e8:
    // 0x21c3e8: 0xc087218  jal         func_21C860
    ctx->pc = 0x21C3E8u;
    SET_GPR_U32(ctx, 31, 0x21C3F0u);
    ctx->pc = 0x21C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3E8u;
    // 0x21c3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C860u, 0x21C3E8u, 0x21C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3F0u;
label_21c3f0:
    // 0x21c3f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C3F0u;
    {
        const bool branch_taken_0x21c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3F0u;
        // 0x21c3f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3f0) {
            ctx->pc = 0x21C414u;
            goto label_21c414;
        }
    }
    ctx->pc = 0x21C3F8u;
label_21c3f8:
    // 0x21c3f8: 0xc087240  jal         func_21C900
    ctx->pc = 0x21C3F8u;
    SET_GPR_U32(ctx, 31, 0x21C400u);
    ctx->pc = 0x21C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3F8u;
    // 0x21c3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C900u, 0x21C3F8u, 0x21C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C400u;
label_21c400:
    // 0x21c400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21C400u;
    {
        const bool branch_taken_0x21c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C400u;
        // 0x21c404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c400) {
            ctx->pc = 0x21C414u;
            goto label_21c414;
        }
    }
    ctx->pc = 0x21C408u;
label_21c408:
    // 0x21c408: 0xc08725c  jal         func_21C970
    ctx->pc = 0x21C408u;
    SET_GPR_U32(ctx, 31, 0x21C410u);
    ctx->pc = 0x21C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C408u;
    // 0x21c40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C970u, 0x21C408u, 0x21C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C410u;
label_21c410:
    // 0x21c410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c414:
    // 0x21c414: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x21c414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_21c418:
    // 0x21c418: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x21C418u;
    SET_GPR_U32(ctx, 31, 0x21C420u);
    ctx->pc = 0x21C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C418u;
    // 0x21c41c: 0x26303760  addiu       $s0, $s1, 0x3760 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21C418u, 0x21C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C420u;
label_21c420:
    // 0x21c420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c424: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x21c424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x21c428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c438: 0x80886fa  j           func_221BE8
    ctx->pc = 0x21C438u;
    ctx->pc = 0x21C43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C438u;
    // 0x21c43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BE8u;
    sub_00221BE8_0x221be8(rdram, ctx, runtime); return;
    ctx->pc = 0x21C440u;
label_21c440:
    // 0x21c440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c444: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c448: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C44Cu;
        // 0x21c450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C454u;
}
